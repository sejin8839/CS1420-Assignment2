#include <iostream>
using namespace std;

int sum_of_squares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool is_happy_number(int num) {
    while (num != 1 && num != 4) {
        num = sum_of_squares(num);
    }
    return num == 1;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num <= 0) {
        cout << "Please enter a number greater than 0" << endl;
        return 0;
    }

    if (is_happy_number(num)) {
        cout << num << " is a Happy Number" << endl;
    } else {
        cout << num << " is not a Happy Number" << endl;
    }

    return 0;
}