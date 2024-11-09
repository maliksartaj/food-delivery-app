#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    
    string title;
    string author;
    string isbn;
    bool is_borrowed;

    Book(string t, string a, string i) : title(t), author(a), isbn(i), is_borrowed(false) {}


    void borrow() {
        is_borrowed = true;
    }

    void return_book() {
        is_borrowed = false;
    }

    string toString() const {
        return title + " by " + author + " (ISBN: " + isbn + ") - " + (is_borrowed ? "Borrowed" : "Available");
    }
};


class Member {
public:

   string name;
   string member_id;
    vector<Book*> borrowed_books;


    Member(string n,string id) : name(n), member_id(id) {}


    void borrow_book(Book* book) {
        if (!book->is_borrowed) {
            book->borrow();
            borrowed_books.push_back(book);
        } else {
            cout << "The book is already borrowed." << endl;
        }
    }

    void return_book(Book* book) {
        for (auto it = borrowed_books.begin(); it != borrowed_books.end(); ++it) {
            if (*it == book) {
                book->return_book();
                borrowed_books.erase(it);
                return;
            }
        }
       cout << "This book was not borrowed by the member." << endl;
    }

    string toString() const {
        string result = name + " (ID: " + member_id + ") - Borrowed Books: ";
        for (const auto& book : borrowed_books) {
            result += "\n  - " + book->toString();
        }
        return result;
    }
};

class Library {
public:
   
    vector<Book> books;
   vector<Member> members;

   
    void add_book(const Book& book) {
        books.push_back(book);
    }

    void add_member(const Member& member) {
        members.push_back(member);
    }

    Book* find_book_by_isbn(const std::string& isbn) {
        for (auto& book : books) {
            if (book.isbn == isbn) {
                return &book;
            }
        }
        return nullptr;
    }

    Member* find_member_by_id(const string& member_id) {
        for (auto& member : members) {
            if (member.member_id == member_id) {
                return &member;
            }
        }
        return nullptr;
    }

   string toString() const {
       string result = "Library Books: \n";
        for (const auto& book : books) {
            result += "  - " + book.toString() + "\n";
        }
        result += "\nLibrary Members: \n";
        for (const auto& member : members) {
            result += member.toString() + "\n";
        }
        return result;
    }
};

int main() {
  
    Library library;


    library.add_book(Book("The Great Gatsby", "F. Scott Fitzgerald", "1234567890"));
    library.add_book(Book("1984", "George Orwell", "0987654321"));


    library.add_member(Member("Alice", "M001"));
    library.add_member(Member("Bob", "M002"));


    Book* book1 = library.find_book_by_isbn("1234567890");
    Member* member1 = library.find_member_by_id("M001");
    if (book1 && member1) {
        member1->borrow_book(book1);
    }


    if (book1 && member1) {
        member1->return_book(book1);
    }


   cout << library.toString() << std::endl;

    return 0;
}
