#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;  //3+2+1
        num /= 10;        //12   1 
    }

    cout << "Sum of digits = " << sum; // 6

    return 0;
}