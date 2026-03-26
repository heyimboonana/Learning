#include <iostream>
#include <limits>
#include <string>

//EQUATION FUNCTION
int equation(int num1, int num2, char operation) {
    switch(operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num2 != 0 ? num1 / num2 : 0; // avoid division by zero
        default: return 0;
    }
}

//MAIN
int main(){
    int num1;
    int num2;
    int sum;
    bool calcStart = true;

    //INPUT NUMS
    std:: cout << "(PRESS 'S' TO STOP)Enter the first number: ";

    while(!(std::cin >> num1)){
        std:: cout << "(PRESS 'S' TO STOP)Invalid, enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if(num1 == -1){
        return 0;
    }
    std::cout << num1 << " ( ) _ " << "\n";
    while(true){
        char operation = '.';

        //CHECK OPERATION
        while(!(operation == '+' || operation == '-' || operation == '*' || operation == '/')){
            std::cout << "(ENTER '-1' TO END)Enter an operation (+, -, *, / ): ";
            std::cin >> operation;
            if(operation == '-1'){
                return 0;
            }
        }
        std::cout << num1 << " " << operation <<" _ " << "\n";
        std:: cout << "(ENTER '-1' TO END)Enter the second number: ";
        while(!(std::cin >> num2)){
            std:: cout << "(ENTER '-1' TO END)Invalid, enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if(num2 == -1){
            return 0;
        }
        sum = equation(num1, num2, operation);
        std:: cout << num1 << " " << operation << " " << num2 << " = " << sum << "\n";
        num1 = sum;
    }
    return 0;
}