#include<iostream>
#include<vector>
#include<algorithm>//for using sorting
using namespace std;
bool compare(int a,int b){
    return a>b;
}

int main(){

    vector<int>v;
    v.reserve(100);//vector will not resize untill it reach the size of 100

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    v.pop_back();
    sort(v.begin(),v.end(),compare);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
//v.max_size() -max size a vector can take ans is 4611686018427387903 
    }

}
//error i codechef ide SIGSEV