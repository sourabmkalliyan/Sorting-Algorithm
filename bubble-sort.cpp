#include <iostream>
#include <bits/stdc++.h>
#include <array>
void bubble_sort(int arr[], int n) {
    for (int i = n-1; i>=0; i--) {
        for (int j = 0; j<n; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}