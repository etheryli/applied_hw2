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

// Types of Film for Entertainment
enum FilmType {ACTION, COMEDY, SCIFI, THRILLER, HORROR};

// Ratings of Film for Enter
enum MPAARating {G, PG, PG13, R};

class Entertainment : public Film
{
public:
    // Constructor with inherited and private members set
    Entertainment(QString id, QString title, QString dir,
                  quint32 length, QDate relDate, FilmType type,
                  MPAARating rating);

    // Constructor with a QStringList
    Entertainment(QStringList propList);

    // Return members as string
    QString toString(bool labeled, QString sepchar);

private:
    FilmType m_Type;
    MPAARating m_Rating;
};

#endif // ENTERTAINMENT_H
