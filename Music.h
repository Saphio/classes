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
  char* getArtist();
  int getDuration();
  char* getPublisher();
 private:
  char* artist;
  int duration;
  char* publisher;
};
