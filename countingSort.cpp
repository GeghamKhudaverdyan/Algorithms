#include <iostream>
#include <algorithm>

////Counting sort////
// Base case: O(n + k)
// Avarage case: O(n + k)
// Worst case: O(n + k)

// void countingSort(int* arr, int size) {
//     int max = *std::max_element(arr, arr + size);

//     int range = max + 1;
//     int* count = new int[range]();

//     for(int i = 0; i < size; ++i) {
//         ++count[arr[i]];
//     }

//     for(int i = 0, j = 0; i < range; ++i) {
//         for(int k = 0; k < count[i]; ++k) {
//             arr[j++] = i;
//         }
//     }

//     delete[] count;
// }

void countingSort(int* arr, int size) {
    int min = *std::min_element(arr, arr + size);
    int max = *std::max_element(arr, arr + size);

    int newCount = max - min + 1;
    int* count = new int[newCount]();

    for(int i = 0; i < size; ++i) {
        ++count[arr[i] - min];
    }

    for(int i = 0, j = 0; i < newCount; ++i) {
        for(int k = 0; k < count[i]; ++k) {
            arr[j++] = i + min; 
        }
    }

    delete[] count;

}

int main() {
    int arr[] = {2, 6, -6, 6, 3};
    const int size = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, size);
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}