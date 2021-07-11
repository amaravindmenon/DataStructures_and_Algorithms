#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];

    cin>>arr;

    bool check = true;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[n-1-i]){
            check = 0;
        }
    }
    
    cout<<"o0ij ";
    
    if(check){
        cout<<"word is Plaindrom"<<endl;
    }else{
        cout<<"word is not Plaindrom"<<endl;
    }
    return 0;
}

