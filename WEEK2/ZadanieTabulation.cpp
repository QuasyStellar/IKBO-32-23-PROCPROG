#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x = -4.0;		//определение переменых
	cout << "x  |  y"<< endl;
	while (x <= 4) {
		if ((x - 1) != 0) {
			cout << x << " | " <<(pow(x, 2) - 2 * x + 2) / (x - 1) << endl;
		}
		else{
			cout << x << " | " << "На ноль делить нельзя" << endl;
 		}
		x += 0.5;
	}
}
