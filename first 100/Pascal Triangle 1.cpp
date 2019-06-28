/*
PASCAL TRIANGLE 1
Given an integer N, print Pascal Triangle upto N rows. 

Input Format:
Single integer N.

Constraints:
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
           1
         1   1
       1   2   1
     1   3   3   1


Pascal's triangle is the triangular array of the binomial coefficients.The number of entries in a given line is equal to the line number.Every entry in the line is the value of a binomial coefficient. The value of ith entry in the number line is C(line,i)(i.e apply mathematical combination formula ). 
Where C(line,i)=line!/((line-i)!*i!).

Given pattern can be seen as first spaces then numbers and can be formed using 3 approches:
1.A simple method is to run two loops and calculate the value of binomial coefficient in inner loop. Complexity: O(N3).
2.O(N2) time and O(n2) space complexity.In this method store the previously generated values in 2-D array. Use these values to generate value in a line.
3.O(N2) time and O(1) space complexity. In this method calculate C(line,i) using C(line,i-1). It can be calculated in O(1) time as follows:

 C(line,i-1)=line!/((line-i+1)!*(i-1)!)
 C(line,i)=line!/((line-i)!*i!)
 C(line,i)=C(line,i-1)*(line-i+1)/i.
*/


#include<iostream>
using namespace std;

int main(){

        int n,i,j;
        cin>>n;
      //work for each row
        for(i=1;i<=n;i++){
            int num=1;   //starting number

            //work for spaces
            for(int spaces =1;spaces<=(n-i+1);spaces++)
                 cout<<" ";

            for(j=1;j<=i;j++){
                if(j==1)
                    cout<<j<<" ";
                else
                {
                    num=num*(i-j+1)/(j-1);      // updating number
                    cout<<num<<" ";
                }
            }
            cout<<"\n";
        }
    }
