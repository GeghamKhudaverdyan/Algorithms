#include <iostream>

////Insertion sort////
//Best case: O(N) (already sorted)
//Avarage case: O(N2) 
//Worst case: O(N2)

void insertionSort(int* arr, int size) {
    for(int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1], key;
    }
}

int main() {
    const int size = 5;
    int arr[] = {5, 6, 2, 66, 9};

    insertionSort(arr, size);
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}