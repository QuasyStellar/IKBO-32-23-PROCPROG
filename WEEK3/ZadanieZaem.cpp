#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long double S, p, n, r;		//определение переменых
	cout << "Введите сумму займа, процент и кол-во лет в формате 'S p n':";
	cin >> S >> p >> n; //получаем введенные данные
	r = p / 100;
	if ((pow(1+r, n) != 1) && (S>0) && (n >0) && (p>0)){
		cout << "Месячная выплата m = " << ((S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1)));
		}
	else {
		cout << "Нет решений";
	}
}
