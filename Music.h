#include <cstring>
#include <iostream>

using namespace std;

class Music: public Media {
 public:
  Music();
  Music(char*, char*, int, int, char*);
  char* getDirector();
  int getDuration();
  int getRating();
 private:
  char* artist;
  int duration;
  char* publisher;
