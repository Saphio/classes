#include <cstring>
#include <iostream>

using namespce std;

class VideoGame: public Media {
 public:
  VideoGame();
  VideoGame(char*, int, char*, int);
  char* getPublisher();
  int getRating();
 private:
  char* publisher;
  int rating;
}
  
