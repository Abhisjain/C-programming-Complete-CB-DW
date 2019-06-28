
#include<iostream>
using namespace std;

int main(){

        int n ;
        cin>>n;
        

        int nst = n;            //initializing number of stars
        int nsp = n - 1;       // initializing number of spaces
        for (int i = 1; i <= n; i++) {

            // work for spaces
            for (int csp = 1; csp <= nsp; csp++) {
               cout<<" ";
            }

            // work for stars

            for (int cst = 1; cst <= nst; cst++) {
             cout<<"*";
            }

            if (i > 1 && i < n) {
                for (int csp = 1; csp <= n - 2; csp++) {
                   cout<<" ";
                }
               cout<<"*";
            }

            // preparation for next iteration

            if (i >= 1 && i < n - 1) {
                nst = 1;    // taking number of stars as 1 for in between rows

            } else {

                nst = n;     //taking number of stars as n for last row
            }
            nsp = nsp - 1;
            cout<<"\n";
        }

    }


/*
HOLLOW RHOMBUS PATTERN
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format:
Single integer N.

Constraints:
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
*/
