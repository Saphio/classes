#include <iostream>
#include <cstring>
#include "Media.h"

Media::Media() {
  title = new char[80];
  year = 0;
}

Media::Media(char* newTitle, int newYear) {
  title = new char[80];
  strcpy(title, newTitle);
  year = newYear;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}


