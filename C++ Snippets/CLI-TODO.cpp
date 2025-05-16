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


class To_Do{
    private:
        std::string user;

    public:

        To_Do() = delete; 
        To_Do(std::string name) : user(name) {}

        void set_USERNAME() {

            while(true)
                {
                    std::cout << "Enter Your [NEW NAME]: ";
                    std::cin >> user; 

                    std::string confirm_name;
                    std::cout << "\nCONFIRM [Y] or [N]? ";
                    std::cin >> confirm_name;
                    
                        
                }
        }
};


int main()
{
    std::string test;

    return 0;
}
