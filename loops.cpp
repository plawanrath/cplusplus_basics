#include <iostream>
using namespace std;

int main() {
    int items[] {1, 2, 3, 4, 5, 6}; // static array

    for (auto v : items) {
        cout << v << endl;
    }

    return 0;
}