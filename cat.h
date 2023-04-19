#pragma once
#include <string>

class Cat {
    public:
        Cat(std::string name);
        bool IsAlive() const;
        bool IsHappy();
        void printInfo();
    private:
        void UpdateHappiness();
        
        int number_of_lives_{100};
        int happiness_{};
        std::string name_{};
};
// #include <iostream>
// #include <string>
// using namespace std;

// class Cat {
//     public:
//         Cat(string name) {
//             name_ = name;
//         }
//         bool IsAlive() const { return number_of_lives_ > 0; }; // this const guarantees that the function will not change the object on which its being called
//         bool IsHappy() { UpdateHappiness(); cout  << "\n" << happiness_ << "\n"; return happiness_ < 3; };
//         void printInfo() const {cout << "Name " << name_ << endl; };

//     private:
//         void UpdateHappiness() { happiness_+= 2; };

//         int number_of_lives_{100};
//         int happiness_{};
//         string name_{};
// };