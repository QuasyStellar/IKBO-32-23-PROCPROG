#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, a;
	cout << "Введите произвольные x и a в формате 'x a': ";
	cin >> x >> a;
	if (abs(x) < 1) {
		cout << "Какой-то w =" <<a * log(abs(x));
	}
	else {
		cout << "Какой-то w =" << sqrt(a - pow(x, 2));
	}
}
