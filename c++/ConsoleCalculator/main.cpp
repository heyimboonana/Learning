#include <iostream>
#include <limits>
#include <cctype>

//EQUATION
int equation(int num1, int num2, char operation) {
    switch(operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num2 != 0 ? num1 / num2 : 0; // avoid division by zero
        default: return 0;
    }
}

//GET NUM
int getNum (){
    int num;
    while(!(std::cin >> num)){
        std:: cout << "(PRESS '-1' TO STOP)Invalid, enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if(num == -1){
        return -1;
    }
    else{
        return num;
    }
}

//GET OPERATION
char getOp(){
    char op = '.';
    //CHECK OPERATION
    while(!(op == '+' || op == '-' || op == '*' || op == '/')){
        std::cout << "(ENTER 'Q' TO END)Enter an operation (+, -, *, / ): ";
        std::cin >> op;
        if(static_cast<char>(std::toupper(static_cast<unsigned char>(op))) == 'Q'){
            return 'Q';
        }
    }
    return op;
}

//MAIN
int main(){
    int calculations = 1;
    //INPUT NUMS
    std:: cout << "(ENTER '-1' TO STOP)Enter the first number: ";
    int num1 = getNum();
    if(num1 == -1) return 0;

    std::cout << num1 << " ( ) _ " << "\n";
    while(true){
        char op = getOp();
        if(op == 'Q') break;

        std::cout << num1 << " " << op <<" _ " << "\n";
        std:: cout << "(ENTER '-1' TO END)Enter the second number: ";
        int num2 = getNum();
        if(num2 == -1) break;

        int result = equation(num1, num2, op);
        std:: cout << calculations << ". " <<  num1 << " " << op << " " << num2 << " = " << result << "\n";
        calculations++;
        num1 = result;
    }
    return 0;
}