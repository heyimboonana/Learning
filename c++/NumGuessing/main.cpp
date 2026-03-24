#include <iostream>
#include <cstdlib>
#include <limits>
int tries = 1;

void check(int num, int& random){
        if(num == random){
            std::cout << "CORRECT!" << "\n";
            std::cout<< "Tries: " << tries;
        }
        else if(num > random){
            tries++;
            std::cout << "Lower" << "\n";
            std::cout << "Guess:";
        }
        else if(num < random){
            tries++;
            std::cout << "Higher" << "\n";
            std::cout << "Guess:";
        }
    }

int main(){
    srand(time(0));
    int random = rand() % 100 + 1;
    int guess;

    //std::cout << "Random: " << random << "\n";
    std::cout << "Enter a guess: ";
    
    while(guess != random){
        while (!(std::cin >> guess)) {
            std::cout << "Invalid input. Please try again: ";
                
            // 1. Clear the error flags
            std::cin.clear(); 
                
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        check(guess, random);
    }
    return 0;
}
