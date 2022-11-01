/* 
    Made on 31/10/2022 for fun
*/

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <fstream>
#include "gallow.h"
#include "intro.h"

int main(){


    introduction();
    char answer; // Play or not    

    std::cout << "Wanna play? y/n: ";
    std::cin >> answer;

    if(answer == 'y')
    {
        int life_points {8}; // Allowed guesses
        int wrong_guess {0};
        int tot_lines {0}; // Counting the text lines
        std::vector<std::string> words_to_guess;
        std::set<char> found_letters;

        std::ifstream words_file("WordsList.txt"); // Reading from the text file
        std::string line;

        srand(time(0)); // Generate a random number

        // Getting a random word and store it into a dynamic array
        while(getline(words_file, line))
        {
            tot_lines++;
            words_to_guess.push_back(line);    
        }

        int random_number = rand() % words_to_guess.size();
        std::string secret_word = words_to_guess[random_number]; // Word to be guessed

        std::string underscore = std::string(words_to_guess[random_number].length(), '_'); // Underscore

        std::cout << "Remaining life points: " << life_points << std::endl;

        while(wrong_guess < life_points && underscore != secret_word)
        {   
            char guess; // User input
            std::cout << "Insert a letter -> ";
            std::cout << underscore << std::endl;
            std::cin >> guess;

            // Check if the user input has been already guessed
            if(found_letters.emplace(guess).second == false)
            {
                std::cout << "Letter already guessed! Try another one" << std::endl;
            }
            else
            {
                int changes{0}; // Keeping track of guessed letters
                for(size_t i{0}; i < secret_word.length(); ++i)
                {
                    if(secret_word[i] == guess)
                    {
                        underscore[i] = secret_word[i]; // Replace '_' with guessed letter
                        changes++;
                    }
                }
                if(!changes)
                {
                    wrong_guess++;
                    std::cout << "Remaining life points: " << life_points - wrong_guess << std::endl;
                }
            }
        if(underscore == secret_word)
        {
            std::cout << "Congrats! You won! The word was: "<< secret_word << std::endl;
        }
        else
        {
            print_gallow(wrong_guess, secret_word);
        }
        }
    }
    else if(answer == 'n')
    {   
        std::cout << "Bye!";
        exit(0);
    }

    return 0;
}