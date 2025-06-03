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

void writetofile_bkdata(book_DATA & book);


int main(){
    book_DATA test;

    set_bookdata(test);


}

void set_bookdata(book_DATA & book) {


    //DATA VALIDATION LAMBDA
    auto enter_data = [](const std::string & prompt) -> std::string {
    std::string line;
        while(true)
        {
        std::cout << prompt;
            if(!(std::getline(std::cin, line)) || line.empty())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;        
            } 
        break;
        }
    return line;
    };
    //===========================================================================

    //WRITE TO BOOK FILE LAMBDA
    std::fstream bookfile("book_list.txt", std::ios::app);
    if(!bookfile)
        {
            std::cerr << "File Making Failed";
        }

    bookfile << book.Author << "|"
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

