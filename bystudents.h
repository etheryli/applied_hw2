/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Header file for ByStudents class
 */

#ifndef BYSTUDENTS_H
#define BYSTUDENTS_H

#include "educational.h"

// Types of Grade Level of Student
enum GradeLevel {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR, GRADUATE};

class ByStudents : public Educational
{
public:
    // Constructor with inherited and private members set
    ByStudents(QString id, QString title, QString dir, quint32 len,
               QDate relDate, QString subject, Grade grade,
               QString authors, QString department);

    // Constructor with QStringList
    ByStudents(QStringList propList);

    // Return to string format
    QString toString(bool labeled, QString sepchar);

private:
    QString m_Department;
};

#endif // BYSTUDENTS_H
