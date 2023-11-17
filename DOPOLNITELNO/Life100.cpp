#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


void createInitialGeneration() {
    ofstream file("work.dat");
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            file << (rand() % (12 + 1)) << ' ';
        }
        file << endl;
    }
}

void fillGeneration(int ind, int** generation) {
    const char* filename = (ind == 0) ? "work.dat" : "work.out";
    ifstream file(filename);
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            file >> generation[i][j];
        }
    }
    file.close();
}

void outfile(int** currentGeneration) {
    ofstream file("work.out");
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            file << currentGeneration[i][j] << ' ';
        }
        file << endl;
    }
}

void printGeneration(int** generation) {
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            cout << generation[i][j] << ' ';
        }
        cout << endl;
    }
}

void nextGeneration(int** currentGeneration) {
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            int neighbors = 0;
            if (i and currentGeneration[i - 1][j] != 0) { neighbors += 1; }
            if (i<20 and currentGeneration[i + 1][j] != 0) { neighbors += 1; }
            if (j and currentGeneration[i][j - 1] != 0) { neighbors += 1; }
            if (j <20 and currentGeneration[i][j + 1] != 0) { neighbors += 1; }

            if (currentGeneration[i][j] > 0 && (neighbors == 2 || neighbors == 3) && currentGeneration[i][j] != 12) {
                currentGeneration[i][j] = currentGeneration[i][j] + 1;
            }
            else if (currentGeneration[i][j] == 0 && neighbors == 3) {
                currentGeneration[i][j] = 1;
            }
            else if (currentGeneration[i][j] > 0 && neighbors < 2) {
                currentGeneration[i][j] = 0;
            }
            else if (currentGeneration[i][j] > 0 && neighbors > 3 || currentGeneration[i][j] == 12) {
                currentGeneration[i][j] = 0;
            }
        }
    }
}

int countAliveMicrobes(int** generation) {
    int count = 0;
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            if (generation[i][j] > 0) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));

    createInitialGeneration();

    int generations;
    cout << "Кол-во поколений: ";
    cin >> generations;

    int** currentGeneration = new int* [21];

    for (int i = 0; i < 21; ++i) {
        currentGeneration[i] = new int[21]();
    }

    fillGeneration(0, currentGeneration);

    for (int gen = 1; gen <= generations; ++gen) {
        cout << "Поколение " << gen << ":\n";
        printGeneration(currentGeneration);

        int aliveCount = countAliveMicrobes(currentGeneration);
        cout << "Живые микробы: " << aliveCount << endl;

        if (aliveCount == 0) {
            cout << "Микробы вымерли\n";
            break;
        }

        nextGeneration(currentGeneration);
        outfile(currentGeneration);
    }

    for (int i = 0; i < 21; ++i) {
        delete[] currentGeneration[i];
    }
    delete[] currentGeneration;
}
