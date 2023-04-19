# include <iostream>
using namespace std;

int main() {
    int* p_number {}; // will initialize nullptr
    double* p_frac {};

    int* p_num1 {nullptr};
    int* p_frac_num1 {nullptr};

    cout << sizeof(p_number) << endl;
    cout << sizeof(p_frac) << endl;

    int int_var{43};
    int *p_int{&int_var};
    
    cout << "int var " << int_var << " address " << p_int << endl;

    int int_data {72};
    p_number = &int_data;

    cout << "p_number " << p_number << " its value " << *p_number << endl;

    // return memory to the OS
    // delete p_number;
    // p_number = nullptr;

    p_number = new int(100);
    cout << "p_number " << p_number << " its value " << *p_number << endl;

    // dynamic array
    int* numbers = new int[5] {1, 2, 3, 4, 5}; // this array lives in the heap instead of stack (static arrays live in the stack)
    // for( auto s : numbers ) --> This will fail such loops don't work with dynamic arrays
     if(numbers) {
        for(size_t i{}; i < 5; ++i) {
            cout << "value " << numbers[i] << " : " << *(numbers + i) << endl;
        }
     }
    return 0;
}