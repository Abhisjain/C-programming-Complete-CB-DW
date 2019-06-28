/*
STARS - 2
Take as input N, a number. Print the pattern as given in the input and output section.

Input Format:
Enter value of N

Constraints:
Output Format
Print the pattern.

Sample Input
7
Sample Output
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567


*/
#include <iostream>
using namespace std;
int main ()
{
    int i, j, n;
    cin >> n;
    //loop for each row
    for (i = 1; i <= n; i++)
    {
       // work for numbers
        for (j = 1; j <= i; j++)
            cout << j;

       // work for stars
        for (j = 1; j <= n - i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
