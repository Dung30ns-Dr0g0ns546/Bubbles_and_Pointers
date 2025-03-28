#include <iostream>

const int MAX = 9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main() {
    int values[MAX] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

    std::cout << "Before sorting:\n";
    printValues(values);

    int x = 3, y = 5;
    std::cout << "x: " << x << ", y: " << y << std::endl;
    swap(&x, &y);
    std::cout << "After swapping -> x: " << x << ", y: " << y << std::endl;

    sort(values);

    std::cout << "After sorting:\n";
    printValues(values);

    return 0;
}

void printValues(int* values) {
    for (int i = 0; i < MAX; i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
}

void sort(int* values) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (values[j] > values[j + 1]) {
                swap(&values[j], &values[j + 1]);
            }
        }
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}