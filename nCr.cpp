#include <iostream>
using namespace std;

int nCr(int n, int r) {
    // Base cases
    if (r == 0 || r == n)
        return 1;

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << "nCr = " << nCr(n, r) << endl;
    return 0;
}
