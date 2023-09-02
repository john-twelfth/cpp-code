#include <iostream>
using namespace std;
int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left + 1;
    int j = right;
    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        while (i <= j && arr[j] >= pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i++], arr[j]);
        }
    }
    swap(arr[left], arr[j]);
    return j;
}
void quicksort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    int pivotIndex = partition(arr, left, right);
    quicksort(arr, left, pivotIndex - 1);
    quicksort(arr, pivotIndex + 1, right);
}


int main() {
    int arr[] = {1, 3, 5, 6, 2, 4, 1, 5, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int num: arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
