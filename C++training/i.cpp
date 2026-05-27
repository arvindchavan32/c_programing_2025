#include<iostream>
#include <string>

void greetUser(std::string name);

double calculateArea(double length, double width = 5.0);

int add(int a, int b);
double add(double a, double b);

void incrementByValue(int x);    
void incrementByReference(int &a); 

int main() {
    greetUser("Alice");

    std::cout << "Area (length 10, default width 5): " << calculateArea(10.0) << std::endl;
    std::cout << "Area (length 10, width 10): " << calculateArea(10.0, 10.0) << std::endl;

    std::cout << "Int add: " << add(5, 10) << std::endl;
    std::cout << "Double add: " << add(5.5, 10.5) << std::endl;

    int num = 10;
    
    incrementByValue(num);
    std::cout << "After incrementByValue: " << num << " (No change)" << std::endl;

    incrementByReference(num);
    std::cout << "After incrementByReference: " << num << " (Value changed)" << std::endl;

    return 0;
}


void greetUser(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

double calculateArea(double length, double width) {
    return length * width;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

void incrementByValue(int x) {
    x++;
}

void incrementByReference(int &a) {

}       