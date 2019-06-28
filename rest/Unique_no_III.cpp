#include <iostream>
using namespace std;

	
int findUniqueNo(int *a,int n){
	int cnt[64]={0};
	for(int j=0;j<n;j++){
		//extract bits of every no and update the count array
		int i=0;
		int no= a[j];
		while(no>0){
		cnt[i]+=(no&1);
		i++;
		no= no>>1;
	}
	}
	int p=1;
	int ans=0;
	
	 //take mod of aray with 3
	 for(int i=0;i<64;i++){
	 	cnt[i]%=3;
	 	ans+=cnt[i]*p;
	 	p=p<<1;
	 	///above 2 lines r used for generating 2 ki power
	 //	cout<<cnt[i]<<" ";
	 }
	 return ans;
}
int main() { 

int a[]= { 7,7,3,4,2,3,3,4,4,7};
int n=sizeof(a)/sizeof(int);
//findUniqueNo(a,n);
cout<<findUniqueNo(a,n);
	return 0;
	
}
