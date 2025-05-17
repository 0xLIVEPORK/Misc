
#include <iostream>
#include <limits>
#include <cstdlib>
#include <fstream>


class App{
    private:
        std::string user;

    public:

        App() = delete; 
        App(std::string name) : user(name) {}


        void Menu_Loop() {

            std::cout << "\t[TO DO]\t\n"
                         "#  CHOOSE THE NUMBER\n\n"
                         "[1] OPEN TO DO LIST\n"
                         "[2] EDIT LIST\n"
                         "[3] USER SETTINGS\n"
                         "[4] LOG-OUT";
        }

        void set_USERNAME() {
            std::string new_name;
            std::string confirm_name;
        
            while (true) {
                std::cout << "Enter Your [NEW NAME]: ";
                std::cin >> new_name;
        
                while (true) {
                    std::cout << "CONFIRM [Y] or [N]? ";
                    std::cin >> confirm_name;
        
                    if (confirm_name == "Y") {
                        user = new_name;
                        return;  
                    }
                    else if (confirm_name == "N") {
                        std::cout << "Let's try again.\n";
                        break; 
                    }
                    else {
                        std::cerr << "Invalid input. Please enter Y or N.\n";

                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
            }
        }
        

        std::string getUser() {
            return user;
        }


};


int main()
{
    App Todo("Cock");

    Todo.Menu_Loop();

    return 0;
}
