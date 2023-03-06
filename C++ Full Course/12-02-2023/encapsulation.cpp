#include <iostream>
#include <string>
using namespace std;

class Movie{
  string title;
  int year;
  string genre;

  public:
  Movie(){
    title = "";
    year = -1;
    genre = "";
  }

  Movie(string t, int y, string g){
    title = t;
    year = y;
    genre = g;
  }

  string getTitle(){
    return title;
  }
  void setTitle(string t){
    title = t;
  }

  int getYear(){
    return year;
  }
  void setYear(int y){
    year = y;
  }

  string getGenre(){
    return genre;
  }
  void setGenre(string g){
    genre = g;
  }

  void printDetails(){
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
    cout << "Genre: " << genre << endl;
  }
};

int main() {
  Movie m("The Lion King", 1994, "Adventure");
  m.printDetails();

  cout << "---" << endl;
  m.setTitle("Forrest Gump");
  cout << "New title: " << m.getTitle() << endl;
}
