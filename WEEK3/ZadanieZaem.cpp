#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long double S, p, n, m, r;		//определение переменых
	cout << "Введите сумму займа, процент и кол-во лет в формате 'S p n':";
	cin >> S >> p >> n; //получаем введенные данные
	r = p / 100;
	if ((pow(1+r, n) != 1) && (S>0) && (n >0) && (p>0)){
		m = (S * (p / 100) * pow((1 + (p / 100)), n)) / (12 * (pow((1 + (p / 100)), n) - 1));
		cout << "Месячная выплата m = " << m;
		}
	else {
		cout << "Введены некорректные данные";
	}
}
