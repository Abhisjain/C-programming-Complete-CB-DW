#include <iostream>
using namespace std;
int gcd(int a,int b){
	//base case
	if(b==0){
		return a;
		
	}
	return gcd(b,a%b);
}
int lcm(int a,int b){

return a*b/gcd(a,b);
	
}


int main() {
cout<<"GCD OF 2 NO'S= "<<gcd(10,14)<<endl;

cout<<"LCM OF 2 NO'S= "<<lcm(10,14)<<endl;

return  0;

}


