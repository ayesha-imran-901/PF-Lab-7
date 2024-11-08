#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }

        if (numbers[i] == 0) {
            zero++;
        } else if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Number of positive numbers: " << positive << endl;
    cout << "Number of negative numbers: " << negative << endl;
    cout << "Number of odd numbers: " << odd << endl;
    cout << "Number of even numbers: " << even << endl;
    cout << "Number of zeros: " << zero << endl;

    return 0;
}