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

int main()
{
    int m, n;
    setlocale(LC_ALL, "");
    cout << "Введите начало и конец интервала: ";
    cin >> m >> n;
    cout << "Числа Софи-Жермен в интервале " << m << ", " << n << ":" << endl;
    for (int p = m; p <= n; p++) {
        if (isPrime(p) and isPrime(2 * p + 1)) {
            cout << p << endl;
        }
    }
}
