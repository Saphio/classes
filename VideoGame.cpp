#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame() : public Media () {
  publisher = new char[80];
  rating = 0;
}

VideoGame::VideoGame(char* newTitle, int newYear, char* newPublisher, int newRating) : public Media(title, year) {
  publisher = new char[80];
  strcpy(publisher, newPublisher);
  rating = newRating;
}

char* VideoGame::getPublisher () {
  return publisher;
}

int VideoGames::getRating () {
  return rating;
}
