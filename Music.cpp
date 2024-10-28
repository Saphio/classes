#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() : public Media() {
  artist = new char[80];
  duration = 0;
  rating = 0;
}

Music::Music(char* newTitle, char* newArtist, int newYear, int newDuration, char* newPublisher) : public Media(newTitle, newYear) {
  artist = new char[80];
  strcpy(artist, newArtist);
  duration = newDuration;
  publisher = newPublisher;
}

char* Music::getArtist () {
  return artist;
}

int Music::getDuration () {
  return duration;
}

int Music::getPublisher () {
  return publisher;
}


  
  
  
