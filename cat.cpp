#include "cat.h"
#include <iostream>

using namespace std;

Cat::Cat(string name) {
    name_ = name;
}

bool Cat::IsAlive() const { return number_of_lives_ > 0; };
bool Cat::IsHappy() { UpdateHappiness(); cout  << "\n" << happiness_ << "\n"; return happiness_ < 3; };
void Cat::printInfo() {cout << "Name " << name_ << endl; };
void Cat::UpdateHappiness() { happiness_+= 2; };