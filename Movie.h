#include <cstring>
#include <iostream>

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
