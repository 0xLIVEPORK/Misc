
---

## 🔧 Project: **Configurable Text-Based Habit Tracker**

### 🧠 Skills it flexes:

- File I/O (`fstream`)
    
- `std::vector`, `std::map`, maybe `std::unordered_map`
    
- Simple CLI parsing
    
- Classes and encapsulation
    
- RAII and destructors (if you want logging/saving at shutdown)
    

---

### 📝 What it does:

- You define habits (e.g. “Drink Water”, “Read 10 pages”)
    
- Track daily completion
    
- Save/load to a file
    
- Show streaks or totals
    
- Optional: autosave on exit
    

---

### Example usage:*/

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
            std::string confirm_name;

            while(confirm_name != "Y")
                {
                    std::string new_name;

                    std::cout << "Enter Your [NEW NAME]: ";
                    std::cin >> new_name; 

                    std::cout << "\nCONFIRM [Y] or [N]? ";

                    /*
                    INPUT VALIDATION
                    */
                    do
                    {
                        if(!(std::cin >> confirm_name))
                        {
                            if(confirm_name != "Y" || confirm_name != "N")

                                std::cin.clear();
                                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                                std::cerr << "Invalid";

                                continue;
                        } break;

                    } while(true);

                    /*
                    INPUT VAL END
                    */

                    if(confirm_name == "N")
                        break;
                    else
                        user = new_name;
                        break;
                    
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
