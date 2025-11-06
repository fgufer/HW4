#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
template <typename T>
void randArrP(T arr[], int size, int a = 1, int b = 10) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (b - a + 1) + a;
    }
}
template <typename T>
void printArrP(T arr[], int size, int w_count = 5) {
    for (int i = 0; i < size; i++) {
        cout.width(w_count);
        cout << arr[i];
    }
    cout << endl;
}