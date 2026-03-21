#include <iostream>
using namespace std;

class student1 {
  public:             
    float gpa = 0.6;
    string name = "daquavious";
};

class student2 {
  public:
    float gpa = 4.0;
    string name = "Lebron Jahamez";
};

int main() {
    student1 student1;
    student2 student2;

    cout << "Student 1: " << "\n";
    cout << "Name: " << student1.name << "\n";
    cout << "GPA: " << student1.gpa << "\n\n";

    cout << "Student 2: " << "\n";
    cout << "Name: " << student2.name << "\n";
    cout << "GPA: " << student2.gpa << "\n\n";

    cout << "GPA average of class:" << "\n";
    cout << (student1.gpa + student2.gpa) / 2 << "\n\n";

    return 0;
} 