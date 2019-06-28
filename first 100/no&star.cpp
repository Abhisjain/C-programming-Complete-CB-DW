/*

NUMBERS & STARS - 1
Take as input N, a number. Print the pattern as given in output section for corresponding input.

Input Format:
Enter value of N

Constraints:
Output Format
All numbers and stars are Space separated

Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *


Pattern Numbers & Stars - 1
X
Given pattern is seen as first numbers and then stars for a row. So, first do the work for numbers and then for stars. Also, all the characters are separated by a space.

*/
#include <iostream>
using namespace std;
int main ()
{
    int i, j, n;
    cin >> n;

    // loop for each row
    for (i = 1; i <= n; i++)
    {
       // work for numbers 
        for (j = 1; j <= n+1-i; j++)
            cout << j << " ";

       // work for stars
        for (j = 1; j <= 2*(i-1) - 1; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}


