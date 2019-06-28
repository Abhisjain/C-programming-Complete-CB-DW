/*PIYUSH AND MAGICAL PARK
Piyush is lost in a magical park which contains N rows and M columns.In order to get out of park safely and return home, he needs atleast K amount of strength.Given a N by M pattern, your task is to find weather Piyush can ever escape the park.

The pattern consisits of '.' , * and '#'.Intially the strength is S and if Piyush encounters * , strength increases by 5.If he encounters '.', strength decreases by 2.Please note that Piyush can only walk row wise, so he starts from left of a row and moves towards right and he does this for every row. If he encounters '#', this means that the row is blcked and he cannot move forward. Also while moving in a row, Piyush requires strength of 1 for every step and strength should always be positive for moving forward.

Assume that Piyush can shift immediately from last of one row to the start of next one without loss of any strength, help out Piyush to escape the park.

Input Format:
Four space separated integers N, M, K and S all lie between 0 and 100. Next N lines contains M space separated characters which can be '.', '*' or '#'.

Constraints:
All numbers are positive and <= 100.

Output Format
Print "Yes" or "No" depending on whether Piyush can escape or not. If the answer is "Yes", also print the maximum strength that he can gather in the park in a new line.

Sample Input
4 4 5 20
. . * .
. # . .
* * . .
. # * *
Sample Output
Yes
13

*/
/*
Some Points to ponder before discussing the Solution :

Start from the 0-0 index of the 2 - D matrix( No step would be count hence, strength remain intact).
Changing row won't take any strength.
If at any time, the Strength become smaller than K ( threshold for piyush), then no need to traverse rest of the array, you can say no nothing else.
Algorithm

Take input N, M, K, S.
Take input 2 - D matrix of size N x M.
Put a loop on the array starting from 0 - 0 index to (N - 1) - (M - 1).
check if the Strength is lower than the threshold viz, K, print "No" and return.
otherwise,
if character is '*', add 5 to the strength.
else if, character is '.' , subtract 2 from the strength.
else, if character is '#', break.
If you are not in the last column, decrement strength by 1.
After the loop, print 'Yes' and strength separated by a new line.
Hint Video


// Implementation for piyush and magical park
package Extras;

import java.util.Scanner;

public class help_piyush {

    public static void main(String[] args) {
        // TODO Auto-generated method stub

        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int m = scn.nextInt();

        int k = scn.nextInt();
        int s = scn.nextInt();

        char[][] arr = new char[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = scn.next().charAt(0);
            }
        }
        maze(arr, k, s);
    }

    public static void maze(char[][] arr, int k, int s) {

        boolean flag = false;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {

                char ch = arr[i][j];

                if (s < k) {
                    flag = true;
                    break;
                }

                if (ch == '*') {
                    s += 5;
                } else if (ch == '.') {
                    s -= 2;
                } else {
                    break;
                }
                if (j != arr[0].length - 1)
                    s--;

            }
        }

        if (!flag) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        System.out.println(s);

    }

}

} 

 
*/