#include <iostream>
#include <vector>
#include <string>

int main() {
    int n1;
    int n2;

    std::cin >> n1;
    std::cin >> n2;
    std::cin.ignore();
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++) {
        int val;
        std::cin >> val;
        arr1[i] = val;
    }

    for (int i = 0; i < n2; i++) {
        int val;
        std::cin >> val;
        arr2[i] = val;
    }

    // Escreva seu código abaixo usando arr1, arr2, n1, n2
    bool isTrue = false;
    bool seque;
    for(int i = 0; i <= n1; i++){ 
        seque = true;
        for(int j = 0; j < n2; j++){
            if(arr1[i + j] != arr2[j]){
                seque = false;
                break;
            }
        }
        if(seque == true){
            isTrue = true;
        }
    }

    std::cout << std::boolalpha << isTrue << std::endl;
    return 0;
}
