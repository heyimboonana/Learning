#include <iostream>
#include <limits>

void equation(int num1, int num2, std::string operation){
    if(operation == "+"){
        return num1 + num2;
    }
}

int main(){
    std:: string operation;
    int num1;
    int num2;
    
    while(true){
        while(!(operation == "+" || operation == "-" || operation == "*" || operation == "/")){
            std::cout << "Enter an operation (+, -, *, / ): ";
            std::cin >> operation;
        }
        std:: cout << "Enter the first number: ";
        while(!(std::cin >> num1)){
            std:: cout << "Invalid, enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std:: cout << "Enter the second number: ";
        while(!(std::cin >> num2)){
            std:: cout << "Invalid, enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        break;
    }
    return 0;
}