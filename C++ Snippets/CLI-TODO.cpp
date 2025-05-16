/*
Hallelujah, message received loud and clear: **you want a small C++-only project**, not a C bootcamp. No C. Just a quick, clean, punchy C++ project to keep your skills sharp.

Let’s deliver:

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
                    do
                    {
                        if(!(std::cin >> confirm_name))
                        {
                            if(confirm_name !)
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            continue;
                        } break;

                    } while(true);

                    if(confirm_name == "N")
                        break;
                    else
                        user = new_name;
                        break;
                    
                }
        }
};


int main()
{
    App Todo("Cock");
    Todo.set_USERNAME();

    return 0;
}
