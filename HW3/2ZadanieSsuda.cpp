#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    long double S, n, p, r, m1, m;
    cout << "Введите ссуду, месячные выплаты и кол-во лет в формате 'S m n': ";
    cin >> S >> m >> n;
    p = 0.01;
    m1 = 0;
    if ((S > 0) && (p > 0) && (m > 0))
    {
        while (abs((m1 - m) < 0.01))
        {
            r = p / 100;
            m1 = (S * r * pow((1 + r), n) / (12 * (pow((1 + r), n) - 1)));
            p += 0.01;
        }
        if (p > 100)
            cout << "Невозможно вычислить" << endl;
        else
            cout << "Процент P = " << p << endl;
    }
}
