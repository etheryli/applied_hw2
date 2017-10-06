/*
 * Created by Hung Nguyen
 * Student ID: 905******
 * Email: dnhung7@vt.edu
 * Class: ECE 3574
 * Assignment: Homework 2
 * File: Abstract implementation file for Film class
 */

#include "film.h"

Film::Film(QString id, QString title, QString dir,
           quint32 length, QDate relDate) :
    m_FilmID(id), m_Title(title), m_Director(dir),
    m_FilmLength(length), m_ReleaseDate(relDate) {}
