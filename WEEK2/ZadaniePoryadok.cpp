#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float n;		//определение переменых
	cout << "Введите произвольное число N: "; //запрос ввода пользователя
	cin >> n;
	n = round(n);
	if (n>=0){
	for (int i = n; i <= n + 9; i++) { cout << i << endl; } //цикл с выводом чисел
	}
	else {
		for (int i = 1; i <= 10; i++) { cout << i << endl; }
	}
}
