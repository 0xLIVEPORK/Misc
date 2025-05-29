#include <iostream>
#include <cstdlib>
#include <limits>

void set_bookdata();
struct book_DATA
{
    std::string Title, 
                Author, 
                ISB, 
                Genre, 
                Availability;
    
};

void set_bookdata(book_DATA & book)
    {
        std::string dataentry;

        while(true)
            {
                if(!(std::getline(std::cin, book.Author))
                    {
                        
                    }
            }
    }
