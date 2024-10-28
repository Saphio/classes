#ifndef MOVIE_H
#define MOVIE_H

#include <cstring>
#include <iostream>
#include "Media.h"

#endif

using namespace std;

class Movie: public Media {
 public:
  Movie();
  Movie(char*, char*, int, int, int);
  char* getDirector();
  int getDuration();
  int getRating();
 private:
  char* director;
  int duration;
  int rating;
};
