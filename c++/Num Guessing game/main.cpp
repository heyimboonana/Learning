#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int random = rand() % 100 + 1;
    int guess;

    //cout << "Random: " << random ;
    do{
        cout << "guess a number: ";
        cin >> guess;
    }while((guess < 0));

    return 0;
}