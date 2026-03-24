#include <iostream>
#include <cstdlib>
#include <limits>

int main(){
    srand(time(0));
    int random = rand() % 100 + 1;
    int guess;
    int tries = 1;

    //std::cout << "Random: " << random << "\n";
    std::cout << "Enter a guess: ";
    

    while(guess != random){
        while (!(std::cin >> guess)) {
            std::cout << "Invalid input. Please try again: ";
                
            // 1. Clear the error flags
            std::cin.clear(); 
                
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if(guess == random){
            std::cout << "CORRECT!" << "\n";
        }
        else if(guess > random){
            tries++;
            std::cout << "Lower" << "\n";
            std::cout << "Guess:";
        }
        else if(guess < random){
            tries++;
            std::cout << "Higher" << "\n";
            std::cout << "Guess:";
        }
    }
    std::cout<< "Tries: " << tries;
    return 0;
}
