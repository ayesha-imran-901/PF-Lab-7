#include <iostream>
using namespace std;
int main() {
    const int SIZE = 7;
    int numbers[SIZE];
    int count = 0;
    cout << "Enter seven integers:";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] % 5 == 0) {
            count++;
        }
    }
    cout << "Number of multiples of five: " << count << endl;
    return 0;
}