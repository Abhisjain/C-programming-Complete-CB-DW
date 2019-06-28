#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    // loop for each row
    for (i = 1; i<= n; i++)
    {
      // for odd number of row and 2nd row print 1
        if (i%2 != 0 || i == 2)
            {
                for (j = 1; j<= i; j++)
                cout << "1";
                cout << endl;
            }
        else if (i%2 == 0 && i != 2)
            {
                 // for even number of row except 2nd row
                for (k = 1; k<= i; k++)
                {
                    if (k == 1 || k == i)
                        cout << "1";       // print 1 at first and last position
                    else
                        cout << "0";       // print 0 at in between positions
                }
                cout << endl;
            }

    }
    return 0;
}

/*
MANMOHAN LOVES PATTERNS - I
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111

100001

Input Format:
Single number N.

Constraints:
N<=1000

Output Format
Pattern corresponding to N.

Sample Input
6
Sample Output
1 
11
111 
1001 
11111
100001


*/
