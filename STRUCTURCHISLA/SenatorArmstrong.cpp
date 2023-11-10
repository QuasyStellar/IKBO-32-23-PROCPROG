#include <iostream>
#include <cmath>

using namespace std;

bool SenatorArmstrong(int num, int n) { //Nanomachines son
    int sum = 0;
    int temp = num;

    while (temp != 0) {
        sum += static_cast<int>(pow(temp % 10, n));
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int n;
    setlocale(LC_ALL, "");
    cout << "Введите значение n: ";
    cin >> n;

    if (n > 10) {
        cout << "n должно быть не больше 10." << endl;
        return 1;
    }

    cout << n << "-значные числа Армстронга:" << endl;
    for (int i = static_cast<int>(pow(10, n - 1)); i < static_cast<int>(pow(10, n)); ++i) {
        if (SenatorArmstrong(i, n)) {
            cout << i << endl;
        }
    }
}
