#include <iostream>
using namespace std;
int gcd(int a,int b){
	//base case
	if(b==0){
		return a;
		
	}
	return gcd(n,a%b);
}

int main() {
cout<<gcd(10,14)<<endl;
return  0;

}


