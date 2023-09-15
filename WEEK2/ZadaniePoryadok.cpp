#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float n;		//определение переменых
	cout << "Введите произвольное натуральное число N: "; //запрос ввода пользователя
	cin >> n;
	for (int i = n; i <= n + 9; i++) { cout << i << endl; } //цикл с выводом чисел
}
