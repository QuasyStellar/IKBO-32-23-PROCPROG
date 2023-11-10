#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    setlocale(LC_ALL, "");
    cout << "Введите начало интервала и конец интервала: ";
    cin >> m >> n;
    cout << "Числа-близнецы в интервале " << m << ", " << n << ":" << endl;
    for (int i = m; i <= n - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " " << i + 2 << endl;
        }
    }
}
