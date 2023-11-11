#include <iostream>
using namespace std;
int Jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n > 1) return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);

}

int main() {
    int m, n;
    setlocale(LC_ALL, "");
    cout << "Введите начало и конец интервала: ";
    cin >> m >> n;
    cout << "Числа Якобсталя в интервале: ";
    for (int i = m; i <= n; ++i) {
        if (Jacobsthal(i) <= n and i != 0){
            cout << Jacobsthal(i) << " ";
            }
        else{
            return 1;
        }
    }
}
