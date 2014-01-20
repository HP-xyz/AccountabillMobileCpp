#ifndef REGISTEREDUSER_H
#define REGISTEREDUSER_H
#include "BankingDetail.h"
#include <QString>
#include <QDateTime>
#include <QObject>
#include <QUuid>
class RegisteredUser
{
    Q_OBJECT
public:
    Q_PROPERTY(int UserId READ UserId WRITE setUserId NOTIFY UserIdChanged)
    Q_PROPERTY(QUuid UniqueReference READ UniqueReference WRITE setUniqueReference NOTIFY UniqueReferenceChanged)
    Q_PROPERTY(QDateTime ExpiryDate READ ExpiryDate WRITE setExpiryDate NOTIFY ExpiryDateChanged)
    Q_PROPERTY(QString ConfirmationCode READ ConfirmationCode WRITE setConfirmationCode NOTIFY ConfirmationCodeChanged)
    Q_PROPERTY(BankingDetail BankingDetails READ BankingDetails WRITE setBankingDetails NOTIFY BankingDetailsChanged)
    Q_PROPERTY(QString CNSCustomerNumber READ CNSCustomerNumber WRITE setCNSCustomerNumber NOTIFY CNSCustomerNumberChanged)
    Q_PROPERTY(bool IsValidPassword READ IsValidPassword WRITE setIsValidPassword NOTIFY IsValidPasswordChanged)
    Q_PROPERTY(QString Surname READ Surname WRITE setSurname NOTIFY SurnameChanged)
    Q_PROPERTY(QString Message READ Message WRITE setMessage NOTIFY MessageChanged)
    Q_PROPERTY(QString UserName READ UserName WRITE setUserName NOTIFY UserNameChanged)
    Q_PROPERTY(QString UserNamePrefix READ UserNamePrefix WRITE setUserNamePrefix NOTIFY UserNamePrefixChanged)
    Q_PROPERTY(QString Name READ Name WRITE setName NOTIFY NameChanged)
    Q_PROPERTY(QString Email READ Email WRITE setEmail NOTIFY EmailChanged)
    Q_PROPERTY(bool IsOk READ IsOk WRITE setIsOk NOTIFY IsOkChanged)
    Q_PROPERTY(QString ErrorMessage READ ErrorMessage WRITE setErrorMessage NOTIFY ErrorMessageChanged)
    int UserId() const
    {
        return m_UserId;
    }
    QUuid UniqueReference() const
    {
        return m_UniqueReference;
    }

    QDateTime ExpiryDate() const
    {
        return m_ExpiryDate;
    }

    QString ConfirmationCode() const
    {
        return m_ConfirmationCode;
    }

    BankingDetail BankingDetails() const
    {
        return m_BankingDetails;
    }

    QString CNSCustomerNumber() const
    {
        return m_CNSCustomerNumber;
    }

    bool IsValidPassword() const
    {
        return m_IsValidPassword;
    }

    QString Surname() const
    {
        return m_Surname;
    }

    QString Message() const
    {
        return m_Message;
    }

    QString UserName() const
    {
        return m_UserName;
    }

    QString UserNamePrefix() const
    {
        return m_UserNamePrefix;
    }

    QString Name() const
    {
        return m_Name;
    }

    QString Email() const
    {
        return m_Email;
    }

    bool IsOk() const
    {
        return m_IsOk;
    }

    QString ErrorMessage() const
    {
        return m_ErrorMessage;
    }

public slots:
    void setUserId(int arg)
    {
        if (m_UserId != arg) {
            m_UserId = arg;
            emit UserIdChanged(arg);
        }
    }
    void setUniqueReference(QUuid arg)
    {
        if (m_UniqueReference != arg) {
            m_UniqueReference = arg;
            emit UniqueReferenceChanged(arg);
        }
    }

    void setExpiryDate(QDateTime arg)
    {
        if (m_ExpiryDate != arg) {
            m_ExpiryDate = arg;
            emit ExpiryDateChanged(arg);
        }
    }

    void setConfirmationCode(QString arg)
    {
        if (m_ConfirmationCode != arg) {
            m_ConfirmationCode = arg;
            emit ConfirmationCodeChanged(arg);
        }
    }

    void setBankingDetails(BankingDetail arg)
    {
        if (m_BankingDetails != arg) {
            m_BankingDetails = arg;
            emit BankingDetailsChanged(arg);
        }
    }

    void setCNSCustomerNumber(QString arg)
    {
        if (m_CNSCustomerNumber != arg) {
            m_CNSCustomerNumber = arg;
            emit CNSCustomerNumberChanged(arg);
        }
    }

    void setIsValidPassword(bool arg)
    {
        if (m_IsValidPassword != arg) {
            m_IsValidPassword = arg;
            emit IsValidPasswordChanged(arg);
        }
    }

    void setSurname(QString arg)
    {
        if (m_Surname != arg) {
            m_Surname = arg;
            emit SurnameChanged(arg);
        }
    }

    void setMessage(QString arg)
    {
        if (m_Message != arg) {
            m_Message = arg;
            emit MessageChanged(arg);
        }
    }

    void setUserName(QString arg)
    {
        if (m_UserName != arg) {
            m_UserName = arg;
            emit UserNameChanged(arg);
        }
    }

    void setUserNamePrefix(QString arg)
    {
        if (m_UserNamePrefix != arg) {
            m_UserNamePrefix = arg;
            emit UserNamePrefixChanged(arg);
        }
    }

    void setName(QString arg)
    {
        if (m_Name != arg) {
            m_Name = arg;
            emit NameChanged(arg);
        }
    }

    void setEmail(QString arg)
    {
        if (m_Email != arg) {
            m_Email = arg;
            emit EmailChanged(arg);
        }
    }

    void setIsOk(bool arg)
    {
        if (m_IsOk != arg) {
            m_IsOk = arg;
            emit IsOkChanged(arg);
        }
    }

    void setErrorMessage(QString arg)
    {
        if (m_ErrorMessage != arg) {
            m_ErrorMessage = arg;
            emit ErrorMessageChanged(arg);
        }
    }

signals:
    void UserIdChanged(int arg);
    void UniqueReferenceChanged(QUuid arg);
    void ExpiryDateChanged(QDateTime arg);
    void ConfirmationCodeChanged(QString arg);
    void BankingDetailsChanged(BankingDetail arg);
    void CNSCustomerNumberChanged(QString arg);
    void IsValidPasswordChanged(bool arg);
    void SurnameChanged(QString arg);
    void MessageChanged(QString arg);
    void UserNameChanged(QString arg);
    void UserNamePrefixChanged(QString arg);
    void NameChanged(QString arg);
    void EmailChanged(QString arg);
    void IsOkChanged(bool arg);
    void ErrorMessageChanged(QString arg);
private:
    int m_UserId;
    QUuid m_UniqueReference;
    QDateTime m_ExpiryDate;
    QString m_ConfirmationCode;
    BankingDetail m_BankingDetails;
    QString m_CNSCustomerNumber;
    bool m_IsValidPassword;
    QString m_Surname;
    QString m_Message;
    QString m_UserName;
    QString m_UserNamePrefix;
    QString m_Name;
    QString m_Email;
    bool m_IsOk;
    QString m_ErrorMessage;
};

#endif // REGISTEREDUSER_H
