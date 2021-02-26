/*
* Title: Sorting and Algorithm Efficiency
* Author: Ant Duru
* ID: 21704108
* Section: 2
* Assignment: 1
* Description: function implementations for creating different types of arrays
and sorting algorithms
*/


#include "sorting.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;



int indexOfLargest(const int arr[], int size, int& compCount, int& moveCount)
{
    int indexSoFar = 0;
    for (int currentIndex=1; currentIndex < size; ++currentIndex)
    {
        if (arr[currentIndex] > arr[indexSoFar])
        {
            indexSoFar = currentIndex;
            moveCount++;
        }
        compCount++;
    }
    return indexSoFar;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort( int *arr, const int size, int &compCount, int &moveCount)
{
    for (int last = size - 1; last >= 1; --last)
    {
        int largest = indexOfLargest(arr, last+1, compCount, moveCount);
        moveCount++;
        swap(arr[largest], arr[last]);
        moveCount += 3;
    }
}

void mergeSort(int* arr, int size, int& compCount, int &moveCount)
{
    if (size <= 1)
        return;

    int lsize = size / 2;
    int rsize = size - lsize;
    int* larray = arr;
    int* rarray = arr + lsize;

    mergeSort(larray, lsize, compCount, moveCount);
    mergeSort(rarray, rsize, compCount, moveCount);

    int temp[size];
    int pl = 0;
    int pr = 0;

    while (pl < lsize && pr < rsize)
    {
        if (larray[pl] < rarray[pr])
        {
            temp[pl + pr] = larray[pl];
            moveCount++;
            pl++;
        }
        else
        {
            temp[pl + pr] = rarray[pr];
            moveCount++;
            pr++;
        }
        compCount++;
    }

    while (pr < rsize)
    {
        compCount++;
        temp[pl + pr] = rarray[pr];
        moveCount++;
        pr++;
    }

    while (pl < lsize)
    {
        compCount++;
        temp[pl + pr] = larray[pl];
        moveCount++;
        pl++;
    }

    for (int i = 0; i < size; i++)
        arr[i] = temp[i];
    moveCount++;
}

void quickSort(int *arr, int size, int &compCount, int &moveCount)
{
    int pivot = 0; // first element
    int last = size - 1;
    int temp;
    if(size < 2)
        return;
    compCount++;
    while(pivot < last)
    {
        compCount++;
        if(arr[pivot + 1] <= arr[pivot])
        {
            compCount++;
            temp = arr[pivot + 1];
            moveCount++;
            arr[pivot + 1] = arr[pivot];
            moveCount++;
            arr[pivot] = temp;
            moveCount++;
            pivot++;
        }
        else
        {
            //swap with last
            compCount++;
            temp = arr[pivot + 1];
            moveCount++;
            arr[pivot + 1] = arr[last];
            moveCount++;
            arr[last] = temp;
            moveCount++;
            last--;
        }
    }
    quickSort(arr, pivot, compCount, moveCount);
    quickSort(arr + pivot + 1, size - pivot - 1, compCount, moveCount);
}

int getMax(int* arr, const int size)
{
    int maxValue = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > maxValue)
            maxValue = arr[i];
    return maxValue;

}

void helper(int* arr, const int size, int h)
{
    const int v = 10;
    int rArr[size];
    int counting[v];

    for(int i = 0; i < v; ++i)
        counting[i] = 0;

    for(int i = 0; i < size;i++)
    {
        counting[(arr[i] / h) % 10]++;
    }

    for(int i = 1; i < v; i++)
    {
        counting[i] += counting[i-1];
    }

    for(int j = size - 1; j >= 0; j--)
    {
        rArr[counting[(arr[j] / h) % 10] - 1] = arr[j];
        counting[(arr[j] / h) % 10]--;
    }

    for(int i = 0; i < size; i++)
        arr[i] = rArr[i];

}

void radixSort(int *arr, const int size)
{

    int maxValue = getMax(arr, size);
    for(int j = 1; maxValue / j > 0; j*=10)
    {
        helper(arr, size, j);
    }

}

void displayArray(const int *arr, const int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i < size - 1)
            cout<< arr[i] <<",";
        else
            cout<< arr[i];
    }
    cout<<endl;
}

void createRandomArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size)
{
    for(int i = 0; i < size; i++)
    {
        int rand1 = (int)rand() % (size * 100);
        arr1[i] = rand1;
        arr2[i] = rand1;
        arr3[i] = rand1;
        arr4[i] = rand1;
    }
}

void createAscendingArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size)
{
    int rand1 = (int)rand() % (size * 3);
    arr1[0] = rand1;
    arr2[0] = rand1;
    arr3[0] = rand1;
    arr4[0] = rand1;
    for(int i = 1; i < size; i++)
    {
        if( i%2 == 0 )
            rand1 += 5;
        else
            rand1 += 3;
        arr1[i] = rand1;
        arr2[i] = rand1;
        arr3[i] = rand1;
        arr4[i] = rand1;
    }
}

void createDescendingArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size)  //fix
{
    createAscendingArrays(arr1, arr2, arr3, arr4, size);
    int i = 0;
    int* temp = new int[size];
    for(int j = size - 1; j <= 0; j--)
    {
        temp[i] = arr1[j];
        i++;
    }
    for(int i = 0; i < size; i++)
    {
        arr1[i] = temp[i];
    }
    delete temp;
}

void printElements(int compCount, int moveCount)
{
    cout<<"Comp Count: "<< compCount<< "    Move Count: "<< moveCount<<endl;
}
