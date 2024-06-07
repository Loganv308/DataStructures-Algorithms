#include <iostream>

using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection_sort(int arr[], int size) {
    int minIndex, temp;
    for (int i = 0; i < size - 1; ++i) {
        minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        cout << "Array after iteration " << (i + 1) << ": ";
        print(arr, size);
    }
}

int main() {
    int array[] = {36, 55, 17, 35, 63, 85, 12, 48, 3, 66};
    int size = sizeof(array) / sizeof(int);
    print(array, size);
    selection_sort(array, size);
    return 0;
}