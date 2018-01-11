#include <iostream>
#include <vector>
#include "Book.h"

void print(const std::vector& list) {
  cout << std::endl;
  for (auto& book : list)
    cout << book.toString() << endl;
  cout << endl;
}
