/*
 * Created by Hung Nguyen
 * Student ID: 905******
 * Email: dnhung7@vt.edu
 * Class: ECE 3574
 * Assignment: Homework 2
 * File: Abstract implementation file for Film class
 */

#include "film.h"

Film::~Film() {}

Film::Film(QString id, QString title, QString dir, quint32 length,
           QDate relDate)
    : m_FilmID(id),
      m_Title(title),
      m_Director(dir),
      m_FilmLength(length),
      m_ReleaseDate(relDate) {}

Film::Film(QStringList& propList)
    : m_FilmID(propList.takeFirst()),
      m_Title(propList.takeFirst()),
      m_Director(propList.takeFirst()) {
  bool conversionOk;

  // Check if film length is valid using conversion from string to uint
  m_FilmLength = propList.takeFirst().toUInt(&conversionOk);

  if (!conversionOk) throw QString("Film length must be a valid number");

  m_ReleaseDate = QDate::fromString(propList.takeFirst(), "yyyy-MM-dd");

  // Checks if date is valid
  if (!m_ReleaseDate.isValid())
    throw QString("Release date must be \"yyyy-MM-dd\"");
}

bool Film::operator==(Film& film) {
  // Proceeds if type matches
  if (typeid(*this) == typeid(film)) {
    // No need to dynamic cast for base Film, just check members
    if (m_Title == film.getTitle().trimmed() &&
        m_Director == film.getDirector() &&
        m_FilmLength == film.getFilmLength() &&
        m_ReleaseDate == film.getDate()) {
      return true;
    }
  }
  return false;
}

QString Film::toString(bool labeled, QString sepchar) {
  if (labeled) {
    return QString("%1%2%3%4%5%6%7%8%9%10%11%12%13%14")
        .arg("ID:  ")
        .arg(m_FilmID)
        .arg(sepchar)
        .arg("Title: ")
        .arg(m_Title)
        .arg(sepchar)
        .arg("Director: ")
        .arg(m_Director)
        .arg(sepchar)
        .arg("Length: ")
        .arg(QString::number(m_FilmLength))
        .arg(sepchar)
        .arg("Release Date: ")
        .arg(m_ReleaseDate.toString("yyyy-MM-dd"));
  }
  return QString("%1%2%3%4%5%6%7%8%9")
      .arg(m_FilmID)
      .arg(sepchar)
      .arg(m_Title)
      .arg(sepchar)
      .arg(m_Director)
      .arg(sepchar)
      .arg(QString::number(m_FilmLength))
      .arg(sepchar)
      .arg(m_ReleaseDate.toString("yyyy-MM-dd"));
}

QString Film::getID() const { return m_FilmID; }
QString Film::getTitle() const { return m_Title; }
QString Film::getDirector() const { return m_Director; }
quint32 Film::getFilmLength() const { return m_FilmLength; }
QDate Film::getDate() const { return m_ReleaseDate; }

void Film::setID(const QString id) { m_FilmID = id; }
