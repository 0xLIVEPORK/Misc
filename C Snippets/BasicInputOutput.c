//THIS TO NOTE THAT I AM USING KERNIGHAM AND RITCHIE'S THE C PROGRAMMING LANGUAGE 2ND ED. AS REFERENCE
//WHICH IS FROM PRE - C89 STANDARDS

#include <stdio.h>

main()
{
    int character;

    character = getchar();
    while(character != EOF) 
    {
        putchar(character);
        character = getchar();
    }
}

//************************************
//2ND VER

#include <stdio.h>

main()
{
    int character;

    while((character = getchar()) != EOF)
        putchar(character);
}

//************************************
//EXERCISE

#include <stdio.h>
//Exercise 1-6. Verify that the expression getchar ( ) I= EOF is 0 or 1. 
//Exercise 1-7. Write a program to print the value of EOF. 

main() {
    int c;

    while((c = getchar()) != EOF) 
        putchar(c);
    
    printf("EXPRESSION VALUE: %d\n", c = getchar() != EOF);
    printf("EOF VALUE: %d\n", EOF);

}

//EXERCISE

#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c, lineCount, wordCount, charCount, STATE;

    c = lineCount = wordCount = charCount, STATE = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n' || c == ' ' || c == '\t')
            STATE = OUT;
            ++lineCount;
        
        if(c == '\n')
        {

            #include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <fstream>

class user{
    protected:

    std::string username;
    std::string userpass;
    
    public:

    
};

class passmanager: protected user{
    private:

    std::string key = "whyisthisshitopenforeveryonetoreadahaha....";
    int choice;
    int length;

    public:

    std::string generatePassword(int &length){
        const std::string chars =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz"
            "0123456789"
            "!@#$%^&*()";

        for(int i = 0; i < length; i++) {
            userpass += chars[rand() % chars.size()];
        }

        return userpass;
    }

    std::string encryptPassword(int &length) {
        
        std::string encrypted = userpass;

        for(int i =0; i < length; i++) {
            encrypted[i] ^= key[i % key.length()];
        }

        return encrypted;
    }

    void Menu() {
        while (true) {
            std::cout << "\n\t[PASSWORD MANAGER]\n\n"
                      << "[1] Generate Password\n"
                      << "[2] Saved Users\n"
                      << "[3] Exit\n"
                      << "\nChoose a Number: ";
    
            if (!(std::cin >> choice) || choice > 3 || choice < 1) {
                std::cerr << "Invalid Input\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
    
            switch (choice) {
                case 1:
                userpass.clear();

                while(true) {
                    std::cout << "Enter a Username: ";
                    if (!(std::cin >> username)) {
                        std::cerr << "Invalid Input\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                    break;
                }

                    while (true) {
                        std::cout << "Enter a Length: ";
                        if (!(std::cin >> length) || length > 200 || length < 1) {
                            std::cerr << "Invalid Input\n";
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            continue;
                        }
                        break;
                    }
                    userpass.clear(); // Clear before generating
                    std::cout << "Please Remember the Password Generated " << generatePassword(length); //let's put it on a file once we learn how to do so
                    
                    std::cout << "\nUsername: " << username << "\nEncrypted Password: " << encryptPassword(length) << "\n";
                    break;
    
                case 2:
                    std::cout << "Saved Users (not implemented yet)\n";
                    break;
    
                case 3:
                    std::cout << "Exiting...\n";
                    return; // Exit the Menu
            }
        }
    }
};

int main() {

    std::ofstream PDfile("testing.txt");

    srand(time(0));
    passmanager PasswordManager;
    
    std::cout << "Log-in First\n\n"; // Still not in use we'll skip to the menu

    PasswordManager.Menu();

    int length;

    return EXIT_SUCCESS;
}STATE = IN;
            ++wordCount;
        }
        else if(STATE = OUT)
        {
        ++charCount;
        }
    }
    printf("\n%d LINE NUMBER\n%d WORD NUMBER\n%d CHAR NUMBER", lineCount, wordCount, charCount);
}


