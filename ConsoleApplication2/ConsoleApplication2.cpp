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

//задача2
void task2() {
    int n;
    cout << "Input size of array: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Input " << i + 1 << "element of array: ";
        cin >> a[i];
    }
    int c, d;
    cout << "Left limit of the range: ";
    cin >> c;
    cout << "Right limit of the range: ";
    cin >> d;
    int max_idx = c;
    for (int i = d; i >= c; i--) {
        if (a[i] > a[max_idx]) {
            max_idx = i;
        }
    }
    if (max_idx == c) {
        cout << "There are no even numbers in the range." << endl;
    }
    else {
        cout << "Number of the last odd element: " << max_idx << endl;
         }
}