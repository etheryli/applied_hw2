/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2
 * File: Implementation file for FilmList
 */

#include "filmlist.h"

FilmList::FilmList() {
    // TODO
}

FilmList::FilmList(const FilmList& copy) {
    // TODO
}

FilmList& FilmList::operator=(FilmList copy) {
    // TODO
    return *this;)
}

FilmList::~FilmList() {
    //qDeleteAll(*this)
    // TODO
}

QString FilmList::findFilm(QString id) {
    // TODO
    return QString();
}

Film* FilmList::findFilm(QString id) {
    // TODO
    return *Film();
}

QStringList FilmList::getID(QString title) {
    // TODO
    return QStringList();
}

void FilmList::addFilm(Film* film) {
    // TODO
}

void FilmList::removeFilm(QString filmID) {
    // TODO
}
