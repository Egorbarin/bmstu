#include <iostream>

class Book {
    const char* name;
    const char* author;
    int quantity;

public:
    Book() : name("Unknown"), author("Unknown"), quantity(0) {}
    Book(const char* name, const char* author, const int quantity) : name(name), author(author), quantity(quantity) {}

    const char* getName() const {
        return name;
    }

    const char* getAuthor() const {
        return author;
    }

    int getQuantity() const {
        return quantity;
    }

    void setName(const char* name) {
        this->name = name;
    }

    void setAuthor(const char* author) {
        this->author = author;
    }

    void setQuantity(const int quantity) {
        this->quantity = quantity;
    }

    void print() const {
        std::cout << "Book: " << name << ", Author: " << author << ", Quantity: " << quantity << std::endl;
    }
};

int main() {
    Book def;
    def.print();

    Book book("The Lord of the Rings", "J.R.R. Tolkien", 3);
    book.print();

    Book* bookPtr = new Book();
    bookPtr->print();
    bookPtr->setName("The Hobbit");
    bookPtr->setAuthor("J.R.R. Tolkien");
    bookPtr->setQuantity(5);
    bookPtr->print();
    delete bookPtr;

    Book* bookPtr2 = new Book("The Silmarillion", "J.R.R. Tolkien", 1);
    bookPtr2->print();
    delete bookPtr2;
}
