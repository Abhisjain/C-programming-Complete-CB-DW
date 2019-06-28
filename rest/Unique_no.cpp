/*
UNIQUE NUMBER - I
We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )

Input Format:
First line contains the number n. Second line contains n space separated number.

Constraints:
n < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 2 2 3 3 4
Sample Output//
4


*/

//Use property of xor function to solve this problem. Required Code is given below :


#include<iostream>
int main() {
    int t;
    cin >> t;

    int result = 0;
    while(t--){
        int n;
        cin >> n;
        result^=n;//imp to remember xor for 2 nos 
    }
    cout << result << endl;
    return 0;
}
