#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() : Media() {
  artist = new char[80];
  duration = 0;
  publisher = new char[80];
}

Music::Music(char* newTitle, char* newArtist, int newYear, int newDuration, char* newPublisher) : Media(newTitle, newYear) {
  artist = new char[80];
  strcpy(artist, newArtist);
  duration = newDuration;
  publisher = new char[80];
  strcpy(publisher, newPublisher);
}

char* Music::getArtist () {
  return artist;
}

int Music::getDuration () {
  return duration;
}

char* Music::getPublisher () {
  return publisher;
}


  
  
  
