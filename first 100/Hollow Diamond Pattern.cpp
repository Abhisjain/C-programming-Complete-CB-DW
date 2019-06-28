/*Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int  nst=n/2;     //initialize number of stars

    int nsp=0;       //initialize number of spaces 
    int nsta=n/2;   //initialize number of stars after spaces

     //Outer loop to handle number of rows
    for(int i=1;i<=n;i++)
    {
        //work for stars
        for(int cst=0;cst<=nst;cst++)
        {
            cout<<"*\t";
        }

        //work for spaces


        for(int csp=1;csp<nsp;csp++)
        {
            cout<<" \t";

        }

        //work for stars

        for(int cst=1;cst<=nsta;cst++)
        {
            cout<<"*\t";
        }

        //preparation for next iteration
        if(i>1 && i<=n/2)
            nsta=nsta-1;
        if(i>n/2 &&i<n-1)
            nsta=nsta+1;



        if(i<=n/2)
        {
            nst=nst-1;
            nsp=nsp+2;
        }
        else
        {
            nst=nst+1;
            nsp=nsp-2;
        }
cout<<"\n";
        
    }
}
/*

import java.util.Scanner;

public class pattern8 {

public static void main(String[] args) {

    Scanner scn=new Scanner(System.in);

    int n=scn.nextInt();

    int  nst=n/2;     //initialize number of stars

    int nsp=0;       //initialize number of spaces 
    int nsta=n/2;   //initialize number of stars after spaces

     //Outer loop to handle number of rows
    for(int i=1;i<=n;i++)
    {
        //work for stars
        for(int cst=0;cst<=nst;cst++)
        {
            System.out.print("*\t");
        }

        //work for spaces


        for(int csp=1;csp<nsp;csp++)
        {
            System.out.print(" \t");

        }

        //work for stars

        for(int cst=1;cst<=nsta;cst++)
        {
            System.out.print("*\t");
        }

        //preparation for next iteration
        if(i>1 && i<=n/2)
            nsta=nsta-1;
        if(i>n/2 &&i<n-1)
            nsta=nsta+1;



        if(i<=n/2)
        {
            nst=nst-1;
            nsp=nsp+2;
        }
        else
        {
            nst=nst+1;
            nsp=nsp-2;
        }

        System.out.println();
    }
}
}*/
