#include<iostream>
#include<cmath>
using namespace std;
int yearseychas, monthseychas, dayseychas;
float yearq, monthq, dayq;
int visokosniy(int yearsos) {
	if ((yearsos % 4 == 0) and ((yearsos % 100 != 0) or (yearsos % 400 == 0))) { return true; }
	else { return false; }
}
int year(int years) {
	if (years == yearq and years > 0) { return true; }
	else { return false; }
}
int month(int months) {
	if (months == monthq and months <= 12 and months > 0) { return true; }
	else { return false; }
}
int day(int days) {
	if (days == dayq and days > 0) {
		switch (monthseychas) {
		case 1: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		case 2: {
			if (visokosniy(yearseychas)) {
				if (days <= 29) { return true; }
				else { return false; }
			}
			else {
				if (days <= 28) { return true; }
				else { return false; }
			}
		}
		case 3: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		case 4: {
			if (days <= 30) { return true; }
			else { return false; }
		}
		case 5: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		case 6: {
			if (days <= 30) { return true; }
			else { return false; }
		}
		case 7: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		case 8: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		case 9: {
			if (days <= 30) { return true; }
			else { return false; }
		}
		case 10: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		case 11: {
			if (days <= 30) { return true; }
			else { return false; }
		}
		case 12: {
			if (days <= 31) { return true; }
			else { return false; }
		}
		default: {
			return false;
		}
		}
	}
	else {
		return false;
	}
	return 0;
}
int znakzodiaka(int deys) {
	switch (monthseychas) {
	case 1: {
		if (deys >= 1 and deys <= 20) { cout << "Знак зодиака: Козерог"; }
		else { cout << "Знак зодиака: Водолей"; }
		break;
	}
	case 2: {
		if (deys >= 1 and deys <= 19) { cout << "Знак зодиака: Водолей"; }
		else { cout << "Знак зодиака: Рыбы"; }
		break;
	}
	case 3: {
		if (deys >= 1 and deys <= 20) { cout << "Знак зодиака: Рыбы"; }
		else { cout << "Знак зодиака: Овен"; }
		break;
	}
	case 4: {
		if (deys >= 1 and deys <= 20) { cout << "Знак зодиака: Овен"; }
		else { cout << "Знак зодиака: Телец"; }
		break;
	}
	case 5: {
		if (deys >= 1 and deys <= 21) { cout << "Знак зодиака: Телец"; }
		else { cout << "Знак зодиака: Близнецы"; }
		break;
	}
	case 6: {
		if (deys >= 1 and deys <= 21) { cout << "Знак зодиака: Близнецы"; }
		else { cout << "Знак зодиака: Рак"; }
		break;
	}
	case 7: {
		if (deys >= 1 and deys <= 22) { cout << "Знак зодиака: Рак"; }
		else { cout << "Знак зодиака: Лев"; }
		break;
	}
	case 8: {
		if (deys >= 1 and deys <= 21) { cout << "Знак зодиака: Лев"; }
		else { cout << "Знак зодиака: Дева"; }
		break;
	}
	case 9: {
		if (deys >= 1 and deys <= 23) { cout << "Знак зодиака: Дева"; }
		else { cout << "Знак зодиака: Весы"; }
		break;
	}
	case 10: {
		if (deys >= 1 and deys <= 23) { cout << "Знак зодиака: Весы"; }
		else { cout << "Знак зодиака: Скорпион"; }
		break;
	}
	case 11: {
		if (deys >= 1 and deys <= 22) { cout << "Знак зодиака: Скорпион"; }
		else { cout << "Знак зодиака: Стрелец"; }
		break;
	}
	case 12: {
		if (deys >= 1 and deys <= 22) { cout << "Знак зодиака: Стрелец"; }
		else { cout << "Знак зодиака: Козерог"; }
		break;
	}
	}
	return 0;
}
int main() {
	setlocale(0, "");
	cout << "Введите год: "; cin >> yearq; cout << "Введите месяц: "; cin >> monthq; cout << "Введите день: "; cin >> dayq;
	yearseychas = round(yearq); monthseychas = round(monthq); dayseychas = round(dayq);
	if (year(yearseychas) and month(monthseychas) and day(dayseychas)) {
		znakzodiaka(dayseychas);
	}
	else {
		cout << "Ввод некорректных значений";
	}
}
