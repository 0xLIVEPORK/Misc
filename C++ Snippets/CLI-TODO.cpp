
#include <iostream>
#include <limits>
#include <cstdlib>
#include <fstream>
#include <functional>

class App{
    private:
        std::string user;
s
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
                    if(!makeFILE)
                        {
                            std::cerr << "FILE CREATION ERROR";
                        }
                } 

            else
                {
                    std::getline(chkFILE, line);
                    std::cout << line;
                }
        }

        void editList() {

            unsigned int choice;

            /** LAMBDAS
            * Better set this now
            * No need to reuse these functions anywhere else anyways
            * If we do need so we can just copy paste it but I doubt it
            * User does not need to rewrite files with the Quit option does he?
            **/

            //ADD TASK LAMBDA
            std::function<void()> ADDTASK = [](){

                std::string addtask_name, addtask_deadline, addtask_description;
                std::fstream editFile("user.txt");

                if(!editFile)
                    {
                        std::cerr << "Error File Handling";
                    }
                else
                    {
                        while(true)
                        {


                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                            std::cout << "\nEnter Task Name: ";
                            std::getline(std::cin, addtask_name);
                            
                            std::cout << "\nEnter Dead Line: ";
                            std::getline(std::cin, addtask_deadline);

                            std::cout << "\nEnter Description: ";
                            std::getline(std::cin, addtask_description);

                            std::cout << "\nEnter \"0\" if you want to save, anything else will discard your task";
                            
                            unsigned int choice;

                            if(!(std::cin >> choice) || choice > 0)
                                {
                                    std::cin.clear();
                                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                    continue;
                                }

                            else
                                {
                                    break;
                                    editFile << addtask_name << " | " << addtask_deadline << " | " << addtask_description << std::endl;
                                }
                        }

                    }
                };
            
            std::function<void()> EDITTASK = [](){

                std::fstream editFile("user.txt", std::ios::in | std::ios::out | std::ios::app);
                
                if(!editFile.is_open())
                    {
                        std::cerr << "FILE ERROR";
                        return;
                    }

                    std::string line;
                    std::string allContent;

                    while(std::getline(editFile, line))
                        std::cout << line;
                };
                
            std::function<void()> NAME = [](){

            };
            
            choice = 0;
            while(true)
                {
                std::cout << "Pick what you want to edit: "
                             "\n[0] - EDIT TASK" ;
                    if(!(std::cin >> choice))
                        {
                            std::cerr << "\nINVALID";
                            std::cin.clear();
                            std::cin.ignore();
                            continue;
                        } 

                    switch(choice)
                    {
                        case 0:
                        EDITTASK();
                        break;

                        case 1:
                        ADDTASK();

                        default:
                        std::cout << "END";
                        return;
                        
                    }
                    
                    
                }
            }



        void Menu_Loop() {
            while(true)
            { 
                int choice;

                std::cout << "\t[TO DO]\t\n"
                            "#  CHOOSE THE NUMBER\n\n"
                            "[1] OPEN TO DO LIST\n"
                            "[2] EDIT LIST\n"
                            "[3] USER SETTINGS\n"
                            "[4] LOG-OUT \n\n: ";

                while(true)
                    {
                    if(!(std::cin >> choice) || choice < 1 || choice > 4)
                        {
                            std::cerr << "ERROR: INVALID INPUT: ";
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
                    editList();
                    break;

                    case 3:
                    set_USERNAME();
                    break;

                    case 4:
                    exit(0);
                    break;

                    default:
                    std::cout << "You're out of bounds lil bro";

                }
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
