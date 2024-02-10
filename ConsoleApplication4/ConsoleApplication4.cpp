#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, base = 0;
    while (binaryNumber != 0) {
        int remainder = binaryNumber % 10;
        decimalNumber += remainder * pow(2, base);
        binaryNumber /= 10;
        base++;
    }
    return decimalNumber;
}

int main() {
    int binaryNumber;
    cout << "Введите число в двоичной системе: ";
    cin >> binaryNumber;
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Число в десятичной системе: " << decimalNumber << endl;
    return 0;
}
