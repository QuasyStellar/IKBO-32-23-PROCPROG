#include <iostream>
using namespace std;

int section(int k) {
    if (k <= 36)
        return (k - 1) / 4;
    else
        return 8 - (k - 37) / 2;
}

int main() {
    int count[9] = {0};

    int n;
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

    cout << ans << endl;

    return 0;
}
