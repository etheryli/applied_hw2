/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for Abstract Educational class
 */

#include "educational.h"

Educational::Educational(QString id, QString title, QString dir,
                         quint32 length, QDate relDate, QString subject,
                         Grade grade, QString authors) :
    Film(id, title, dir, length, relDate), m_Subject(subject),
    m_GradeLevel(grade), m_authors(authors) {}

Educational::Educational(QStringList propList) {
    // TODO
}

