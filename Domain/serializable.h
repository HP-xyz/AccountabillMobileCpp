#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H
#include <QDataStream>
#include <QObject>
#include <QMetaObject>
#include <QMetaProperty>
#include <QVariant>
class Serializable : public QObject
{
    Q_OBJECT
public:
    explicit Serializable(QObject *parent = 0);
};
QDataStream &operator<<(QDataStream &ds, const Serializable &obj);
QDataStream &operator>>(QDataStream &ds, Serializable &obj) ;
#endif // SERIALIZABLE_H
