#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main(){
    ll x;

    while( cin >> x){
        if(x < 3){ printf("-1\n");  continue; }

        if(x & 1)  printf("%lld %lld", (x*x-1)/2, (x*x+1)/2);
        else{

            printf("%lld %lld", ((x*x)/4)-1, ((x*x)/4)+1);//learn imp
        }
    }
    return 0;
}
/*Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format:
A single integer N

Constraints:
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5
*/
