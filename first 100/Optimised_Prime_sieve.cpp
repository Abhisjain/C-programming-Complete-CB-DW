#include <iostream>
using namespace std;

void primeSieve(int *p,int n){
	p[0]=p[1]=0;
	p[2]=1;
	//let us mark all odd no as prime
	for(int i=3;i<=n;i+=2){
		p[i]=1;
	}
	for(int i=3;i<=n;i+=2){
		if(p[i]){
			//Mark all the multiple of that no is not prime
			 //2. optimization take a jump of 2i starting  from i*i 
		for(int j=i*i;j<=n;j+=2*i){
		p[j]=0;
		}
	}
}
 return;
}
int main() {
	int N=1000000;
int p[N]={0};
primeSieve(p,100);

	for(int i=0;i<=100;i++){
		if(p[i]){
		cout<<i<<"  ";	
		}
	}
		
} 
