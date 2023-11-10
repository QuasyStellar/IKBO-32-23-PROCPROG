#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int m, n;

    cout << "Введите начало интервала и конец: ";
    cin >> m >> n;
    cout << "Автоморфные числа в интервале " << m << ", " << n << ":" << endl;
    for (int i = m; i <= n; ++i) {
        int count = 0;
        int num = i;
        while (num != 0) {
            num /= 10;
            ++count;
        }
        if ((i * i) % static_cast<int>(pow(10, count)) == i) {
            cout << i << endl;
        }
    }
}
