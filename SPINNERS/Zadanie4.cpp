#include <iostream>
using namespace std;

int section(int k) {
    if (k <= 36)
        return (k - 1) / 4;
    else
        return 8 - (k - 37) / 2;
}

int main() {
    setlocale(LC_ALL, "");
    int count[9] = {0};
    int n;
    cout << "Введите кол-во свободных мест: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        count[section(k)]++;
    }
    int ans = 0;
    int curr = 0;
    for (int i = 0; i < 9; i++) {
        if (count[i] == 6) {
            curr++;
            ans = max(ans, curr);
        } else {
            curr = 0;
        }
    }

    cout <<"Макс. кол-во идущих подряд купе: "<<ans << endl;
}
