#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <locale>
#include <conio.h>

using namespace std;

void task1() {

    int N;
    cout << "Input size of array N: ";
    cin >> N;
    int A[100];
    cout << "Input element of array A:" << endl;
        for (int i = 0; i < N; ++i) {
            cout << "A[" << i << "]: ";
            cin >> A[i];
        }
    long long C[100];
    for (int i = 0; i < N; ++i) {
        C[i] = static_cast<long long>(pow(2, i + 1)) * A[i];
    }
    cout << "Array C:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "C[" << i << "]: " << C[i] << endl;
    }
}

