/*
* Title: Sorting and Algorithm Efficiency
* Author: Ant Duru
* ID: 21704108
* Section: 2
* Assignment: 1
* Description: header file for function prototypes
*/
    
    
    void selectionSort(int *arr, const int size, int &compCount, int &moveCount);
    void mergeSort(int *arr, const int size, int &compCount, int &moveCount);
    void quickSort(int *arr, const int size, int &compCount, int &moveCount);
    void radixSort(int *arr, const int size);
    int getMax(int* arr, const int size);
    void helper(int* arr, const int size, int h);
    int indexOfLargest(const int arr[], int size, int& compCount, int& moveCount);
    void swap(int &x, int &y);
    void displayArray(const int *arr, const int size);
    void createRandomArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size);
    void createAscendingArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size);
    void createDescendingArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size);
    void printElements(int compCount, int moveCount);
    void performanceAnalysis();
