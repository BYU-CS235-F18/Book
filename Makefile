book: Book.h Book.cpp print.h test.cpp
	g++ -std=c++11 -o book Book.cpp test.cpp

clean:
	rm -f book
