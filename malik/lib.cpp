#include <iostream>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    int publicationYear;
    std::string isbn;

    Book() : title(""), author(""), publicationYear(0), isbn("") {}

    Book(std::string t, std::string a, int p, std::string i)
        : title(t), author(a), publicationYear(p), isbn(i) {}

    void display() {
        std::cout << "Title: " << title << ", Author: " << author 
                  << ", Year: " << publicationYear << ", ISBN: " << isbn << std::endl;
    }
};

class Library {
private:
    Book* books;
    int size;
    int capacity;

    void resize() {
        capacity *= 2;
        Book* newBooks = new Book[capacity];
        for (int i = 0; i < size; ++i) {
            newBooks[i] = books[i];
        }
        delete[] books;
        books = newBooks;
    }

public:
    Library(int cap = 10) : size(0), capacity(cap) {
        books = new Book[capacity];
    }

    ~Library() {
        delete[] books;
    }

    void addBook(const Book& book) {
        if (size == capacity) {
            resize();
        }
        books[size++] = book;
    }

    void removeBook(const std::string& isbn) {
        for (int i = 0; i < size; ++i) {
            if (books[i].isbn == isbn) {
                for (int j = i; j < size - 1; ++j) {
                    books[j] = books[j + 1];
                }
                --size;
                return;
            }
        }
    }

    void updateBook(const std::string& isbn, const Book& updatedBook) {
        for (int i = 0; i < size; ++i) {
            if (books[i].isbn == isbn) {
                books[i] = updatedBook;
                return;
            }
        }
    }

    void displayBooks() {
        for (int i = 0; i < size; ++i) {
            books[i].display();
        }
    }
};

int main() {
    Library library;

   
    library.addBook(Book("Book One", "Author A", 2001, "ISBN001"));
    library.addBook(Book("Book Two", "Author B", 2002, "ISBN002"));
    library.addBook(Book("Book Three", "Author C", 2003, "ISBN003"));

    std::cout << "Initial list of books:" << std::endl;
    library.displayBooks();

   
    library.updateBook("ISBN002", Book("Updated Book Two", "Updated Author B", 2020, "ISBN002"));

    std::cout << "\nAfter updating Book Two:" << std::endl;
    library.displayBooks();

   
    library.removeBook("ISBN003");

    std::cout << "\nAfter removing Book Three:" << std::endl;
    library.displayBooks();

    return 0;
}

