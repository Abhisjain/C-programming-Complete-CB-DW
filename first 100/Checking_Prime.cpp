#include <iostream>

using namespace std;

bool isPrime(int no){
	if(no==1){
		return false;
	}
	for(int i=2;i*i<=no;i++){
		if(no%i==0){return false;
		}
	}
	return true;
}
int main(){
	
	int n;
	cin>>n;
	if (isPrime(n)){
		cout<<"Yes"<<n<<"is Prime";
		
	}
	else{
		cout<<"NO its not prime";
	}
	return 0;
	
	
}
