/*
PATTERN MOUNTAIN
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format:
Constraints:
0 < N < 10

Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1

*/
import java.util.Scanner;

public class patternMountain {

    public static void main(String[] args) {

        Scanner scn=new Scanner(System.in);

        int n=scn.nextInt();

        int nsp=2*n-3;     //initializing number of spaces
        int nst=1;         //initializing number of numbers

        for(int i=1;i<=n;i++)
        {
            int num=1;
            //work for numbers
            for(int cst=1;cst<=nst;cst++)
            {
                if(cst!=n)
                System.out.print(num+"\t");

                num++;
            }

            //work for spaces
            for(int csp=1;csp<=nsp;csp++)
            {
                System.out.print(" \t");
            }

            //work for numbers
            for(int cst=num-1;cst>=1;cst--)
            {
                System.out.print(cst+"\t");
            }

            //preparation for next iteration

            nsp=nsp-2;
            nst++;
            System.out.println();
        }
    }

}


