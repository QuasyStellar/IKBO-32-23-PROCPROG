#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "");
	int sv, sh;
	cout << "Введите ко-во свободных мест и детей: ";
	cin >> sv >> sh;
	while (sh != 1) {
		sv = (sv - sh % 2) / 2;
		sh = sh / 2;
	}
	cout <<"C одной стороны - "<<(sv - 1) / 2 << " места, c другой - " << sv / 2;
}
