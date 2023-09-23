#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float S, m, n, pp; //определяем переменные
	cout << "Введите ссуду, месячные выплаты и кол-во лет в формате 'S m n': ";
	cin >> S >> m >> n;
	if ((S > 0) and (n > 0) and (pp>0)) {    // проверяем корректность введеных данных
		for (pp = 1; pp <= 99; pp += 1) {   //перебор значений
			if (abs(m - (S * (pp / 100) * pow((1 + (pp / 100)), n)) / (12 * (pow((1 + (pp / 100)), n) - 1))) < 0.01) {  //проверяем близко ли значение для ежемесячной выплаты, чем ближе тем точнее процент
				break;
			}
		}
		cout << "Процент P = " << pp << "%";
	}
	else {
		cout << "Для заданных данных невозможно вычислить";
	}
}
