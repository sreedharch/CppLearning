#include <cstring>
#include <iostream>
using namespace std;

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

void printBook(struct Books *book) {
  cout << "Book title : " << book->title << endl;
  cout << "Book author : " << book->author << endl;
  cout << "Book subject : " << book->subject << endl;
  cout << "Book id : " << book->book_id << endl;
}

int main() {
  struct Books book1, book2;

  strcpy(book1.title, "Learning C++ Programming");
  strcpy(book1.author, "Chand");
  strcpy(book1.subject, "C++ Programming");
  book1.book_id = 6495407;

  strcpy(book2.title, "Telecom Billing");
  strcpy(book2.author, "Yakit Singha");
  strcpy(book2.subject, "Telecom");
  book2.book_id = 6495700;

  printBook(&book1);
  cout << endl;
  printBook(&book2);
}