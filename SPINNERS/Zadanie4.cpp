#include <iostream>
#include <cmath>
using namespace std;

int CoupeNumber(int k) {
	if (k > 36) {
		return 8 - (k - 37) / 2;
	}
	else {
		return (k - 1) / 4;
	}
}

int main() {
    setlocale(LC_ALL, "");
	int coupe[9];
	int N, place, result = 0, curr = 0;
	cout << "Введите кол-во свободных мест: ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> place;
		coupe[CoupeNumber(place)] += 1;
	}
	for (int i = 0; i < 9; i++) {
		if (coupe[i] == 6) {
			curr += 1;
			if (result > curr){
				result = curr;
			}
		}
		else {
			curr = 0;
		}
	}
	cout << "Макс. число идущих подряд свободных купе: "<<result << endl;
}
