CONVERSION (FAHRENHEIT TO CELSIUS)
Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step
/*
Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 17
20 6
40 4
60 15
80 26
100 37

Input Format:
Constraints:
0 < Min < 100 Min < Max < 500 0 < Step

Output Format
Sample Input
0 
100 
20
Sample Output
0 -17 
20 -6 
40 4 
60 15 
80 26 
100 37
*/

public static void convert(int ll, int ul,int step){

   for(int i=ll;i<=ul;i=i+step){
        int c=(int)((5.0/9)*(i-32));  

        System.out.println(i+ "\t" +c); 
    }               
}
