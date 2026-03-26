#include <iostream>
#include <limits>
#include <string>

//EQUATION FUNCTION
int equation(int num1, int num2, std::string operation){
    if(operation == "+"){
        return num1 + num2;
    }
    else if(operation == "-"){
        return num1 - num2;
    }
    else if(operation == "*"){
        return num1 * num2;
    }
    else if(operation == "/"){
        return num1 / num2;
    }
    return 0;
}

//MAIN
int main(){
    int num1;
    int num2;
    int sum;
    
    while(true){
        std:: string operation = ".";
        //INPUT NUMS
        std:: cout << "(PRESS 'S' TO STOP)Enter the first number: ";
        while(!(std::cin >> num1)){
            std:: cout << "(PRESS 'S' TO STOP)Invalid, enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        //CHECK OPERATION
        while(!(operation == "+" || operation == "-" || operation == "*" || operation == "/")){
            std::cout << "(PRESS 'S' TO STOP)Enter an operation (+, -, *, / ): ";
            std::cin >> operation;
            if(operation == "S"){
                return 0;
            }
        }
        std:: cout << "(PRESS 'S' TO STOP)Enter the second number: ";
        while(!(std::cin >> num2)){
            std:: cout << "(PRESS 'S' TO STOP)Invalid, enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        sum = equation(num1, num2, operation);
        std:: cout << "Sum: " << sum << "\n";

    }
    return 0;
}