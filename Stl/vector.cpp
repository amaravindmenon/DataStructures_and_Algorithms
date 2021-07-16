#include<bits/stdc++.h>

using namespace std;

void printVector(vector<int> v){
    cout<<"Size "<<v.size()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    
}

int main(){
    int a[10];

    vector<int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int n;
        cin>>n;
        v.push_back(n);
    }

    printVector(v);    
}

