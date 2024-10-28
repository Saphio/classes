#include <iostream>
#include <cstring>
#include "Movie.h"

Movie::Movie() : Media () {
  director = new char[80];
  duration = 0;
  rating = 0;
}

Movie::Movie (char* newTitle, char* newDirector, int newYear, int newDuration, int newRating) : Media(newTitle, newYear) {
  title = new char[80];
  strcpy(title, newTitle);
  duration = newDuration;
  rating = newRating;
}

char* Movie::getDirector() {
  return director;
}

int Movie::getDuration () {
  return duration;
}

int Movie::getRating () {
  return rating;
}
