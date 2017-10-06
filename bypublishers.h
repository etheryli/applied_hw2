/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Header file for ByPublishers class
 */

#ifndef BYPUBLISHERS_H
#define BYPUBLISHERS_H

#include "educational.h"

class ByPublishers : public Educational
{
public:
    // Constructor with inherited and private members set
    ByPublishers(QString id, QString title, QString dir, quint32 length,
                 QDate relDate, QString subject, Grade grade,
                 QString authors, QString publisher);

    // Constructor with QStringList
    ByPublishers(QStringList propList);

    // Return string format
    QString toString(bool labeled, QString sepchar);

private:
    QString m_Publisher;
};

#endif // BYPUBLISHERS_H
