#include <iostream>
#include <cctype>

//          O(n2)
bool repeateOrNotN2(char* arr) {
    for(int i = 0; arr[i] != '\0'; ++i) {
        for(int j = i + 1; arr[j] != '\0'; ++j) {
            if(arr[i] == arr[j]) {
                return false;
            }
        }
    }
    return true;
}

//          O(n)
bool repeateOrNotN(char* arr, int size) {
    const int sizeLetters = 26;
    int arrNum[sizeLetters] = {};

    for(int i = 0; arr[i] != '\0'; ++i) {
        char ch = tolower(arr[i]);
        
        if(ch >= 'a' && ch <= 'z') {
            ++arrNum[ch - 'a'];
        
            if(arrNum[ch - 'a'] > 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {

    char arr[] = "hlkesdfgjk";
    if(repeateOrNotN2(arr)) {
        std::cout << "There is no repeated letters" << std::endl;
    } else {
        std::cout << "There are repeated letters" << std::endl;
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    if(repeateOrNotN(arr, size)) {
        std::cout << "There is no repeated letters" << std::endl;
    } else {
        std::cout << "There are repeated letters" << std::endl;
    }
    return 0;
}