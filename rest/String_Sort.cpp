/*
STRING SORT
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

Input Format:
N(integer) followed by N strings.

Constraints:
N<=1000

Output Format
N lines each containing one string.

Sample Input
3
bat
apple
batman
Sample Output
apple
batman
bat
*/
#include<iostream>
#include <string.h>
using namespace std;
int main() {
   int n;
   cin >> n;
   char str[n][20];
   int i, j, k;
   for (i = 0; i < n; i++)
       cin >> str[i];

   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n; j++)
       {
           if (str[i][0] < str[j][0])
           {
               char s[20];
               strcpy (s, str[i]);
               strcpy (str[i], str[j]);
               strcpy (str[j], s);
           }
       }
   }
   for (i = 1; i < n; i++)
   {
       if (str[i][0]==str[i+1][0])
       {
           int len1, len2;
           len1 = strlen(str[i]);
           len2 = strlen(str[i+1]);
           if (len1 < len2)
           {
               char s[20];
               strcpy (s, str[i]);
               strcpy (str[i], str[i+1]);
               strcpy (str[i+1], s);
           }
       }
   }

   for (i = 0; i < n; i++)
       cout << str[i] << endl;

    return 0;
}
