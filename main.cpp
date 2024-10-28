#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Music.h"
#include "VideoGame.h"
#include "Movie.h"

using namespace std;

int checkInput(char cmd[80]);
void addMedia();
void search();
void destroy();

int main () {
  vector<Media> media;
  char command[80];
  bool running = true;
  while (running) {
    cout << "Enter valid command:" << endl;
    cin.get(command, 80);
    cin.get();
    int cmd = checkInput(command);
    if (cmd == 0) {
      //       addMedia();
      cout << "Add media!" << endl;
    }
    else if (cmd == 1) {
      //       search();
      cout << "Search for media!" << endl;
    }
    else if (cmd == 2) {
      //       destroy();
      cout << "Delete media!" << endl;
    }
    else if (cmd == 3) {
      cout << "See ya." << endl;
      running = false;
    }
    else {
      cout << "Invalid command. Enter valid command:" << endl;
      cin.get(command, 80);
      cin.get();
    }
  }

  return 0;
}

int checkInput(char cmd[80]) {
  if (strcmp(cmd, "ADD") == 0)
    return 0;
  else if (strcmp(cmd, "SEARCH") == 0)
    return 1;
  else if (strcmp(cmd, "DELETE") == 0)
    return 2;
  else if (strcmp(cmd, "QUIT") == 0)
    return 3;
  else
    return -1;
}
  
