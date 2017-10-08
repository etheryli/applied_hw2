/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for ByStudents class
 */

#include "bystudents.h"

ByStudents::ByStudents(QString id, QString title, QString dir, quint32 length,
                       QDate relDate, QString subject, Grade grade,
                       QString authors, QString department)
    : Educational(id, title, dir, length, relDate, subject, grade, authors),
      m_Department(department) {}

ByStudents::ByStudents(QStringList &propList)
    : Educational(propList), m_Department(propList.takeFirst()) {}

QString ByStudents::toString(bool labeled, QString sepchar) {
  if (labeled) {
    return QString("%1%2%3%4")
        .arg(Educational::toString(labeled, sepchar))
        .arg(sepchar)
        .arg("Department: ")
        .arg(m_Department);
  }
  return QString("%1%2%3")
      .arg(Educational::toString(labeled, sepchar))
      .arg(sepchar)
      .arg(m_Department);
}

bool ByStudents::operator==(Film &film) {
  // Check type of pointer
  if (typeid(*this) == typeid(film)) {
    // Recast into ByStudents pointer
    ByStudents *educationalFilm = dynamic_cast<ByStudents *>(&film);

    // If all members match, return true
    if (Educational::operator==(film) &&
        m_Department == educationalFilm->getDepartment()) {
      return true;
    }
  }
  return false;
}

QString ByStudents::getDepartment() { return m_Department; }
