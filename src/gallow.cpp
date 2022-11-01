#include <iostream>
#include <string>
#include "gallow.h"

// If error print a piece of the gallow
void print_gallow(int error, std::string& hidden_word)
{
    switch (error)
    {
    case 1:
        std::cout << "-------|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout <<"===========\n";
        break;
    case 2:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout <<"===========\n";
        break;
    case 3:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|      |\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout <<"===========\n";
        break;
    case 4:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|     /|\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout <<"===========\n";
        break;
    case 5:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|     /|\\n";
        std::cout << "|\n";
        std::cout << "|\n";
        std::cout <<"===========\n";
        break;
    case 6:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|     /|\\\n";
        std::cout << "|      |\n";
        std::cout << "|\n";
        std::cout <<"===========\n";
        break;
    case 7:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|     /|\\n";
        std::cout << "|      |\n";
        std::cout << "|     / \n";
        std::cout <<"===========\n";
        break;
    case 8:
        std::cout << "-------|\n";
        std::cout << "|      0\n";
        std::cout << "|     /|\\\n";
        std::cout << "|      |\n";
        std::cout << "|     / \\\n";
        std::cout <<"===========\n";
        std::cout << "You Lose! The word was: "<< hidden_word << std::endl;
        break;
    default:
        break;
    }
}
