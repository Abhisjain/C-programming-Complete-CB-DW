/*Algorithm

Take input of number.
Calculate the number od digits of the number in a variable say , cnt.
Exract digit one by one from the number(using % 10).
Raised it to the power of number of digits and add it to sum.
After the loop check if the sum is equal to the original number.
If yes, print true
otherwise, print false.


IS ARMSTRONG NUMBER
Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where armstrong number is defined as follows

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
Print the value returned.

Input Format:
Integer

Constraints:
0 < N < 1000000000

Output Format
Boolean

Sample Input
371
Sample Output
true



*/
public static void printAllArmstrongs(int ll,int ul){

   for(int i=ll;i<=ul;i++) {

       int digits=numberOfDigits(i);
       boolean ans=isArmstrong(i,digits);
       if(ans)
           System.out.println(i);
   }
}

public static boolean isArmstrong(int num,int nod){

    int sum=0;

    int temp=num;

    while(num!=0){

        int rem=num%10;

        int p=1;
        for(int i=1;i<=nod;i++)
            p=p*rem;
        sum+=p;

        num/=10;
    }
    if(sum==temp)
        return true;
    else
        return false;
}

public static int numberOfDigits(int num){

    int count=0;
    while(num!=0){
      num=num/10;
      count++;

    }
    return count;
}

