#include<iostream>
using namespace std;
int searchin(int a[],int s,int e,int key){
	//base case
	if(s>e){
		return-1;
	}
	//rec case
	int mid=(s+e)/2;
	if(a[mid]==key){
		 return mid;
	}	
	//mid lies in first line 
	if(a[s]<a[mid]){
		if(key<=a[mid]&& key>=a[s]){
			return searchin(a,s,mid-1,key);
		}
		else
		return searchin(a,mid+1,e,key);
	}
	//mid lies in second line
	if(key>=a[mid]&&key<=a[e]){
		return searchin (a,mid+1,e,key);
		
		
	}
return searchin(a,s,mid-1,key);	
}
int main(){
int a[]={5,6,7,1,2,3,4};
int key;
cin>>key;	
cout<<"Element fount at index"<<searchin(a,0,6,key);
return 0;
}
