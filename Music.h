#ifndef MUSIC_H
#define MUSIC_H

#include <cstring>
#include <iostream>
#include "Media.h"

#endif

using namespace std;

class Music: public Media {
 public:
  Music();
  Music(char*, char*, int, int, char*);
  virtual char* getArtist();
  virtual int getDuration();
  virtual char* getPublisher();
  virtual void display();
 private:
  char* artist;
  int duration;
  char* publisher;
};
