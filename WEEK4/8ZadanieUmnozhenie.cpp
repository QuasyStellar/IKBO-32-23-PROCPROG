#include <iostream>
#include <list>
#include <vector>
using namespace std;
float a11; float a22; float a33;
float b11; float b22; float b33;
float cena(int chi) {
	switch (chi)
	{ 
	case 1: { return 1.2; break; }
	case 2: { return 2.8; break; }
	case 3: { return 5.0; break; }
	case 4: { return 2.0; break; } 
	} 
}
float comis(int chi) {
	switch (chi)
	{
	case 1: { return 0.5; break; }
	case 2: { return 0.4; break; }
	case 3: { return 1.0; break; }
	case 4: { return 1.5; break; }
	}
}
int main() {
	setlocale(LC_ALL, "ru-RU");
	list <float> a1 = { 5, 2, 0, 10 }; list <float> a2 = { 3, 5, 2, 5 }; list <float> a3 = { 20, 0, 0, 0 };
	int i = 0;
	for (auto s : a1) { i++; a11 += cena(i) * s; } i = 0;
	for (auto s : a2) { i++; a22 += cena(i) * s; } i = 0;
	for (auto s : a3) { i++; a33 += cena(i) * s; } i = 0;
	if (a11 > a22 and a22 > a33) { cout << "Первый продавец получил больше всегод денег с продажи\n"; }
	else if (a22 > a11 and a11 > a33) { cout << "Второй продавец получил больше всегод денег с продажи\n"; }
	else if (a33 > a22 and a22 > a11) { cout << "Третий продавец получил больше всегод денег с продажи\n"; }
	if (a11 < a22 and a11 < a33) { cout << "Первый продавец получил меньше всего денег с продажи\n"; }
	else if (a22 < a11 and a22 < a33) { cout << "Второй продавец получил меньше всего денег с продажи\n"; }
	else if (a33 < a22 and a33 < a11) { cout << "Трейтий продавец получил меньше всего денег с продажи\n"; }
	for (auto s : a1) { i++; b11 += cena(i) * s; } i = 0;
	for (auto s : a2) { i++; b22 += cena(i) * s; } i = 0;
	for (auto s : a3) { i++; b33 += cena(i) * s; } i = 0;
	if (b11 > b22 and b11 > b33) { cout << "Первый продавец получил наибольшие комиссионные\n"; }
	else if (b22 > b11 and b22 > b33) { cout << "Второй продавец получил наибольшие комиссионные\n"; }
	else if (b33 > b22 and b33 > b11) { cout << "Третий продавец получил наибольшие комиссионные\n"; }
	if (b11 < b22 and b11 < b33) { cout << "Первый продавец получил наименьшие комиссионные\n"; }
	else if (b22 < b11 and b22 < b33) { cout << "Второй продавец получил наименьшие комиссионные\n"; }
	else if (b33 < b22 and b33 < b11) { cout << "Третий продавец получил наименьшие комиссионные\n"; }
	cout << "Общая сумма денег, вырученных за проданные товары: " << a11 + a22 + a33 << endl;
	cout << "Всешо комиссионных: " << b11 + b22 + b33 << endl;
	cout << "Всего прошло через продавцов: " << a11 + a22 + a33 + b11 + b22 + b33;
}
