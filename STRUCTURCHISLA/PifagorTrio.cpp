#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int m = 0;
    int n = 0;
    bool isany = 0;
    cout << "Введите два числа: ";
    cin >> m >> n;
    if (m > n){
        int tmp = n;
        n = m;
        m = tmp;
    }
    cout << "Пифагоровы тройки чисел от " << m << " до " << n << " включительно:" << endl;
    for (int i = m; i <= n; i++) {
        for (int j = i; j <= n; j++){
            for (int k = m; k <= n; k++){
                if (i * i + j * j == k * k) {
                    cout << i << " " << j << " " << k << endl;
                    isany = 1;
                }
            }
        }
    }
    if (!isany) {
        cout << "Нет пифагоровых троек на заданном интервале" << endl;
    }
}
