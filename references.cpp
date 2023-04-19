# include <iostream>
using namespace std;

int main() {
    // reference = variable alias THis means that the addresses of the reference remains the same as the value
    // so change the reference = change to variable

    int x{10};

    int& ref_x{x};

    cout << "x : " << x << endl;
    ++ref_x;
    cout << "x after ++ref_x " << x << endl;

    // if I do a int y = 120 and then assign that to our ref_x then the x value will change.
    int y{120};
    ref_x = y;
    cout << "x after ref_x = y " << x << endl;   

    // const keyword with reference ensures that the reference cannot be used to change the referenced value.
    auto age = 30;
    const auto& const_age_ref{age};

    // const_age_ref = 31; --> This will be a compiler error
    cout << "age: " << age << "age modified: " << ++age << endl;
    return 0;
}