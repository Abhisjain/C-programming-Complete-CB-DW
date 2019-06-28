/*
PAINTER PROBLEM
You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board. Return the ans % 10000003

Input Format:
1<=N<=100000 1<=K<=100000 1<=T<=1000000 1<=Li<=100000

Constraints:
1<=N<=100000 1<=K<=100000 1<=T<=1000000 1<=Li<=100000

Output Format
Return minimum time required to paint all boards % 10000003.

Sample Input
2
2          
5
1 10
Sample Output
50

*/
/*
Hints:
The lowest possible value for costmax must be the maximum element in A(mark it as lo)
The highest possible value for costmax must be the entre sum of Ai(name this as hi)
As costmax increases X decreases. The opposite also holds true.

int getMax(int arr[], int n) 
{ 
    int max = INT_MIN; 
    for (int i = 0; i < n; i++)  
        if (arr[i] > max) 
            max = arr[i];  
    return max; 
} 
int getSum(int arr[], int n) 
{ 
    int total = 0; 
    for (int i = 0; i < n; i++) 
        total += arr[i]; 
    return total; 
}  
int numberOfPainters(int arr[], int n, int maxLen) 
{ 
    int total = 0, numPainters = 1; 

    for (int i = 0; i < n; i++) { 
        total += arr[i]; 

        if (total > maxLen) { 

            // for next count 
            total = arr[i]; 
            numPainters++; 
        } 
    } 

    return numPainters; 
} 

int partition(int arr[], int n, int k) 
{ 
    int lo = getMax(arr, n); 
    int hi = getSum(arr, n); 

    while (lo < hi) { 
        int mid = lo + (hi - lo) / 2; 
        int requiredPainters = numberOfPainters(arr, n, mid); 

        if (requiredPainters <= k) 
            hi = mid; 


        else
            lo = mid + 1; 
    } 

    return lo; 
} 
*/
