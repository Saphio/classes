#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() : public Media() {
  artist = new char[80];
  duration = 0;
  rating = 0;
}

Music::Music(char* newTitle, char* newArtist, int newYear, int newDuration, int newRating) : public Media(newTitle, newYear) {
  artist = new char[80];
  strcpy(artist, newArtist);
  duration = newDuration;
  rating = newRating;
}

char* Music::getArtist () {
  return artist;
}

int Music::getDuration () {
  return duration;
}

int Music::getRating () {
  return rating;
}


  
  
  
