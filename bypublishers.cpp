/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for ByPublishers class
 */

#include "bypublishers.h"

ByPublishers::ByPublishers(QString id, QString title, QString dir,
                           quint32 length, QDate relDate,
                           QString subject, Grade grade,
                           QString authors, QString publisher) :
    Educational(id, title, dir, length, relDate, subject,
                grade, authors), m_Publisher(publisher) {}


ByPublishers::ByPublishers(QStringList propList) {
    // TODO
}

QString ByPublishers::toString(bool labeled, QString sepchar) {
    // TODO
    return QString();
}
