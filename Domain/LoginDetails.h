#ifndef LOGINDETAILS_H
#define LOGINDETAILS_H
#include <QString>
#include "serializable.h"
class LoginDetails : public Serializable
{
public:
    LoginDetails(QString username, QString password)
    {
        setUserName(username);
        setPassword(password);
    }
    Q_PROPERTY(QString UserName READ UserName WRITE setUserName NOTIFY UserNameChanged)
    Q_PROPERTY(QString Password READ Password WRITE setPassword NOTIFY PasswordChanged)
    QString UserName() const
    {
        return m_UserName;
    }
    QString Password() const
    {
        return m_Password;
    }

public slots:
    void setUserName(QString arg)
    {
        if (m_UserName != arg) {
            m_UserName = arg;
            emit UserNameChanged(arg);
        }
    }
    void setPassword(QString arg)
    {
        if (m_Password != arg) {
            m_Password = arg;
            emit PasswordChanged(arg);
        }
    }

signals:
    void UserNameChanged(QString arg);
    void PasswordChanged(QString arg);

private:
    QString m_UserName;
    QString m_Password;
};
#endif // LOGINDETAILS_H
