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
                        return;  // Exit the function directly, no break dance
                    }
                    else if (confirm_name == "N") {
                        std::cout << "Let's try again.\n";
                        break;  // Break inner loop to ask for name again
                    }
                    else {
                        std::cerr << "Invalid input. Please enter Y or N.\n";
                        // Clear bad input (if any)
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
    Todo.set_USERNAME();

    std::cout << Todo.getUser();

    return 0;
}
