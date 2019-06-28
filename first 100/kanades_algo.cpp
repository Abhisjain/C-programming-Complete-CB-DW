  #include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    int a[1000];
    int cs=0;//currentsum
    int ms=0;//maxsum

for(int i=0;i<n;i++){
		cin>>a[i];
}
for(int i=0;i<n;i++){

cs= cs+ a[i];
if(cs<0)
cs=0;

ms = max(cs,ms);
}
cout<<"Maximumsum: "<<ms;
return 0;
}

