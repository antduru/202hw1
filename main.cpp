#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "sorting.h"
#include <ctime>
/*
* Title: Sorting and Algorithm Efficiency
* Author: Ant Duru
* ID: 21704108
* Section: 2
* Assignment: 1
* Description: main function for calling sorting functions
*/

using namespace std;



int main()
{
    int comp = 0;
    int moves = 0;
    int comp2 = 0;
    int moves2 = 0;
    int comp3 = 0;
    int moves3 = 0;
    srand (time(NULL));
    cout<<"---------------PART C----------------"<<endl;
    int given_arr1[16] = {12, 7, 11, 18, 19, 9, 6, 14, 21, 3, 17, 20, 5, 12, 14, 8};
    int given_arr2[16] = {12, 7, 11, 18, 19, 9, 6, 14, 21, 3, 17, 20, 5, 12, 14, 8};
    int given_arr3[16] = {12, 7, 11, 18, 19, 9, 6, 14, 21, 3, 17, 20, 5, 12, 14, 8};
    int given_arr4[16] = {12, 7, 11, 18, 19, 9, 6, 14, 21, 3, 17, 20, 5, 12, 14, 8};
    cout<<"---------------Displaying the array at the beginning.---------------"<<endl;
    displayArray(given_arr1, 16);
    cout<<"---------------Selection Sort.---------------"<<endl;
    selectionSort(given_arr1, 16, comp, moves);
    displayArray(given_arr1, 16);
    printElements(comp, moves);
    cout<<"---------------Merge Sort.---------------"<<endl;
    mergeSort(given_arr2, 16, comp2, moves2);
    displayArray(given_arr2, 16);
    printElements(comp2, moves2);
    cout<<"---------------Quick Sort.---------------"<<endl;
    quickSort(given_arr3, 16, comp3, moves3);
    displayArray(given_arr3, 16);
    printElements(comp3, moves3);
    cout<<"---------------Radix Sort.---------------"<<endl;
    radixSort(given_arr4, 16);
    displayArray(given_arr4, 16);

    // PART D
    cout<<endl;
    cout<<"---------------PART D----------------"<<endl;
    performanceAnalysis();
    return 0;
}



