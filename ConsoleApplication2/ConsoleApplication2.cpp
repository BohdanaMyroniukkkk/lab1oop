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

//задача3

void task3() {
    cout << "Input size of array: ";
    int n;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Input " << i + 1 << "element of array: ";
        cin >> a[i];
    }
    unordered_map<double, int> count;
    for (double num : a) {
        count[num]++;
    }
    double sum_repeats = 0;
    double product_unique = 1;
    for (auto it : count) {
        if (it.second > 1) {
            sum_repeats += it.first * it.second;
        }
        else {
            product_unique *= it.first;
        }
    }
    cout << "Sum of repeated numbers: " << sum_repeats << endl;
    cout << "Product of non-repeating numbers: " << product_unique << endl;
}

int main()
{
    int task;
    cout << "Input task number (1, 2, 3): ";
    cin >> task;
    switch (task) {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    default:
        cout << "Wrong task number." << endl;
    }
    return 0;
}