#include<iostream>
using namespace std;

int  firstOcc(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else 
        s=mid+1;

    }
    return ans;
}

int  lastOcc(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            ans=mid;
            s=mid+1;

        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else 
        s=mid+1;

    }
    return ans;
}

int main(){

    int a[]={1,2,2,2,4,4};
    int n=7;
    int key=2;
    int ans=firstOcc(a,n,2);
    cout<<"first occ of 2 is "<<ans<<endl;
    
    cout<<"last occ of 2 is "<<lastOcc(a,n,2)<<endl;


}