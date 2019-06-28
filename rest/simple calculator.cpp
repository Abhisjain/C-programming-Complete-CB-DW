#include<iostream>
using namespace std;
 void operation(char ch) {
    int a ; // Use cin in case of c++
    int b;
	cin>>a>>b; // Use cin in case of c++
    int res = 0;
    switch (ch) {
    case '+': {
        res = a + b;

        break;
    }
    case '-': {
        res = a - b;

        break;
    }
    case '*': {
        res = a * b;

        break;
    }
    case '/': {
        res = a / b;
        break;
    }
    case '%': {
        res = a % b;
        break;
    }
    }
   cout<<res;

}

int main(){
   {

    char ch;
    do {

        cin>>ch;  // Use cin in case of c++
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {

            operation(ch);

        } else {
            if (ch != 'x' && ch != 'X')
               cout<<"Invalid operation. Try again.";
        }

    } while (ch != 'x' && ch != 'X');
}
}



/*
Write a program that works as a simple calculator.

1.It reads a character (ch)
2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number. 3.If ch is 'X' or 'x', the program terminates.
4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).

Write code to achieve above functionality.

Input Format:
Constraints:
Numbers should be greater than 0 and lesser than 100000000. For division and modulus, 2nd number should not be 0.

Output Format
Sample Input
* 
1 
2 
/ 
4 
2 
+ 
3 
2 
; 
X
Sample Output
2 
2 
5 
Invalid operation. Try again.

C++
  Download Testcases



*/
