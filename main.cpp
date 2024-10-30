#include <iostream>
#include <cstring>
#include <vector>
#include "Music.h"
#include "VideoGame.h"
#include "Movie.h"

using namespace std;

// function prototypes
int checkInput(char cmd[80]);
void addMedia(vector<Media*> &media);
void search(vector<Media*> media);
void destroy(vector<Media*> &media);

// main functions
int main () {
  vector<Media*> media;
  char command[80];
  bool running = true;
  while (running) {
    cout << "Enter valid command:" << endl;
    cin.get(command, 80);
    cin.get();
    int cmd = checkInput(command);
    if (cmd == 0) {
      cout << "Add media!" << endl;
      addMedia(media);
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
      cout << "Invalid command." << endl;
    }
  }

  return 0;
}

// checks input and maps it to an integer
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
  
void addMedia (vector<Media*> &media) {
  char* title = new char[80];
  char* publisher = new char[80];
  char* artist = new char[80];
  char* director = new char[80];
  int year;
  int duration;
  int rating;
  
  cout << "What's the title of your media?" << endl;
  cin.get(title, 80);
  cin.get();

  cout << "What year was the media created?" << endl;
  cin >> year;
  cin.get();

  cout << "What type of media are you adding? (Music/Videogame/Movie)" << endl;
  char input[80];
  cin.get(input, 80);
  cin.get();
  
  if (strcmp(input, "Music") == 0) {
    cout << "Who is the artist?" << endl;
    cin.get(artist, 80);
    cin.get();
    cout << "How long is the song?" << endl;
    cin >> duration;
    cin.get();
    cout << "Who published the song?" << endl;
    cin.get(publisher, 80);
    cin.get();
    Media* song = new Music(title, artist, year, duration, publisher);
    media.push_back(song);
  }
  
  else if (strcmp(input, "Videogame") == 0) {
    cout << "Who published the video game?" << endl;
    cin.get(publisher, 80);
    cin.get();
    cout << "What's the game's rating?" << endl;
    cin >> rating;
    cin.get();
    Media* game = new VideoGame(title, year, publisher, rating);
    media.push_back(game);
  }
  
  else if (strcmp(input, "Movie") == 0) {
    cout << "Who directed the movie?" << endl;
    cin.get(director, 80);
    cin.get();
    cout << "How long is the movie?" << endl;
    cin >> duration;
    cin.get();
    cout << "What is the movie's rating?" << endl;
    cin >> rating;
    cin.get();
    Media* movie = new Movie(title, director, year, duration, rating);
    media.push_back(movie);
  }
  
  else {
    cout << "Don't know what that is." << endl;
  }
  return;
}
