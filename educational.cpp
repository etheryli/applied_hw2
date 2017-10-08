/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for Abstract Educational class
 */

#include "educational.h"

Educational::Educational(QString id, QString title, QString dir, quint32 length,
                         QDate relDate, QString subject, Grade grade,
                         QString authors)
    : Film(id, title, dir, length, relDate),
      m_Subject(subject),
      m_GradeLevel(grade),
      m_Authors(authors) {}

Educational::Educational(QStringList &propList)
    : Film(propList), m_Subject(propList.takeFirst()) {
  QString grade = propList.takeFirst();
  if (grade == "Freshman") {
    m_GradeLevel = FRESHMAN;
  } else if (grade == "Sophomore") {
    m_GradeLevel = SOPHOMORE;
  } else if (grade == "Junior") {
    m_GradeLevel = JUNIOR;
  } else if (grade == "Senior") {
    m_GradeLevel = SENIOR;
  } else if (grade == "Graduate") {
    m_GradeLevel = GRADUATE;
  } else {
    throw QString("%1%2%3").arg("No such Grade \"").arg(grade).arg("\"");
  }
  m_Authors = propList.takeFirst();
}

// Virtual toString
QString Educational::toString(bool labeled, QString sepchar) {
  if (labeled) {
    return QString("%1%2%3%4%5%6%7%8%9%10")
        .arg(Film::toString(labeled, sepchar))
        .arg(sepchar)
        .arg("Subject: ")
        .arg(m_Subject)
        .arg(sepchar)
        .arg("Grade Level: ")
        .arg(listGrades[m_GradeLevel])
        .arg(sepchar)
        .arg("Authors: ")
        .arg(m_Authors);
  }
  return QString("%1%2%3%4%5%6%7")
      .arg(Film::toString(labeled, sepchar))
      .arg(sepchar)
      .arg(m_Subject)
      .arg(sepchar)
      .arg(listGrades[m_GradeLevel])
      .arg(sepchar)
      .arg(m_Authors);
}

bool Educational::operator==(Film &film) {
  // Check type of pointer
  if (typeid(*this) == typeid(film)) {
    // Recast into Educational pointer
    Educational *educationalFilm = dynamic_cast<Educational *>(&film);

    // If all members match, return true
    if (Film::operator==(film) &&
        m_GradeLevel == educationalFilm->getGradeLevel() &&
        m_Subject == educationalFilm->getSubject() &&
        m_Authors == educationalFilm->getAuthors()) {
      return true;
    }
  }
  return false;
}

QString Educational::getSubject() { return m_Subject; }
Grade Educational::getGradeLevel() { return m_GradeLevel; }
QString Educational::getAuthors() { return m_Authors; }
