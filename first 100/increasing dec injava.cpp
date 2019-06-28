/*
INCREASING DECREASING SEQUENCE
Take the following as input.

A number (N)
Take N more numerical inputs
The N inputs for a sequence S = s1, s2, .., sN. Compute if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format:
Constraints:
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true



About the input, you need not to take array, one can also perform the question without using array. As every time we just check two consecutive numbers to tell whether the seqeunce is increasing or decreasing, so why should we store all of the numbers.

A sequence is true if you can split it into two sub sequence such that first sequence is strictly increasing and second sequence is strictly decreasing.
For e.g.,
1 2 3 4 5
This sequence is also true as we can split it into two sequence like., sequence one is empty and sequence two is 1 2 3 4 5.
Let's take another example.,
5 4 3 2 1
This is also true as we can split it such that sequence one is5 4 3 2 1 and sequence two is empty.
According to the problem statement, we can say the if the sequence decreases then it should not increase, if this is the case one can directly print false else print true.

*/
public static boolean valid_invalid(int n){

    int prev = scn.nextInt();
    int cnt = 1;
    boolean goingUp = false;
    boolean isValid = true;

    while(cnt < n){

        int curr = scn.nextInt();

        int diff = curr - prev;

        if(diff == 0){  // As the sequence must be strctly decreasing or increasing
            isValid = false;
        }else if(diff > 0){  // If Sequence is increasing 
            goingUp = true;
        }else if(goingUp && diff < 0){ // If Sequence is Decreasing if its already increased once
            isValid = false;
        }

        prev = curr;
        cnt++;

    }

    return isValid;
