#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];

    for (int* p = arr; p < arr + size; p++) {
        *p = 2 * (p - arr);

    std::cout << "Original array values: ";
    for (int* p = arr; p < arr + size; p++) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;
    for (int* p = arr; p < arr + size; p++) {
        *p += 5;
    }

    int temp = *(arr + size - 1);
    for (int* p = arr + size - 1; p > arr; p--) {
        *p = *(p - 1);
    }
    *arr = temp;

    std::cout << "Array after shifting to the right: ";
    for (int* p = arr; p < arr + size; p++) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
