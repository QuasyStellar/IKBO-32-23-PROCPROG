#include <iostream>
using namespace std;
int cukerman(int num) {
    int product = 1;
    int temp = num;
    while (temp != 0) {
        product *= temp % 10;
        temp /= 10;
    }
    if (product == 0){return 0;}
    return (num % product) == 0;
}


int main() {
    setlocale(LC_ALL, "");
    int m, n;
    cout << "Введите началo и конец интервала: ";
    cin >> m >> n;
    cout << "Числа Цукермана в интервале " << m << ", " << n << ": ";
    for (int i = m; i <= n; ++i) {
        if (cukerman(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
