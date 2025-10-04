// main.cpp
// A C++ implementation of my own Median Drift Sort algorithm.
// This implementation generates 500 random integers between 0 and 1000,
// sorts them using the Median Drift Sort algorithm, and prints the sorted array.
// The psuedocode version has been slightly modified, simply extracting the partioning
// logic into its own function for clarity. This is optional, but helped me while writing it.

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int start, int end) {
    int medIdx = start + (end - start) / 2;
    int median = arr[medIdx];

    int i = start;
    int j = end;

    while (i <= j) {
        while (arr[i] < median) i++;
        while (arr[j] > median) j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return i;
}

void medianDriftSort(vector<int>& arr, int start, int end) {
    if (start >= end) return;
    int split = partition(arr, start, end);
    medianDriftSort(arr, start, split - 1);
    medianDriftSort(arr, split, end);
}

int main() {
    vector<int> original;
    for (int i = 0; i < 500; i++) {
        original.push_back(rand() % 1001);
    }

    medianDriftSort(original, 0, original.size() - 1);
    for (int num : original) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
