#include<iostream>
#include<cmath>


using namespace std;

int isvis(int year) {
	return (year % 4 == 0) and ((year % 100 != 0) or (year % 400 == 0));
}
int checkyear(int years, int year) {
	if (years == year and years > 0) { return true; }
	else { return false; }
}
int checkmonth(int monthc, int month) {
	if (monthc == month and monthc <= 12 and monthc > 0) { return true; }
	else { return false; }
}
int checkday(int day, int dayc, int monthc, int yearc) {
	if (day == dayc and day > 0) {
		switch (monthc) {
		case 1: {
			if (day <= 31) { return true; }
			else { return false; }
		}
		case 2: {
			if (isvis(yearc)) {
				if (day <= 29) { return true; }
				else { return false; }
			}
			else {
				if (day <= 28) { return true; }
				else { return false; }
			}
		}
		case 3: {
			if (day <= 31) { return true; }
			else { return false; }
		}
		case 4: {
			if (day <= 30) { return true; }
			else { return false; }
		}
		case 5: {
			if (day <= 31) { return true; }
			else { return false; }
		}
		case 6: {
			if (day <= 30) { return true; }
			else { return false; }
		}
		case 7: {
			if (day <= 31) { return true; }
			else { return false; }
		}
		case 8: {
			if (day <= 31) { return true; }
			else { return false; }
		}
		case 9: {
			if (day <= 30) { return true; }
			else { return false; }
		}
		case 10: {
			if (day <= 31) { return true; }
			else { return false; }
		}
		case 11: {
			if (day <= 30) { return true; }
			else { return false; }
		}
		case 12: {
			if (day <= 31) { return true; }
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
int znakzodiaka(int day, int monthc) {
	switch (monthc) {
	case 1: {
		if (day >= 1 and day <= 20) { cout << "Знак зодиака: Козерог"; }
		else { cout << "Знак зодиака: Водолей"; }
		break;
	}
	case 2: {
		if (day >= 1 and day <= 19) { cout << "Знак зодиака: Водолей"; }
		else { cout << "Знак зодиака: Рыбы"; }
		break;
	}
	case 3: {
		if (day >= 1 and day <= 20) { cout << "Знак зодиака: Рыбы"; }
		else { cout << "Знак зодиака: Овен"; }
		break;
	}
	case 4: {
		if (day >= 1 and day <= 20) { cout << "Знак зодиака: Овен"; }
		else { cout << "Знак зодиака: Телец"; }
		break;
	}
	case 5: {
		if (day >= 1 and day <= 21) { cout << "Знак зодиака: Телец"; }
		else { cout << "Знак зодиака: Близнецы"; }
		break;
	}
	case 6: {
		if (day >= 1 and day <= 21) { cout << "Знак зодиака: Близнецы"; }
		else { cout << "Знак зодиака: Рак"; }
		break;
	}
	case 7: {
		if (day >= 1 and day <= 22) { cout << "Знак зодиака: Рак"; }
		else { cout << "Знак зодиака: Лев"; }
		break;
	}
	case 8: {
		if (day >= 1 and day <= 21) { cout << "Знак зодиака: Лев"; }
		else { cout << "Знак зодиака: Дева"; }
		break;
	}
	case 9: {
		if (day >= 1 and day <= 23) { cout << "Знак зодиака: Дева"; }
		else { cout << "Знак зодиака: Весы"; }
		break;
	}
	case 10: {
		if (day >= 1 and day <= 23) { cout << "Знак зодиака: Весы"; }
		else { cout << "Знак зодиака: Скорпион"; }
		break;
	}
	case 11: {
		if (day >= 1 and day <= 22) { cout << "Знак зодиака: Скорпион"; }
		else { cout << "Знак зодиака: Стрелец"; }
		break;
	}
	case 12: {
		if (day >= 1 and day <= 22) { cout << "Знак зодиака: Стрелец"; }
		else { cout << "Знак зодиака: Козерог"; }
		break;
	}
	}
	return 0;
}
int main() {
	setlocale(0, "");
	int yearc, monthc, dayc;
	float year, month, day;
	cout << "Введите год, месяц, день 'xxxx xx xx': "; 
	cin >> year >> month >> day;
	yearc = round(year); monthc = round(month); dayc = round(day);
	if (checkyear(year, yearc) and checkmonth(month, monthc) and checkday(day, dayc, monthc, yearc)) {
		znakzodiaka(dayc, monthc);
	}
	else {
		cout << "Введены некорректные значения";
	}
}
