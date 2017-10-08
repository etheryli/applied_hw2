/*
 * Created by H u N g
 * Student ID: 905******
 * Email: ******@vt.edu
 * Class: ECE ****
 * Assignment: Homework 2 - Problem 1
 * File: Header file for QUtfStream
 */

#pragma once

#include <stdio.h>
#include <QIODevice>
#include <QString>
#include <QTextCodec>
#include <QTextStream>

class QUtfStream : public QTextStream {
 public:
  QUtfStream();
  QUtfStream(QIODevice* device);
  QUtfStream(FILE* fileHandle,
             QIODevice::OpenMode openMode = QIODevice::ReadWrite);
  QUtfStream(QString* string,
             QIODevice::OpenMode openMode = QIODevice::ReadWrite);
  QUtfStream(QByteArray* array,
             QIODevice::OpenMode openMode = QIODevice::ReadWrite);
  QUtfStream(const QByteArray& array,
             QIODevice::OpenMode openMode = QIODevice::ReadOnly);
  virtual ~QUtfStream();
};

extern QUtfStream qout;
extern QUtfStream qerr;
extern QUtfStream qin;
