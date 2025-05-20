
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

        void checkFile() {

            std::ifstream chkFILE("user.txt");
            std::string line;

            if(!chkFILE)
                {
                    std::cerr << "File Does Not Exist";
                    std::ofstream makeFILE("user.txt");
                }
        }


        void Menu_Loop() {

            int choice;

            std::cout << "\t[TO DO]\t\n"
                         "#  CHOOSE THE NUMBER\n\n"
                         "[1] OPEN TO DO LIST\n"
                         "[2] EDIT LIST\n"
                         "[3] USER SETTINGS\n"
                         "[4] LOG-OUT";

            while(true)
                {
                if(!(std::cin >> choice) || choice < 1 || choice > 4)
                    {
                        std::cerr << "ERROR: INVALID INPUT";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                break;
                } 

            switch(choice)
            {
                case 1:
                checkFile();
                break;

                case 2:
                std::cout << "Incomplete Feature";
                break;

                case 3:
                set_USERNAME();
                break;

                case 4:
                EOF;
                break;

                default:
                std::cout << "You're out of bounds lil bro";

            }
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
