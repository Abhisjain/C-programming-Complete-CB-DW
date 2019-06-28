/*
ARRAYS-INSERTION SORT
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that insertion sorts the array. Print the elements of sorted array.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
3
4
2
1
Sample Output
1
2
3
4

*/

#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
/* Function to sort an array using insertion sort*/
void insertionSort(long long int arr[], long long int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
    key = arr[i];
    j = i-1;

    /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
    while (j >= 0 && arr[j] > key)
    {
        arr[j+1] = arr[j];
        j = j-1;
    }
    arr[j+1] = key;
}
}

// A utility function to print an array of size n
void printArray(long long int arr[],long long int n)
{
int i;
for (i=0; i < n; i++)
    printf("%d ", arr[i]);
printf("\n");
}



/* Driver program to test insertion sort */
int main()
{

    long long int n;
    cin>>n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
