#include <iostream>
#include <vector>

#include "Book.h"

using namespace std;

void Book::setTitle(string title) {
  this->title = title;
}

void Book::setAuthor(string author) {
  this->author = author;
}

string Book::toString() const {
  stringstream out;
  out << "Book: title: " << title << " author: " << author;
  return out.str();
}
