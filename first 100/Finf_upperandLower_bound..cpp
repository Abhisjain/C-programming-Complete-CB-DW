/*
FIND UPPER AND LOWER BOUND
Find position of the last and first occurrence of a given number in a sorted array. If number not exist then print lower and upper bound as -1.

Input Format:
An integer n denoting the size of the array followed by n integers denoting array elements Followed by T testcases Each testcase contains integer x (whose positions are to be found)

Constraints:
Output Format
Lower bound position followed by upper bound position separates by space in each line

Sample Input
5
1 2 3 3 4
3
2
3
10
Sample Output
1 1
2 3
-1 -1
*/


#include<iostream>
using namespace std;


int findLowerBound(int num, int a[],int n){
    int lowerBound = -1;

    int s=0;
    int e=n;

    while(s<=e){
      int mid = (s+e)/2;
      if(a[mid]==num){
          lowerBound=mid;
          e=mid-1;
      }else if(a[mid]>num){
          e=mid-1;
      }else{
          s=mid+1;
      }
    }

    return lowerBound;
}

int findUpperBound(int num, int a[],int n){
    int upperBound =-1;

    int s=0;
    int e=n;

    while(s<=e){
      int mid = (s+e)/2;
      if(a[mid]==num){
          upperBound=mid;
          s=mid+1;
      }else if(a[mid]>num){
          e=mid-1;
      }else{
          s=mid+1;
      }
    }

    return upperBound;
}


int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int t;
    cin >> t;

    while(t--){
        int num;
        cin >> num;

        int lowerBound = findLowerBound(num,a,n);
        int upperBound = findUpperBound(num,a,n);

        cout << lowerBound<<" "<<upperBound <<endl;
    }
    return 0;
}
