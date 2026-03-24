#include <iostream>
#include <cstdlib>
#include <limits>

void check(int num, int random, int tries){
    if(num == random){
        std::cout << "CORRECT!" << "\n";
        std::cout<< "Tries: " << tries;
    }
    else if(num > random){
        std::cout << "Lower" << "\n";
        std::cout << "Guess:";
    }
    else if(num < random){
        std::cout << "Higher" << "\n";
        std::cout << "Guess:";
    }
}

int main(){
    srand(time(0));
    int random = rand() % 100 + 1;
    int guess;
    int tries = 0;

    //std::cout << "Random: " << random << "\n";
    std::cout << "Enter a guess: ";
    
    while(guess != random){
        while (!(std::cin >> guess)) {
            std::cout << "Invalid input. Please try again: ";
                
            // 1. Clear the error flags
            std::cin.clear(); 
                
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        tries++;
        check(guess, random, tries);
    }
    return 0;
}
