#include<iostream>
#include<algorithm>
using namespace std;

bool myCompare(pair<string,int>p1,pair<string,int>p2){
    //first =name,second=salary
    //prefrence salary>name
    if(p1.second==p2.second){
        return p1.first<p2.first;

    }
    return p1.second>p2.second;
}
int main(){

int n,min_salary;
pair<string,int>emp[100005];
cin>>min_salary;
cin>>n;

    string name;
    int salary;
        
    
    for(int i=0;i<n;i++){
        cin>>name>>salary;
        emp[i].first=name;
        emp[i].second=salary;
    }
    sort(emp,emp+n,myCompare);

//print 
for(int i=0;i<n;i++){
    if(emp[i].second>min_salary){
        cout<<emp[i].first<<" "<<emp[i].second<<endl ;
    }
}
return 0;
}

