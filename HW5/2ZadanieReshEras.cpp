#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    if (n >= 2) {
        bool* is_prime = new bool[n + 1];
        for (int i = 0; i <= n; i++) {
            is_prime[i] = true;
        }
        is_prime[0] = is_prime[1] = false;

        for (int m = 2; m < n; m++) {
            for (int j = m * 2; j < n; j += m) {
                is_prime[j] = false;
            }
        }

        cout << "Простые числа в диапазоне от 2 до " << n << ": ";
        for (int i = 2; i < n; i++) {
            if (is_prime[i]) {
                cout << i << " ";
            }
        }
        cout << endl;

        delete[] is_prime;
    }
    else {
        cout << "Пожалуйста, введите число больше или равное 2." << endl;
    }
}
