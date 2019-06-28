/*MAXIMUM CIRCULAR SUM
You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive number.

Input Format:
First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of numbers and next line contains n space separated integers.

Constraints:
1<=t<=100 1<=n<=1000

Output Format
Print the maximum sum.

Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
*/

/*
This Question can be done using the brute force viz, by using two nested loops and checking the sum of every possible subset but this approach is in O(n^2). So, Now we are going to discuss an approach which solves the given problem in O(n).

Approach :
For finding the Maximum Contiguous sum we are using the kadane's algorithm. But in the question the array is circular that means the maximum sum can be of elements which are a part of the wrapping or not. So,
There can be two cases for the maximum sum:
Case 1: The elements that contribute to the maximum sum are arranged such that no wrapping is there. Examples: {-10, 2, -1, 5}, {-2, 4, -1, 4, -1}. In this case, Kadane’s algorithm will produce the result.

Case 2: The elements which contribute to the maximum sum are arranged such that wrapping is there. Examples: {10, -12, 11}, {12, -5, 4, -8, 11}. In this case, we change wrapping to non-wrapping. Let us see how. Wrapping of contributing elements implies non wrapping of non contributing elements, so find out the sum of non contributing elements and subtract this sum from the total sum. To find out the sum of non contributing, invert sign of each element and then run Kadane’s algorithm. Our array is like a ring and we have to eliminate the maximum continuous negative that implies maximum continuous positive in the inverted arrays.


public class maxCircularSum{
           public static void main(String[] args){

    Scanner scn = new Scanner(System.in);

    int t = new nextInt();

    while(t > 0){

        int n = scn.nextInt();

        int[] arr = new int[n];

        for(int i =0;i < n;i++)
            arr[i] = scn.nextInt();

        System.out.println(maxSum(arr));

        t--;
    }
  }

  public static int maxSum(int[] arr){

    int max_kadane = kadanes(arr);

    int max_wrap = 0;

    for(int i =0;i < arr.length;i++){
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }

    int non_contib_sum = kadanes(arr);
    max_wrap = max_wrap + non_contib_sum;

    return (max_wrap > max_kadane?max_wrap:max_kadane);

  }

    public static int kadanes(int[] A) {

        int max_so_far = 0;
        int max_ending_here = 0;


        for(int i = 0;i < A.length;i++){

            max_ending_here += A[i];

            if(max_ending_here < 0){
                max_ending_here = 0;
            }

            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
        }

        return max_so_far;



    }
}
Table Of Content
*/