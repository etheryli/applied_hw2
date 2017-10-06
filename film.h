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

#include <QDate>
#include <QString>

class Film
{
public:
    // Virtual Destructor for base class
    virtual ~Film();

    // Constructor with private members set
    Film(QString id, QString title, QString dir,
         quint32 length, QDate relDate);

    // Virtual toString
    virtual toString(bool labeled, QString sepchar) = 0;

private:
    // Private members for a Film
    QString m_FilmID;
    QString m_Title;
    QString m_Director;
    quint32 m_FilmLength;
    QDate m_ReleaseDate;
};

#endif // FILM_H
