/*
SANKET AND STRINGS
Sanket has a string consisting of only 'a' and 'b' as the characters. Sanket describes perfectness of a string as the maximum length substring of equal characters. Sanket is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.

Input Format:
The first line contains an integer denoting the value of K. The next line contains a string having only ‘a’ and ‘b’ as the characters.

Constraints:
2 ≤ N ≤ 10^5

Output Format
A single integer denoting the maximum perfectness achievable.

Sample Input
2
abba
Sample Output
4

*/
/*
This problem can be solved with help of two pointers. Let the first pointer is l and the second pointer is r. Then for every position l we will move right end r until on the substring si.si + 1… sr it is possible to make no more than k swaps to make this substring beautiful. Then we need to update the answer with length of this substring and move l to the right.

import java.util.Scanner;

public class SanketAndString {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner scn = new Scanner(System.in);
        int k=scn.nextInt();
        String str = scn.next();
        int left=0, ans=0;
        int[] count = {0,0};
        for (char c: str.toCharArray()) {
            count[c-'a']++;
            if(Math.min(count[0], count[1]) > k) {
                count[str.charAt(left)-'a']--;
                left++;
            } else {
                ans++;
            }
        }
        System.out.println(ans);
    }

}

*/