#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame() : Media () {
  publisher = new char[80];
  rating = 0;
}

VideoGame::VideoGame(char* newTitle, int newYear, char* newPublisher, int newRating) : Media(title, year) {
  publisher = new char[80];
  strcpy(publisher, newPublisher);
  rating = newRating;
}

char* VideoGame::getPublisher () {
  return publisher;
}

int VideoGame::getRating () {
  return rating;
}
