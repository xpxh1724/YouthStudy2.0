#include "login.h"
#include "ui_login.h"

#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QListView>
#include <QSqlQuery>
#include <QSqlError>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("青年大学习后台管理系统-登录");
    ui->IdentityBox->setView(new QListView());
}

Login::~Login()
{
    delete ui;
}
//读取默认账号信息
void Login::initUser()
{
    QSqlQuery xp;
    if(xp.exec("select *from defaultmsg;"))
    {
        xp.next();
        ui->usernameLine->setText(xp.value(0).toString());
        ui->passwordLine->setText(xp.value(1).toString());
        ui->IdentityBox->setCurrentText(xp.value(2).toString());
    }
    else {
        QMessageBox::information(this,"读取默认账号信息提示","读取默认账号信息失败！\n"+xp.lastError().text());
        return;
    }
}
//设置登录信息
void Login::setInitMsg(QString user, QString pwd, QString identity)
{
    ui->usernameLine->setText(user);
    ui->passwordLine->setText(pwd);
    ui->IdentityBox->setCurrentText(identity);
}

void Login::againLogin()
{
    userList.clear();
}
//登录
void Login::on_btnLogin_clicked()
{
    QString user=ui->usernameLine->text();
    QString pwd=ui->passwordLine->text();
    QString identity=ui->IdentityBox->currentText();
    QSqlQuery xp;
    if(!xp.exec("select user,pwd from userlist;"))
    {
        QMessageBox::information(this,"登录初始化提示","查询账号列表错误！"+xp.lastError().text());
        return;
    }
    userList.clear();
    while (xp.next()) userList.append(xp.value(0).toString()+" "+xp.value(1).toString());
    if(user.isEmpty()||pwd.isEmpty())
    {
        QMessageBox::information(this,"登录提示","UserName/PassWord不能为空！");
        return;
    }
    if(xp.exec(QString("select *from userlist where user='%1';").arg(user)))
    {
        if(!xp.next())
        {
            QMessageBox::information(this,"登录提示",QString("账号 %1 不存在！").arg(user));
            return;
        }
        if(xp.value(1).toString()!=pwd)
        {
            QMessageBox::information(this,"登录提示","PassWord错误！");
            return;
        }
        if(xp.value(2).toString()!=identity)
        {
            QMessageBox::information(this,"登录提示","Identity错误！");
            return;
        }
        qDebug()<<"账号: "<<user<<"登录成功";
        if(identity=="团支书")
            emit loginSuccess(user,pwd);
        else if(identity=="老师")
        {
            QString str=user.split("团支部").at(0);
            QStringList users;
            for(auto a:userList)
            {
                if(a.split(' ').at(0).contains(str)&&a.split(' ').at(0).contains("团支部")&&a.split(' ').at(0)!=user)
                {
                    users.append(a);
                }
            }
            emit loginTeacher(users,user);
        }
    }
    else {
        QMessageBox::information(this,"登录提示",QString("查询账号出错！\n%1").arg(xp.lastError().text()));
        return;
    }
}
//录入其他账号
void Login::on_btnInput_clicked()
{
    emit inputOtherUser();
}
