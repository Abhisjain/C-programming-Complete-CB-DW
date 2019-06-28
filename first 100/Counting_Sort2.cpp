/*
COUNTING SORT
You are given an array, A. Sort this array using counting sort algorithm.

Input Format:
First line contains a single integer, n, denoting the size of the array. Next line contains n integers, denoting the elements of the array.

Constraints:
1<=N<=10^6 0<=Ai<=10^6

Output Format
Print the array in sorted order.

Sample Input
5
1 3 2 6 5
Sample Output
1 2 3 5 6


*/
#include<iostream>
int main() {
    int n;
    cin >> n;

    int a[n];
    int maxNum=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]>maxNum){
            maxNum=a[i];
        }
    }

    int freq[maxNum+1] = {0};
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    int sortedA[n];
    for (int i = 0; i < maxNum+1; i++) {
        if(freq[i]!=0){
            while(freq[i]--){
                cout << i<<" ";
            }
        }
    }
    return 0;
}
