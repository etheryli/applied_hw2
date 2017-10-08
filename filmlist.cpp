/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for FilmList
 */

#include "filmlist.h"

FilmList::FilmList() : idIndex(0) {}

FilmList::~FilmList() {
  // Delete all pointers using lib function
  qDeleteAll(*this);
  clear();
}

QString FilmList::toString() {
  QString temp;
  // Iterate over the whole class and derived classes' toString's
  for (int i = 0; i < size(); i++) {
    temp += at(i)->toString(true, "\n");
  }
  return temp;
}

Film *FilmList::findFilm(QString id) {
  // Return first matching ID or return null
  for (int i = 0; i < size(); i++) {
    if (at(i)->getID() == id) {
      return at(i);
    }
  }
  return 0;
}

QStringList FilmList::getID(QString title) {
  QStringList temp;

  // Find matching titles and add them return QStringList
  for (int i = 0; i < size(); ++i) {
    if (at(i)->getTitle().trimmed() == title.trimmed()) {
      temp << at(i)->getID();
    }
  }
  return temp;
}

void FilmList::addFilm(Film *film) {
  // Find duplicate
  for (int i = 0; i < size(); i++) {
    if (*at(i) == *film) {
      throw QString("Failed to double-add a film.");
    }
  }
  // Set ID with private unique id
  film->setID(QString::number(idIndex, 10));

  // Increments another unique id for the next add
  idIndex++;

  // Append to this list
  append(film);
}

void FilmList::removeFilm(QString filmID) {
  // If the film exists then delete all film instances, else error
  Film *film(findFilm(filmID));

  if (film) {
    removeAll(film);
    delete film;
    return;
  }

  throw QString("%1%2%3")
      .arg("Film with ")
      .arg(filmID)
      .arg(" Film ID not found for removal.");
}
