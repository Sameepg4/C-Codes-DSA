#include <iostream>
using namespace std;

int main() {
    int a, x;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the power till you want to check : ";
    cin >> a;
    double sum = 0.0; // Use a double for more accurate results

    for (int i = 1; i <= a; i++) {
        int numerator = 1;
        int denominator = 1;

        for (int j = 1; j <= i; j++) {
            numerator *= x;
            denominator *= j;
        }

        sum += static_cast<double>(numerator) / denominator;
    }

    cout << "The sum of the series is: " << sum << endl;
    return 0;
}