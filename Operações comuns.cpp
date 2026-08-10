#include <iostream>

double* calculateStats(double arr[], int size) {
    double sum, soma, average, max, min;
    sum = 0;
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    soma = 0;
    for(int i = 0; i < size; i++) {
        soma = soma + arr[i];
    }
    
    average = soma / size;

    min = arr[0];
    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    double* newArr = new double[4];
    newArr[0] = sum;
    newArr[1] = average;
    newArr[2] = max;
    newArr[3] = min;

    return newArr;
}

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();
    double arr[n];

    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        arr[i] = val;
    }

    double* stats = calculateStats(arr, n);
    std::cout << "Sum: " << stats[0] << std::endl;
    std::cout << "Average: " << stats[1] << std::endl;
    std::cout << "Maximum: " << stats[2] << std::endl;
    std::cout << "Minimum: " << stats[3] << std::endl;
    delete[] stats;
    return 0;
}
