/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Header file for Abstract Educational class
 */

#ifndef EDUCATIONAL_H
#define EDUCATIONAL_H

#include <QStringList>
#include "film.h"

enum Grade { FRESHMAN = 0, SOPHOMORE, JUNIOR, SENIOR, GRADUATE };
static const QStringList listGrades = QStringList() << "Freshman"
                                                    << "Sophomore"
                                                    << "Junior"
                                                    << "Senior"
                                                    << "Graduate";

class Educational : public Film {
 public:
  // Constructor with private and inherited values set
  Educational(QString id, QString title, QString dir, quint32 len,
              QDate relDate, QString subject, Grade grade, QString authors);

  // Constructor with a QStringList
  Educational(QStringList& propList);

  // Virtual toString
  virtual QString toString(bool labeled, QString sepchar);

  // Operator overload
  virtual bool operator==(Film& film);

  // Acccessors
  QString getSubject();
  Grade getGradeLevel();
  QString getAuthors();

 private:
  QString m_Subject;
  Grade m_GradeLevel;
  QString m_Authors;
};

#endif  // EDUCATIONAL_H
