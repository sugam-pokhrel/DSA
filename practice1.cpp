#include<iostream>
using namespace std;


int main(){
    int ch;
    // cout<<"Enter the char \n";
    ch=cin.get();
  
    if(ch>=97&&ch<=122){
        cout<<"the number is lowercase";
    } else if(ch>=65&&ch<=90){
        cout<<"the number is uppercase";
    }
    else{
        cout<<"this is numeric";
    }

    cout<<"\n";
  


}