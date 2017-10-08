/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Header file for Entertainment class
 */

#ifndef ENTERTAINMENT_H
#define ENTERTAINMENT_H

#include <QStringList>
#include "film.h"

// Types of Film for Entertainment and Ratings of Film for Enter
enum FilmType { ACTION = 0, COMEDY, SCIFI, THRILLER, HORROR };
enum MPAARating { G = 0, PG, PG13, R };

// Static string lists for fast conversion to print
static const QStringList listFilmType = QStringList() << "Action"
                                                      << "Comedy"
                                                      << "Sci-Fi"
                                                      << "Thriller"
                                                      << "Horror";
static const QStringList listMPAARating = QStringList() << "G"
                                                        << "PG"
                                                        << "PG-13"
                                                        << "R";

class Entertainment : public Film {
 public:
  // Constructor with inherited and private members set
  Entertainment(QString id, QString title, QString dir, quint32 length,
                QDate relDate, FilmType type, MPAARating rating);

  // Constructor with a QStringList
  Entertainment(QStringList& propList);

  // Return members as string
  QString toString(bool labeled, QString sepchar);

  // Equality comparision given Film pointer
  bool operator==(Film& film);

  // Accessors
  FilmType getFilmType() const;
  MPAARating getRating() const;

 private:
  FilmType m_Type;
  MPAARating m_Rating;
};

#endif  // ENTERTAINMENT_H
