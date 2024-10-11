#include <iostream>

////Selection sort////
//Best case: O(N2)
//Avarage case: O(N2) 
//Worst case: O(N2)

void selectionSort(int* arr, int size) {
    for(int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for(int j = i + 1; j < size; ++j) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        std::swap(arr[minIndex], arr[i]);
    }
}

int main() {
    const int size = 5;
    int arr[] = {5, 6, 2, 66, 9};

    selectionSort(arr, size);
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}