#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
int s=0;
int e=n-1;
int mid;
while(s<=e){
    mid=(s+e)/2;
    if(a[mid]==key){
        return mid;

    }
    else if(a[mid]>key){
        e=mid-1;
    }
    else
    s=mid+1;
}
return -1;
}
int main(){


int a[]={1,3,5,10,12,15,17};
int n=sizeof(a)/sizeof(int);
int key;
cin>>key;
int searchindex=binarysearch(a,n,key);

if(searchindex==-1){
    cout<<key<<" is not present"<<endl;}
else
cout<<key<<" is present at index"<<searchindex<<endl;



}