/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for Entertainment class
 */

#include "entertainment.h"

Entertainment::Entertainment(QString id, QString title, QString dir,
                             quint32 length, QDate relDate,
                             FilmType type, MPAARating rating) :
    Film(id, title, dir, length, relDate), m_Type(type),
    m_Rating(rating) {}


Entertainment::Entertainment(QStringList propList) {
    // TODO
}

QString Entertainment::toString(bool labeled, QString sepchar) {
    // TODO
    return QString();
}
