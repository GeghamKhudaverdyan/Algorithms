#include <iostream>

////Bubble sort////
//Best case: O(N) (already sorted)
//Avarage case: O(N2) 
//Worst case: O(N2)

void bubbleSort(int* arr, int size) {
    for(int i = 0; i < size - 1; ++i) {
        for(int j = 0; j < size -1 -i; ++j) {
            if(arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 5;
    int arr[] = {5, 6, 2, 66, 9};

    bubbleSort(arr, size);
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}