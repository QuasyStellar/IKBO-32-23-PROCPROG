#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int width = 120;
    int height = 30;
    float minX = -2.0 * 3.14;
    float maxX = 2.0 * 3.14;

    for (float i = 0; i < height; i++) {
        float y = 1.0 - (i / (height - 1)) * 2.0;
        for (float j = 0; j < width; j++) {
            float x = minX + (j / (width - 1)) * (maxX - minX);
            float functionValue = sin(x);
            if (i == height / 2) {
                cout << '-';
            }
            else if (j == width / 2) {
                cout << '|';
            }
            else if (abs(functionValue - y) < 0.01) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
