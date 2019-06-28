/*MAXIMUM SUBARRAY SUM
You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

Input Format:
The first line consists of number of test cases T. Each test case consists of N followed by N integers.

Constraints:
1 <= N <= 100000

1 <= t <= 20

 -100000000 <= A[i] <= 100000000

Output Format
The maximum subarray sum

Sample Input
2
4
1 2 3 4
3
-10 5 10
Sample Output
10
15
*/

/*A simple solution is to iterate through all the elements of the array. For every element, calculate the max contiguous subarray sum starting from that element itself.

Time complexity: O(n2).
An efficient way is to use Kadane’s Algorithm. Kadane’s algorithm is a Dynamic Programming approach to find the largest sum of contiguous subarray with runtime of O(n).Simple idea of the Kadane’s algorithm is to look for all positive contiguous segments of the array . And keep track of maximum sum contiguous segment among all positive segments .

Algo:

1.Take two variables one for storing local max sum(max-ending-here) and global max sum(max-so-far).
2.Iterate over each each element of the array say a.

  2.1 max_ending_here = max_ending_here + a[i]
  2.2 if(max_ending_here < 0)   
        max_ending_here = 0
  2.3 if(max_so_far < max_ending_here)
        max_so_far = max_ending_here
3.max-so-far is the required max sum of contiguous subarray.
*/



// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max_sum = maxSubArraySum(a, n);
    cout << max_sum<<endl;
    }
    return 0;
}
