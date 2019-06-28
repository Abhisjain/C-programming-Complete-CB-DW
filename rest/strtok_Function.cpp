#include<iostream>
#include<cstring>
using namespace std;

char mystrtok(char str[];char delim){
    
}
int main(){


    char str []= "hi, i am abhishek, study c++,";
    char *ptr;
   
    ptr= strtok( str," ,"); // split string into tokens
    //cout<<ptr<<endl;

    while(ptr!=NULL)
    {

    
    //ptr= strtok(NULL," ");
    cout<<ptr<<endl;
    ptr= strtok(NULL," ,");// NULL signifies extract string from original string
    }
return 0;
}