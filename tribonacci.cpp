#include <iostream>
using namespace std;

int tribonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Tribonacci(" << n << ") = " << tribonacci(n) << endl;
    return 0;
}
