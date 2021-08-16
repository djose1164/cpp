#include <iostream>

using std::string;

class Book
{
public:
    string title;
    string author;

    Book(string title, string author, unsigned pages);
    Book(string title, string author);
    Book(string title);
    ~Book();
};

Book::Book(string title, string author)
{
    this->title = title;
    this->author = author;
}

Book::Book(string title)
{
    this->title = title;
}

Book::~Book()
{
    std::cout << "The title " << this->title << " has been deleted.\n";
}

void print_details(Book& book)
{
    std::cout << "The title is " << book.title << " and it was written by "  
              << book.author << ".\n";
}

int main(int argc, char const *argv[])
{
    Book book{"La Manosa", "Juan Bosh"};
    print_details(book);
    
    return 0;
}
