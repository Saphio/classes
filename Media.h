#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

class Media {
 public:
  Media ();
  Media (char*, int);
  char* getTitle();
  int getYear();
  virtual char* getDirector();
  virtual int getDuration();
  virtual int getRating();
  virtual char* getArtist();
  virtual char* getPublisher();
  virtual void display();
 protected:
  char* title;
  int year;
};

#endif
