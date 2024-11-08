#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Array in reverse order:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}