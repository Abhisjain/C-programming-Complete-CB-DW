#include<iostream>
#include<cstring>
using namespace std;

char mystrtok(char str[],char delim){
    static char *input = NULL;
    if(str!=NULL){
        input=str;
    }
    if(input==NULL)
    return NULL;
    int i;
    char *output= new char[strlen(input)+1];//+1 is for'\0'
    //return a word as dynamically allocated word array from function
    //read word from input and i will store in output and just return till delimiter
    for( i = 0; input[i]!='\0';i++){
        if(input[i]!=delim){
            output[i]=input[i];

        }
        else{
            output[i]='\0';
            input=input+i+1;
            return output;
        }
    }
    //return the last word even if delim is not there
    output[i]='\0';
    input = NULL;
    return output;
}
int main(){


    char str []= "hi, i am abhishek, study c++,";
    char *ptr;
   
    ptr= mystrtok( str,' '); // split string into tokens
    cout<<ptr<<endl;
     ptr= mystrtok( NULL,' ');
     cout<<ptr<<endl;
   /* while(ptr!=NULL)
    {

    
    //ptr= strtok(NULL," ");
    cout<<ptr<<endl;
    ptr= mystrtok(NULL," ,");// NULL signifies extract string from original string
    }*/
return 0;
}