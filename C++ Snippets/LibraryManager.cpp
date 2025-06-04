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


    auto enter_data = [](const std::string & prompt) -> std::string{
        std::string answer;
        while(true)
            {
                if(!(std::getline(std::cin, answer)) || answer.empty())
                    {
                        std::cerr << "Prompt Failed";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                
                else
                    break;
                    return answer;
            }
    };

    //=======================================================

    //WRITE TO BOOK FILE LAMBDA
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
                 << book.Availability << "|";
    //=======================================================

    //MAIN FUNCTION SECTION
    //v.01
    
    book.Title = enter_data("Enter Book Title: ");
    std::cout << "Book Title Set to: " << book.Title << "\n\n";

    book.Author = enter_data("Enter Author: ");
    std::cout << "Author Set to: " << book.Author << "\n\n";

    book.Genre = enter_data("Enter Genre: ");
    std::cout << "Genre Set to " << book.Genre << "\n\n";

    book.ISB = enter_data("Enter ISB: ");
    std::cout << "ISB Set to " << book.ISB << "\n\n";

    book.Availability = enter_data("Enter Availability: ");
    std::cout << "Availability Set to: " << book.Availability << "\n\n";


}