void performanceAnalysis()
{
    cout<<"-------------- RANDOMLY CREATED ARRAYS ---------------"<<endl;
    double duration;
    clock_t start;
    const int size1 = 6000;
    const int size2 = 10000;
    const int size3 = 14000;
    const int size4 = 18000;
    const int size5 = 22000;
    const int size6 = 26000;
    const int size7 = 30000;
    // Size 1
    int* arr1_size1 = new int[size1];
    int* arr2_size1 = new int[size1];
    int* arr3_size1 = new int[size1];
    int* arr4_size1 = new int[size1];
    createRandomArrays(arr1_size1, arr2_size1, arr3_size1, arr4_size1, size1);
    int compC11 = 0;
    int moveC11 = 0;
    int compC21 = 0;
    int moveC21 = 0;
    int compC31 = 0;
    int moveC31 = 0;
    int compC41 = 0;
    int moveC41 = 0;
    // Size 2
    int* arr1_size2 = new int[size2];
    int* arr2_size2 = new int[size2];
    int* arr3_size2 = new int[size2];
    int* arr4_size2 = new int[size2];
    createRandomArrays(arr1_size2, arr2_size2, arr3_size2, arr4_size2, size2);
    int compC12 = 0;
    int moveC12 = 0;
    int compC22 = 0;
    int moveC22 = 0;
    int compC32 = 0;
    int moveC32 = 0;
    int compC42 = 0;
    int moveC42 = 0;
    // Size 3
    int* arr1_size3 = new int[size3];
    int* arr2_size3 = new int[size3];
    int* arr3_size3 = new int[size3];
    int* arr4_size3 = new int[size3];
    createRandomArrays(arr1_size3, arr2_size3, arr3_size3, arr4_size3, size3);
    int compC13 = 0;
    int moveC13 = 0;
    int compC23 = 0;
    int moveC23 = 0;
    int compC33 = 0;
    int moveC33 = 0;
    int compC43 = 0;
    int moveC43 = 0;
    // Size 4
    int* arr1_size4 = new int[size4];
    int* arr2_size4 = new int[size4];
    int* arr3_size4 = new int[size4];
    int* arr4_size4 = new int[size4];
    createRandomArrays(arr1_size4, arr2_size4, arr3_size4, arr4_size4, size4);
    int compC14 = 0;
    int moveC14 = 0;
    int compC24 = 0;
    int moveC24 = 0;
    int compC34 = 0;
    int moveC34 = 0;
    int compC44 = 0;
    int moveC44 = 0;
    // Size 5
    int* arr1_size5 = new int[size5];
    int* arr2_size5 = new int[size5];
    int* arr3_size5 = new int[size5];
    int* arr4_size5 = new int[size5];
    createRandomArrays(arr1_size5, arr2_size5, arr3_size5, arr4_size5, size5);
    int compC15 = 0;
    int moveC15 = 0;
    int compC25 = 0;
    int moveC25 = 0;
    int compC35 = 0;
    int moveC35 = 0;
    int compC45 = 0;
    int moveC45 = 0;
    // Size 6
    int* arr1_size6 = new int[size6];
    int* arr2_size6 = new int[size6];
    int* arr3_size6 = new int[size6];
    int* arr4_size6 = new int[size6];
    createRandomArrays(arr1_size6, arr2_size6, arr3_size6, arr4_size6, size6);
    int compC16 = 0;
    int moveC16 = 0;
    int compC26 = 0;
    int moveC26 = 0;
    int compC36 = 0;
    int moveC36 = 0;
    int compC46 = 0;
    int moveC46 = 0;
    // Size 7
    int* arr1_size7 = new int[size7];
    int* arr2_size7 = new int[size7];
    int* arr3_size7 = new int[size7];
    int* arr4_size7 = new int[size7];
    createRandomArrays(arr1_size7, arr2_size7, arr3_size7, arr4_size7, size7);
    int compC17 = 0;
    int moveC17 = 0;
    int compC27 = 0;
    int moveC27 = 0;
    int compC37 = 0;
    int moveC37 = 0;
    int compC47 = 0;
    int moveC47 = 0;

    // SELECTION SORT
    int selectionDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of Selection Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    selectionSort(arr1_size1, size1, compC11, moveC11);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[0] = duration;

    start = clock();
    selectionSort(arr1_size2, size2, compC12, moveC12);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[1] = duration;

    start = clock();
    selectionSort(arr1_size3, size3, compC13, moveC13);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[2] = duration;

    start = clock();
    selectionSort(arr1_size4, size4, compC14, moveC14);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[3] = duration;

    start = clock();
    selectionSort(arr1_size5, size5, compC15, moveC15);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[4] = duration;

    start = clock();
    selectionSort(arr1_size6, size6, compC16, moveC16);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[5] = duration;

    start = clock();
    selectionSort(arr1_size7, size7, compC17, moveC17);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    selectionDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size1, selectionDuration[0], compC11, moveC11);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size2, selectionDuration[1], compC12, moveC12);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size3, selectionDuration[2], compC13, moveC13);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size4, selectionDuration[3], compC14, moveC14);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size5, selectionDuration[4], compC15, moveC15);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size6, selectionDuration[5], compC16, moveC16);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size7, selectionDuration[6], compC17, moveC17);
    cout<<endl;




    // mergeSort
    int mergeDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of merge Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    mergeSort(arr2_size1, size1, compC21, moveC21);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[0] = duration;

    start = clock();
    mergeSort(arr2_size2, size2, compC22, moveC22);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[1] = duration;

    start = clock();
    mergeSort(arr2_size3, size3, compC23, moveC23);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[2] = duration;

    start = clock();
    mergeSort(arr2_size4, size4, compC24, moveC24);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[3] = duration;

    start = clock();
    mergeSort(arr2_size5, size5, compC25, moveC25);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[4] = duration;

    start = clock();
    mergeSort(arr2_size6, size6, compC26, moveC26);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[5] = duration;

    start = clock();
    mergeSort(arr2_size7, size7, compC27, moveC27);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    mergeDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size1, mergeDuration[0], compC21, moveC21);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size2, mergeDuration[1], compC22, moveC22);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size3, mergeDuration[2], compC23, moveC23);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size4, mergeDuration[3], compC24, moveC24);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size5, mergeDuration[4], compC25, moveC25);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size6, mergeDuration[5], compC26, moveC26);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size7, mergeDuration[6], compC27, moveC27);
    cout<<endl;

    // quick SORT
    int quickDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of quick Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    quickSort(arr3_size1, size1, compC31, moveC31);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[0] = duration;

    start = clock();
    quickSort(arr3_size2, size2, compC32, moveC32);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[1] = duration;

    start = clock();
    quickSort(arr3_size3, size3, compC33, moveC33);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[2] = duration;

    start = clock();
    quickSort(arr3_size4, size4, compC34, moveC34);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[3] = duration;

    start = clock();
    quickSort(arr3_size5, size5, compC35, moveC35);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[4] = duration;

    start = clock();
    quickSort(arr3_size6, size6, compC36, moveC36);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[5] = duration;

    start = clock();
    quickSort(arr3_size7, size7, compC37, moveC37);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    quickDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size1, quickDuration[0], compC31, moveC31);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size2, quickDuration[1], compC32, moveC32);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size3, quickDuration[2], compC33, moveC33);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size4, quickDuration[3], compC34, moveC34);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size5, quickDuration[4], compC35, moveC35);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size6, quickDuration[5], compC36, moveC36);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size7, quickDuration[6], compC37, moveC37);
    cout<<endl;

    // radix SORT
    int radixDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of radix Sort"<<endl;
    printf("%s %s", "Array Size\t", "Elapsed Time\t");
    cout<<endl;
    start = clock();
    radixSort(arr4_size1, size1);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[0] = duration;

    start = clock();
    radixSort(arr4_size2, size2);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[1] = duration;

    start = clock();
    radixSort(arr4_size3, size3);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[2] = duration;

    start = clock();
    radixSort(arr4_size4, size4);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[3] = duration;

    start = clock();
    radixSort(arr4_size5, size5);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[4] = duration;

    start = clock();
    radixSort(arr4_size6, size6);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[5] = duration;

    start = clock();
    radixSort(arr4_size7, size7);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    radixDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t", size1, radixDuration[0]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size2, radixDuration[1]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size3, radixDuration[2]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size4, radixDuration[3]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size5, radixDuration[4]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size6, radixDuration[5]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size7, radixDuration[6]);
    cout<<endl;


    cout<<"-------------- RANDOMLY CREATED ASCENDING ARRAYS ---------------"<<endl;
    // Size 1
    int* asc_arr1_size1 = new int[size1];
    int* asc_arr2_size1 = new int[size1];
    int* asc_arr3_size1 = new int[size1];
    int* asc_arr4_size1 = new int[size1];
    createAscendingArrays(asc_arr1_size1, asc_arr2_size1, asc_arr3_size1, asc_arr4_size1, size1);
    int asc_compC11 = 0;
    int asc_moveC11 = 0;
    int asc_compC21 = 0;
    int asc_moveC21 = 0;
    int asc_compC31 = 0;
    int asc_moveC31 = 0;
    int asc_compC41 = 0;
    int asc_moveC41 = 0;
    // Size 2
    int* asc_arr1_size2 = new int[size2];
    int* asc_arr2_size2 = new int[size2];
    int* asc_arr3_size2 = new int[size2];
    int* asc_arr4_size2 = new int[size2];
    createAscendingArrays(asc_arr1_size2, asc_arr2_size2, asc_arr3_size2, asc_arr4_size2, size2);
    int asc_compC12 = 0;
    int asc_moveC12 = 0;
    int asc_compC22 = 0;
    int asc_moveC22 = 0;
    int asc_compC32 = 0;
    int asc_moveC32 = 0;
    int asc_compC42 = 0;
    int asc_moveC42 = 0;
    // Size 3
    int* asc_arr1_size3 = new int[size3];
    int* asc_arr2_size3 = new int[size3];
    int* asc_arr3_size3 = new int[size3];
    int* asc_arr4_size3 = new int[size3];
    createAscendingArrays(asc_arr1_size3, asc_arr2_size3, asc_arr3_size3, asc_arr4_size3, size3);
    int asc_compC13 = 0;
    int asc_moveC13 = 0;
    int asc_compC23 = 0;
    int asc_moveC23 = 0;
    int asc_compC33 = 0;
    int asc_moveC33 = 0;
    int asc_compC43 = 0;
    int asc_moveC43 = 0;
    // Size 4
    int* asc_arr1_size4 = new int[size4];
    int* asc_arr2_size4 = new int[size4];
    int* asc_arr3_size4 = new int[size4];
    int* asc_arr4_size4 = new int[size4];
    createAscendingArrays(asc_arr1_size4, asc_arr2_size4, asc_arr3_size4, asc_arr4_size4, size4);
    int asc_compC14 = 0;
    int asc_moveC14 = 0;
    int asc_compC24 = 0;
    int asc_moveC24 = 0;
    int asc_compC34 = 0;
    int asc_moveC34 = 0;
    int asc_compC44 = 0;
    int asc_moveC44 = 0;
    // Size 5
    int* asc_arr1_size5 = new int[size5];
    int* asc_arr2_size5 = new int[size5];
    int* asc_arr3_size5 = new int[size5];
    int* asc_arr4_size5 = new int[size5];
    createAscendingArrays(asc_arr1_size5, asc_arr2_size5, asc_arr3_size5, asc_arr4_size5, size5);
    int asc_compC15 = 0;
    int asc_moveC15 = 0;
    int asc_compC25 = 0;
    int asc_moveC25 = 0;
    int asc_compC35 = 0;
    int asc_moveC35 = 0;
    int asc_compC45 = 0;
    int asc_moveC45 = 0;
    // Size 6
    int* asc_arr1_size6 = new int[size6];
    int* asc_arr2_size6 = new int[size6];
    int* asc_arr3_size6 = new int[size6];
    int* asc_arr4_size6 = new int[size6];
    createAscendingArrays(asc_arr1_size6, asc_arr2_size6, asc_arr3_size6, asc_arr4_size6, size6);
    int asc_compC16 = 0;
    int asc_moveC16 = 0;
    int asc_compC26 = 0;
    int asc_moveC26 = 0;
    int asc_compC36 = 0;
    int asc_moveC36 = 0;
    int asc_compC46 = 0;
    int asc_moveC46 = 0;
    // Size 7
    int* asc_arr1_size7 = new int[size7];
    int* asc_arr2_size7 = new int[size7];
    int* asc_arr3_size7 = new int[size7];
    int* asc_arr4_size7 = new int[size7];
    createAscendingArrays(asc_arr1_size7, asc_arr2_size7, asc_arr3_size7, asc_arr4_size7, size7);
    int asc_compC17 = 0;
    int asc_moveC17 = 0;
    int asc_compC27 = 0;
    int asc_moveC27 = 0;
    int asc_compC37 = 0;
    int asc_moveC37 = 0;
    int asc_compC47 = 0;
    int asc_moveC47 = 0;

    // SELECTION SORT
    int asc_selectionDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of Selection Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    selectionSort(asc_arr1_size1, size1, asc_compC11, asc_moveC11);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[0] = duration;

    start = clock();
    selectionSort(asc_arr1_size2, size2, asc_compC12, asc_moveC12);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[1] = duration;

    start = clock();
    selectionSort(asc_arr1_size3, size3, asc_compC13, asc_moveC13);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[2] = duration;

    start = clock();
    selectionSort(asc_arr1_size4, size4, asc_compC14, asc_moveC14);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[3] = duration;

    start = clock();
    selectionSort(asc_arr1_size5, size5, asc_compC15, asc_moveC15);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[4] = duration;

    start = clock();
    selectionSort(asc_arr1_size6, size6, asc_compC16, asc_moveC16);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[5] = duration;

    start = clock();
    selectionSort(asc_arr1_size7, size7, asc_compC17, asc_moveC17);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_selectionDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size1, asc_selectionDuration[0], asc_compC11, asc_moveC11);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size2, asc_selectionDuration[1], asc_compC12, asc_moveC12);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size3, asc_selectionDuration[2], asc_compC13, asc_moveC13);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size4, asc_selectionDuration[3], asc_compC14, asc_moveC14);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size5, asc_selectionDuration[4], asc_compC15, asc_moveC15);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size6, asc_selectionDuration[5], asc_compC16, asc_moveC16);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size7, asc_selectionDuration[6], asc_compC17, asc_moveC17);
    cout<<endl;




    // mergeSort
    int asc_mergeDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of merge Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    mergeSort(asc_arr2_size1, size1, asc_compC21, asc_moveC21);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[0] = duration;

    start = clock();
    mergeSort(asc_arr2_size2, size2, asc_compC22, asc_moveC22);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[1] = duration;

    start = clock();
    mergeSort(asc_arr2_size3, size3, asc_compC23, asc_moveC23);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[2] = duration;

    start = clock();
    mergeSort(asc_arr2_size4, size4, asc_compC24, asc_moveC24);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[3] = duration;

    start = clock();
    mergeSort(asc_arr2_size5, size5, asc_compC25, asc_moveC25);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[4] = duration;

    start = clock();
    mergeSort(asc_arr2_size6, size6, asc_compC26, asc_moveC26);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[5] = duration;

    start = clock();
    mergeSort(asc_arr2_size7, size7, asc_compC27, asc_moveC27);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_mergeDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size1, asc_mergeDuration[0], asc_compC21, asc_moveC21);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size2, asc_mergeDuration[1], asc_compC22, asc_moveC22);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size3, asc_mergeDuration[2], asc_compC23, asc_moveC23);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size4, asc_mergeDuration[3], asc_compC24, asc_moveC24);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size5, asc_mergeDuration[4], asc_compC25, asc_moveC25);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size6, asc_mergeDuration[5], asc_compC26, asc_moveC26);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size7, asc_mergeDuration[6], asc_compC27, asc_moveC27);
    cout<<endl;

    // quick SORT
    int asc_quickDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of quick Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    quickSort(asc_arr3_size1, size1, asc_compC31, asc_moveC31);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[0] = duration;

    start = clock();
    quickSort(asc_arr3_size2, size2, asc_compC32, asc_moveC32);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[1] = duration;

    start = clock();
    quickSort(asc_arr3_size3, size3, asc_compC33, asc_moveC33);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[2] = duration;

    start = clock();
    quickSort(asc_arr3_size4, size4, asc_compC34, asc_moveC34);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[3] = duration;

    start = clock();
    quickSort(asc_arr3_size5, size5, asc_compC35, asc_moveC35);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[4] = duration;

    start = clock();
    quickSort(asc_arr3_size6, size6, asc_compC36, asc_moveC36);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[5] = duration;

    start = clock();
    quickSort(asc_arr3_size7, size7, asc_compC37, asc_moveC37);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_quickDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size1, asc_quickDuration[0], asc_compC31, asc_moveC31);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size2, asc_quickDuration[1], asc_compC32, asc_moveC32);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size3, asc_quickDuration[2], asc_compC33, asc_moveC33);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size4, asc_quickDuration[3], asc_compC34, asc_moveC34);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size5, asc_quickDuration[4], asc_compC35, asc_moveC35);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size6, asc_quickDuration[5], asc_compC36, asc_moveC36);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size7, asc_quickDuration[6], asc_compC37, asc_moveC37);
    cout<<endl;

    // radix SORT
    int asc_radixDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of radix Sort"<<endl;
    printf("%s %s", "Array Size\t", "Elapsed Time\t");
    cout<<endl;
    start = clock();
    radixSort(asc_arr4_size1, size1);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[0] = duration;

    start = clock();
    radixSort(asc_arr4_size2, size2);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[1] = duration;

    start = clock();
    radixSort(asc_arr4_size3, size3);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[2] = duration;

    start = clock();
    radixSort(asc_arr4_size4, size4);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[3] = duration;

    start = clock();
    radixSort(asc_arr4_size5, size5);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[4] = duration;

    start = clock();
    radixSort(asc_arr4_size6, size6);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[5] = duration;

    start = clock();
    radixSort(asc_arr4_size7, size7);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    asc_radixDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t", size1, asc_radixDuration[0]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size2, asc_radixDuration[1]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size3, asc_radixDuration[2]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size4, asc_radixDuration[3]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size5, asc_radixDuration[4]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size6, asc_radixDuration[5]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size7, asc_radixDuration[6]);
    cout<<endl;

    cout<<"-------------- RANDOMLY CREATED Descending ARRAYS ---------------"<<endl;
    // Size 1
    int* desc_arr1_size1 = new int[size1];
    int* desc_arr2_size1 = new int[size1];
    int* desc_arr3_size1 = new int[size1];
    int* desc_arr4_size1 = new int[size1];
    createDescendingArrays(desc_arr1_size1, desc_arr2_size1, desc_arr3_size1, desc_arr4_size1, size1);
    int desc_compC11 = 0;
    int desc_moveC11 = 0;
    int desc_compC21 = 0;
    int desc_moveC21 = 0;
    int desc_compC31 = 0;
    int desc_moveC31 = 0;
    int desc_compC41 = 0;
    int desc_moveC41 = 0;
    // Size 2
    int* desc_arr1_size2 = new int[size2];
    int* desc_arr2_size2 = new int[size2];
    int* desc_arr3_size2 = new int[size2];
    int* desc_arr4_size2 = new int[size2];
    createDescendingArrays(desc_arr1_size2, desc_arr2_size2, desc_arr3_size2, desc_arr4_size2, size2);
    int desc_compC12 = 0;
    int desc_moveC12 = 0;
    int desc_compC22 = 0;
    int desc_moveC22 = 0;
    int desc_compC32 = 0;
    int desc_moveC32 = 0;
    int desc_compC42 = 0;
    int desc_moveC42 = 0;
    // Size 3
    int* desc_arr1_size3 = new int[size3];
    int* desc_arr2_size3 = new int[size3];
    int* desc_arr3_size3 = new int[size3];
    int* desc_arr4_size3 = new int[size3];
    createDescendingArrays(desc_arr1_size3, desc_arr2_size3, desc_arr3_size3, desc_arr4_size3, size3);
    int desc_compC13 = 0;
    int desc_moveC13 = 0;
    int desc_compC23 = 0;
    int desc_moveC23 = 0;
    int desc_compC33 = 0;
    int desc_moveC33 = 0;
    int desc_compC43 = 0;
    int desc_moveC43 = 0;
    // Size 4
    int* desc_arr1_size4 = new int[size4];
    int* desc_arr2_size4 = new int[size4];
    int* desc_arr3_size4 = new int[size4];
    int* desc_arr4_size4 = new int[size4];
    createDescendingArrays(desc_arr1_size4, desc_arr2_size4, desc_arr3_size4, desc_arr4_size4, size4);
    int desc_compC14 = 0;
    int desc_moveC14 = 0;
    int desc_compC24 = 0;
    int desc_moveC24 = 0;
    int desc_compC34 = 0;
    int desc_moveC34 = 0;
    int desc_compC44 = 0;
    int desc_moveC44 = 0;
    // Size 5
    int* desc_arr1_size5 = new int[size5];
    int* desc_arr2_size5 = new int[size5];
    int* desc_arr3_size5 = new int[size5];
    int* desc_arr4_size5 = new int[size5];
    createDescendingArrays(desc_arr1_size5, desc_arr2_size5, desc_arr3_size5, desc_arr4_size5, size5);
    int desc_compC15 = 0;
    int desc_moveC15 = 0;
    int desc_compC25 = 0;
    int desc_moveC25 = 0;
    int desc_compC35 = 0;
    int desc_moveC35 = 0;
    int desc_compC45 = 0;
    int desc_moveC45 = 0;
    // Size 6
    int* desc_arr1_size6 = new int[size6];
    int* desc_arr2_size6 = new int[size6];
    int* desc_arr3_size6 = new int[size6];
    int* desc_arr4_size6 = new int[size6];
    createDescendingArrays(desc_arr1_size6, desc_arr2_size6, desc_arr3_size6, desc_arr4_size6, size6);
    int desc_compC16 = 0;
    int desc_moveC16 = 0;
    int desc_compC26 = 0;
    int desc_moveC26 = 0;
    int desc_compC36 = 0;
    int desc_moveC36 = 0;
    int desc_compC46 = 0;
    int desc_moveC46 = 0;
    // Size 7
    int* desc_arr1_size7 = new int[size7];
    int* desc_arr2_size7 = new int[size7];
    int* desc_arr3_size7 = new int[size7];
    int* desc_arr4_size7 = new int[size7];
    createDescendingArrays(desc_arr1_size7, desc_arr2_size7, desc_arr3_size7, desc_arr4_size7, size7);
    int desc_compC17 = 0;
    int desc_moveC17 = 0;
    int desc_compC27 = 0;
    int desc_moveC27 = 0;
    int desc_compC37 = 0;
    int desc_moveC37 = 0;
    int desc_compC47 = 0;
    int desc_moveC47 = 0;

    // SELECTION SORT
    int desc_selectionDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of Selection Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    selectionSort(desc_arr1_size1, size1, desc_compC11, desc_moveC11);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[0] = duration;

    start = clock();
    selectionSort(desc_arr1_size2, size2, desc_compC12, desc_moveC12);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[1] = duration;

    start = clock();
    selectionSort(desc_arr1_size3, size3, desc_compC13, desc_moveC13);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[2] = duration;

    start = clock();
    selectionSort(desc_arr1_size4, size4, desc_compC14, desc_moveC14);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[3] = duration;

    start = clock();
    selectionSort(desc_arr1_size5, size5, desc_compC15, desc_moveC15);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[4] = duration;

    start = clock();
    selectionSort(desc_arr1_size6, size6, desc_compC16, desc_moveC16);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[5] = duration;

    start = clock();
    selectionSort(desc_arr1_size7, size7, desc_compC17, desc_moveC17);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_selectionDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size1, desc_selectionDuration[0], desc_compC11, desc_moveC11);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size2, desc_selectionDuration[1], desc_compC12, desc_moveC12);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size3, desc_selectionDuration[2], desc_compC13, desc_moveC13);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size4, desc_selectionDuration[3], desc_compC14, desc_moveC14);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size5, desc_selectionDuration[4], desc_compC15, desc_moveC15);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size6, desc_selectionDuration[5], desc_compC16, desc_moveC16);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size7, desc_selectionDuration[6], desc_compC17, desc_moveC17);
    cout<<endl;




    // mergeSort
    int desc_mergeDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of merge Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    mergeSort(desc_arr2_size1, size1, desc_compC21, desc_moveC21);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[0] = duration;

    start = clock();
    mergeSort(desc_arr2_size2, size2, desc_compC22, desc_moveC22);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[1] = duration;

    start = clock();
    mergeSort(desc_arr2_size3, size3, desc_compC23, desc_moveC23);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[2] = duration;

    start = clock();
    mergeSort(desc_arr2_size4, size4, desc_compC24, desc_moveC24);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[3] = duration;

    start = clock();
    mergeSort(desc_arr2_size5, size5, desc_compC25, desc_moveC25);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[4] = duration;

    start = clock();
    mergeSort(desc_arr2_size6, size6, desc_compC26, desc_moveC26);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[5] = duration;

    start = clock();
    mergeSort(desc_arr2_size7, size7, desc_compC27, desc_moveC27);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_mergeDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size1, desc_mergeDuration[0], desc_compC21, desc_moveC21);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size2, desc_mergeDuration[1], desc_compC22, desc_moveC22);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size3, desc_mergeDuration[2], desc_compC23, desc_moveC23);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size4, desc_mergeDuration[3], desc_compC24, desc_moveC24);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size5, desc_mergeDuration[4], desc_compC25, desc_moveC25);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size6, desc_mergeDuration[5], desc_compC26, desc_moveC26);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t\t %d\t", size7, desc_mergeDuration[6], desc_compC27, desc_moveC27);
    cout<<endl;

    // quick SORT
    int desc_quickDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of quick Sort"<<endl;
    printf("%s %s %s %s", "Array Size\t", "Elapsed Time\t", "Comp Count\t", "Move Count\t");
    cout<<endl;
    start = clock();
    quickSort(desc_arr3_size1, size1, desc_compC31, desc_moveC31);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[0] = duration;

    start = clock();
    quickSort(desc_arr3_size2, size2, desc_compC32, desc_moveC32);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[1] = duration;

    start = clock();
    quickSort(desc_arr3_size3, size3, desc_compC33, desc_moveC33);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[2] = duration;

    start = clock();
    quickSort(desc_arr3_size4, size4, desc_compC34, desc_moveC34);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[3] = duration;

    start = clock();
    quickSort(desc_arr3_size5, size5, desc_compC35, desc_moveC35);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[4] = duration;

    start = clock();
    quickSort(desc_arr3_size6, size6, desc_compC36, desc_moveC36);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[5] = duration;

    start = clock();
    quickSort(desc_arr3_size7, size7, desc_compC37, desc_moveC37);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_quickDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size1, desc_quickDuration[0], desc_compC31, desc_moveC31);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size2, desc_quickDuration[1], desc_compC32, desc_moveC32);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size3, desc_quickDuration[2], desc_compC33, desc_moveC33);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size4, desc_quickDuration[3], desc_compC34, desc_moveC34);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size5, desc_quickDuration[4], desc_compC35, desc_moveC35);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size6, desc_quickDuration[5], desc_compC36, desc_moveC36);
    cout<<endl;
    printf("%d\t\t %d ms\t\t %d\t %d\t", size7, desc_quickDuration[6], desc_compC37, desc_moveC37);
    cout<<endl;

    // radix SORT
    int desc_radixDuration[7];
    cout<<"-----------------------------------"<<endl;
    cout<<"Analysis of radix Sort"<<endl;
    printf("%s %s", "Array Size\t", "Elapsed Time\t");
    cout<<endl;
    start = clock();
    radixSort(desc_arr4_size1, size1);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[0] = duration;

    start = clock();
    radixSort(desc_arr4_size2, size2);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[1] = duration;

    start = clock();
    radixSort(desc_arr4_size3, size3);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[2] = duration;

    start = clock();
    radixSort(desc_arr4_size4, size4);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[3] = duration;

    start = clock();
    radixSort(desc_arr4_size5, size5);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[4] = duration;

    start = clock();
    radixSort(desc_arr4_size6, size6);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[5] = duration;

    start = clock();
    radixSort(desc_arr4_size7, size7);
    duration = 1000.0 * (clock() - start) / CLOCKS_PER_SEC;
    desc_radixDuration[6] = duration;

    cout<<endl;
    printf("%d\t\t %d ms\t\t", size1, desc_radixDuration[0]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size2, desc_radixDuration[1]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size3, desc_radixDuration[2]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size4, desc_radixDuration[3]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size5, desc_radixDuration[4]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size6, desc_radixDuration[5]);
    cout<<endl;
    printf("%d\t\t %d ms\t\t", size7, desc_radixDuration[6]);
    cout<<endl;
}
