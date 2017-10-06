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
#include "film.h"
#include <memory>

class FilmList : public QList<std::shared_ptr<Film>>
{
public:
    // Default Constructor
    FilmList();

    // Destructor
    ~FilmList();

    // Return a String
    QString toString();

    // Find a film
    std::shared_ptr<Film> findFilm(QString id);

    // Get ID
    QStringList getID(QString title);

    // Add Film
    void addFilm(Film* film);

    // Remove Film
    void removeFilm(QString filmID);
private:
    // Restrict copying of FilmList ???? TODO
    FilmList(const FilmList& copy);
    FilmList& operator=(FilmList copy);
};

#endif // FILMLIST_H
