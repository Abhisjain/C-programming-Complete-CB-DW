/*

STRINGS-DIFFERENCE IN ASCII CODES
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format:
String

Constraints:
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b


*/
/*
All we need to do is just traverse the whole string and for every two adjacent characters just calculate the ascii among them. We will print the characters and the difference between with characters

*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[1000];
    int nstr[2000];
    cin>>str;
    int i=1;
    cout<<str[0];
    while(str[i]!='\0'){
        nstr[i]=int(str[i])-int(str[i-1]);
        cout<<nstr[i]<<str[i];
        i++;
    }
    return 0;
}