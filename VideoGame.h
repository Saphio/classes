#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <cstring>
#include <iostream>
#include "Media.h"

#endif

using namespace std;

class VideoGame : public Media {
 public:
  VideoGame();
  VideoGame(char*, int, char*, int);
  virtual char* getPublisher();
  virtual int getRating();
 private:
  char* publisher;
  int rating;
};
 
