/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Abstract header file for Film class
 */

#ifndef FILM_H
#define FILM_H

#include <QUtfStream.h>
#include <QDate>
#include <QString>
#include <QStringList>
#include <typeinfo>
class Film {
 public:
  // Virtual Destructor for base class
  virtual ~Film();

  // Constructor with private members set
  Film(QString id, QString title, QString dir, quint32 length, QDate relDate);

  // Constructor with a given QStringList
  Film(QStringList& propList);

  // Virtual equality comparision for dynamic polymorphism
  virtual bool operator==(Film& film);

  // Virtual toString to print out all members
  virtual QString toString(bool labeled, QString sepchar);

  // Accessors
  QString getID() const;
  QString getTitle() const;
  QString getDirector() const;
  quint32 getFilmLength() const;
  QDate getDate() const;

  // Setters
  void setID(const QString id);

 private:
  // Private members for a Film
  QString m_FilmID;
  QString m_Title;
  QString m_Director;
  quint32 m_FilmLength;
  QDate m_ReleaseDate;
};

#endif  // FILM_H
