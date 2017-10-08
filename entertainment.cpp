/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for Entertainment class
 */

#include "entertainment.h"

Entertainment::Entertainment(QString id, QString title, QString dir,
                             quint32 length, QDate relDate, FilmType type,
                             MPAARating rating)
    : Film(id, title, dir, length, relDate), m_Type(type), m_Rating(rating) {}

Entertainment::Entertainment(QStringList &propList) : Film(propList) {
  // Detect and assign or throw Film Type
  QString filmType = propList.takeFirst();
  if (filmType == "Action") {
    m_Type = ACTION;
  } else if (filmType == "Comedy") {
    m_Type = COMEDY;
  } else if (filmType == "Sci-Fi") {
    m_Type = SCIFI;
  } else if (filmType == "Thriller") {
    m_Type = THRILLER;
  } else if (filmType == "Horror") {
    m_Type = HORROR;
  } else {
    throw QString("%1%2%3").arg("No such Film Type \"").arg(filmType).arg("\"");
  }

  // Detect and assign or throw MPAA Rating
  QString rating = propList.takeFirst();
  if (rating == "G") {
    m_Rating = G;
  } else if (rating == "PG") {
    m_Rating = PG;
  } else if (rating == "PG-13") {
    m_Rating = PG13;
  } else if (rating == "R") {
    m_Rating = R;
  } else {
    throw QString("No such MPAA Rating");
  }
}

bool Entertainment::operator==(Film &film) {
  // Check type of pointer
  if (typeid(*this) == typeid(film)) {
    // Recast into entertainment pointer
    Entertainment *entertainmentFilm = dynamic_cast<Entertainment *>(&film);

    // If all members match, return true
    if (Film::operator==(film) && m_Type == entertainmentFilm->getFilmType() &&
        m_Rating == entertainmentFilm->getRating()) {
      return true;
    }
  }
  return false;
}

QString Entertainment::toString(bool labeled, QString sepchar) {
  if (labeled) {
    return QString("%1%2%3%4%5%6%7")
        .arg(Film::toString(labeled, sepchar))
        .arg(sepchar)
        .arg("Film Type: ")
        .arg(listFilmType[m_Type])
        .arg(sepchar)
        .arg("MPAA Rating: ")
        .arg(listMPAARating[m_Rating]);
  }
  return QString("%1%2%3%4%5")
      .arg(Film::toString(labeled, sepchar))
      .arg(sepchar)
      .arg(listFilmType[m_Type])
      .arg(sepchar)
      .arg(listMPAARating[m_Rating]);
}

FilmType Entertainment::getFilmType() const { return m_Type; }
MPAARating Entertainment::getRating() const { return m_Rating; }
