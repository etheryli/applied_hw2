/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for ByStudents class
 */

#include "bystudents.h"

ByStudents::ByStudents(QString id, QString title, QString dir,
                           quint32 length, QDate relDate,
                           QString subject, Grade grade,
                           QString authors, QString department) :
    Educational(id, title, dir, length, relDate, subject,
                grade, authors), m_Department(department) {}


ByStudents::ByStudents(QStringList propList) {
    // TODO
}

QString ByStudents::toString(bool labeled, QString sepchar) {
    // TODO
    return QString();
}
