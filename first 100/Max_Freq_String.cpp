/*
STRINGS-MAX FREQUENCY CHARACTER
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
*/


#include <iostream>
using namespace std;
int main() {
    char str[1000];
    int freq[256];
    cin>>str;

    for(int x=0;str[x]!='\0';x++){
        freq[str[x]]++;
    }
    int ans=0;
    char ch;
    for(int x=0;x<256;x++){
        if(freq[x]>0){
            if(freq[x]>ans){
                ans=freq[x];
                ch=char(x);
            }
        }
    }
    cout<<ch;
}