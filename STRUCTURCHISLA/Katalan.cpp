#include <iostream>

using namespace std;

int Catalan(int n) {
    int i, sum;
    if (n <= 0) {
        return 1;
    }
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += Catalan(i) * Catalan((n - 1) - i);
    }
    return sum;

}

int main()
{
    int m, n;
    setlocale(LC_ALL, "");
    cout << "Введите начало и конец интервала: ";
    cin >> m >> n;
    cout << "Числа Каталана в интервале " << m << ", " << n << ":" << endl;
    for (int p = m; p <= n; p++) {
        if (Catalan(p)<=n){
            cout << Catalan(p) << endl;
        }
        else {
            return 0;
        }
    }
}
