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
                           quint32 length, QDate relDate, QString subject,
                           Grade grade, QString authors, QString publisher)
    : Educational(id, title, dir, length, relDate, subject, grade, authors),
      m_Publisher(publisher) {}

ByPublishers::ByPublishers(QStringList &propList)
    : Educational(propList), m_Publisher(propList.takeFirst()) {}

QString ByPublishers::toString(bool labeled, QString sepchar) {
  if (labeled) {
    return QString("%1%2%3%4")
        .arg(Educational::toString(labeled, sepchar))
        .arg(sepchar)
        .arg("Publisher: ")
        .arg(m_Publisher);
  }
  return QString("%1%2%3")
      .arg(Educational::toString(labeled, sepchar))
      .arg(sepchar)
      .arg(m_Publisher);
}

bool ByPublishers::operator==(Film &film) {
  // Check type of pointer
  if (typeid(*this) == typeid(film)) {
    // Recast into ByPublishers pointer
    ByPublishers *educationalFilm = dynamic_cast<ByPublishers *>(&film);

    // If all members match, return true
    if (Educational::operator==(film) &&
        m_Publisher == educationalFilm->getPublisher()) {
      return true;
    }
  }
  return false;
}

QString ByPublishers::getPublisher() { return m_Publisher; }
