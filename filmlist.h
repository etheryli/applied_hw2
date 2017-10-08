/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Header file for FilmList
 */

#ifndef FILMLIST_H
#define FILMLIST_H

#include <QList>
#include <QStringList>
#include <memory>
#include "bypublishers.h"
#include "bystudents.h"
#include "educational.h"
#include "entertainment.h"
#include "film.h"

class FilmList : public QList<Film *> {
 public:
  // Default Constructor
  FilmList();

  // Destructor
  ~FilmList();

  // Return a String
  QString toString();

  // Find a film
  Film *findFilm(QString id);

  // Get ID
  QStringList getID(QString title);

  // Add Film
  void addFilm(Film *film);

  // Remove Film
  void removeFilm(QString filmID);

 private:
  int idIndex;
};

#endif  // FILMLIST_H
