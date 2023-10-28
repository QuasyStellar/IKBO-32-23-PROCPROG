#include <iostream>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long free_seats = N - 2; // Число свободных мест

    if (free_seats < K) {
        cout << "0 0"; // Если школьников больше, чем свободных мест
    } else {
        long long side_seats, middle_seats;

        if ((N - K) % 2 == 0) {
            side_seats = (N - K) / 2;
            middle_seats = 1;
        } else {
            side_seats = (N - K) / 2;
            middle_seats = 0;
        }

        cout << side_seats << " " << side_seats + middle_seats;
    }

    retur
      n 0;
}
