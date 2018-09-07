#include <iostream>
#include <vector>
#include "print.h"
#include "Book.h"
#include "Book.h"
#include <algorithm>
using namespace std;

int main () {
  Book defoe ("Robinson Crusoe", "Defoe");
  Book swift ("Gulliver's Travels", "Swift");
  Book austen ("Pride and Prejudice", "Austen");
  Book twain ("The Adventures of Tom Sawyer", "Twain");
  
  // twain.title = "foo";

  cout << defoe.toString() << endl;
  cout << swift.toString() << endl;
  cout << austen.toString() << endl;
  cout << twain.toString() << endl;

  vector <Book> list;

  list.push_back(twain);
  list.push_back(defoe);
  list.push_back(swift);
  list.push_back(austen);
  
  print(list);

  sort(list.begin(), list.end());

  print (list);
}

