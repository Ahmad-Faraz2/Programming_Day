#include <iostream>
using namespace std;
main() {
    int num;
    int thousand, hundred, ten, one;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    thousand = num / 1000;
    hundred = (num / 100) % 10;
    ten = (num / 10) % 10;
    one = num % 10;

    int sum = thousand + hundred + ten + one;

    cout << "Sum of digits: " << sum << endl;

    return 0;
}

