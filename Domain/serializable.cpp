#include "serializable.h"

Serializable::Serializable(QObject *parent) :
    QObject(parent)
{
}


QDataStream &operator<<(QDatastread &ds, const Serializable &obj)



QDataStream &operator>>(QDatastread &ds, const Serializable &obj)

