#include <iostream>
#include <algorithm>

using namespace std;

bool check(int* ls, int count) {
    for (int i = 0; i < count; i++) {
        if (ls[i] == i+1) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "");
    int count, f = 1, ans = 0, st1 = 0, st2 = 0;
    cout << "Введите кол-во шариков: ";
    cin >> count;
    int* ls = new int[count];
    for (int x = 2; x <= count; x++) {
        f *= x;
    }

    for (int i = 0; i != count; i++) {
        ls[i] = i + 1;
    }

    for (int i = 0; i < f; i++) {    
        if (check(ls, count)) {
            ans++;
        }
        next_permutation(ls, ls + count);
    }
    delete[] ls;
    cout << "Oбщее количество ситуаций: " << ans << endl;
}
