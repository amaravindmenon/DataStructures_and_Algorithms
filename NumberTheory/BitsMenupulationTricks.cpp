#include<iostream>
#include<stdio.h>
#include<climits>

using namespace std;

void printBinary(int num){
    for(int i = 10; i >=0; --i){
        cout<<((num >> i) & 1);
    }
    cout<<endl<<endl;
}

void finOddOrEven(int num){
    if(num & 1){
        cout<<"Odd"<<endl;
    }else{
        cout<<"even"<<endl;
    }
}

int main(){
       
}



