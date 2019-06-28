  #include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int currentsum=0;
	int left=-1;
	int  right=-1;
	int maxsum=0;
	int a[1000];
    int cumsum[1000];//cumulative sum

	cin>>a[0];
    cumsum[0]=a[0];

	for(int i=1;i<n;i++){
		cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				currentsum=0;
				currentsum= cumsum[j]-cumsum[i-1];
			//cout<<currentsum<<endl;
			if(currentsum>maxsum){
				maxsum=currentsum;
				left=i;right=j;	
			}
			}
		}
	cout<<"maximum sum= "<<maxsum<<endl;
	for(int k=left;k<=right;k++){
		cout<<a[k]<<", "<<endl;
	}
	return 0 ;
}
