#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGames::VideoGames() : public Media () {
  publisher = new char[80];
  rating = 0;
}

VideoGames::VideoGames(char* newTitle, int newYear, char* newPublisher, int newRating) : public Media(title, year) {
  publisher = new char[80];
  strcpy(publisher, newPublisher);
  rating = newRating;
}

char* VideoGames::getPublisher () {
  return publisher;
}

int VideoGames::getRating () {
  return rating;
}
