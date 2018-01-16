#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;

void print(const vector <Book> & list) {
  cout << endl;
  for (auto& book : list)
    cout << book.toString() << endl;
  cout << endl;
}
