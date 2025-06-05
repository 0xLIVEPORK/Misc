#include <iostream>
#include <cstdlib>
#include <limits>
#include <fstream>

struct book_DATA
{
    std::string Title, 
                Author, 
                ISB, 
                Genre,
                Availability;
    
};

void set_bookdata(book_DATA & book);

int main(){
    book_DATA test;

    set_bookdata(test);


}

void set_bookdata(book_DATA & book) {

    //=======================================================
    //Enter data for title, author, isbn, availability.
    auto enter_data = [](const std::string & prompt) -> std::string{
        std::string answer;
        while(true)
            {
            std::cout << prompt;
                if(!(std::getline(std::cin, answer)) || answer.empty())
                    {
                        std::cerr << "Prompt Failed";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }

                return answer;
            }
    };

    auto enter_genre = [](const std::string & prompt) -> std::string{
        std::string genre;
        while(true)
            {
                std::cout << prompt;
                if(!(std::getline(std::cin, genre)) || genre.empty())
                    {

                    }
            }
    };


    //MAIN FUNCTION SECTION
    //v.03
    
    book.Title = enter_data("Enter Book Title: ");
    std::cout << "Book Title Set to: " << book.Title << "\n\n";

    book.Author = enter_data("Enter Author: ");
    std::cout << "Author Set to: " << book.Author << "\n\n";

    book.Genre = enter_genre("Enter Genre: ");
    std::cout << "Genre Set to " << book.Genre << "\n\n";

    book.ISB = enter_data("Enter ISBN: ");
    std::cout << "ISB Set to " << book.ISB << "\n\n";

    book.Availability = enter_data("Enter Availability: ");
    std::cout << "Availability Set to: " << book.Availability << "\n\n";

    //=======================================================

    //WRITE TO BOOK FILE 
    std::fstream bookfile("book_list.txt", std::ios::app);
    if(!bookfile)
        {
            std::cerr << "File Making Failed";
        }

    else
        bookfile << book.Title        << "|"
                 << book.Author       << "|"
                 << book.Genre        << "|"
                 << book.ISB          << "|"
                 << book.Availability << "|\n";
                 
    //=======================================================


}

