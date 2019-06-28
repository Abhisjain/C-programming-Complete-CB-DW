/*RAIN WATER HARVESTING
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format:
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints:
Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5
*/

/*
An element of array can store water if there are higher bars on left and right. We can find amount of water to be stored in every element by finding the heights of bars on left and right sides. The idea is to compute amount of water that can be stored in every element of array. For example, consider the array {3, 0, 0, 2, 0, 4}, we can store two units of water at indexes 1 and 2, and one unit of water at index 2.

A Simple Solution is to traverse every array element and find the highest bars on left and right sides. Take the smaller of two heights. The difference between smaller height and height of current element is the amount of water that can be stored in this array element. Time complexity of this solution is O(n2).

An Efficient Solution is to prre-compute highest bar on left and right of every bar in O(n) time. Then use these pre-computed values to find the amount of water in every array element.*/