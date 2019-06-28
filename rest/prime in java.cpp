/*CHECK PRIME
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format:
Constraints:
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
*/


public static boolean isPrime(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

