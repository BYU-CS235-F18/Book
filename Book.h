#pragma once // Try deleting this and compiling
#include <iostream>
using namespace std;

class Book {
protected:
  string author;
  string title;
public:
  Book(string t, string a) : title(t), author(a) {}
  string getTitle() const { return title; }
  string getAuthor() const { return author; }
  void setTitle(string title);
  void setAuthor(string author);
  string toString() const;
  /*
  bool operator < (const Book& bk) const {
        return (author < bk.author);
  }
  */
};
