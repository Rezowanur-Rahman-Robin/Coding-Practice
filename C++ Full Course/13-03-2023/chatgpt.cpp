#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
public:
    // Constructor to initialize book properties
    Book(string title, string author, string publisher, int year) {
        title_ = title;
        author_ = author;
        publisher_ = publisher;
        year_ = year;
    }

    // Getters to access private properties
    string GetTitle() {
        return title_;
    }

    string GetAuthor() {
        return author_;
    }

    string GetPublisher() {
        return publisher_;
    }

    int GetYear() {
        return year_;
    }

private:
    string title_;
    string author_;
    string publisher_;
    int year_;
};

class BookManager {
public:
    // Add a new book to the library
    void AddBook(Book book) {
        books_.push_back(book);
    }

    // Remove a book from the library by title
    void RemoveBook(string title) {
        for (int i = 0; i < books_.size(); i++) {
            if (books_[i].GetTitle() == title) {
                books_.erase(books_.begin() + i);
                return;
            }
        }
    }

    // List all books in the library
    void ListBooks() {
        for (int i = 0; i < books_.size(); i++) {
            cout << "Title: " << books_[i].GetTitle() << endl;
            cout << "Author: " << books_[i].GetAuthor() << endl;
            cout << "Publisher: " << books_[i].GetPublisher() << endl;
            cout << "Year: " << books_[i].GetYear() << endl;
            cout << endl;
        }
    }

private:
    vector<Book> books_;
};

int main() {
    BookManager bookManager;

    // Add some example books
    bookManager.AddBook(Book("The Lord of the Rings", "J.R.R. Tolkien", "George Allen & Unwin", 1954));
    bookManager.AddBook(Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", "Bloomsbury", 1997));
    bookManager.AddBook(Book("1984", "George Orwell", "Secker & Warburg", 1949));

    // List all books
    bookManager.ListBooks();

    // Remove a book
    bookManager.RemoveBook("1984");

    // List all books again
    bookManager.ListBooks();

    return 0;
}

