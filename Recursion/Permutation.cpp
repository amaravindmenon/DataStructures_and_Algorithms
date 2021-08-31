#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

int premute(vector<int> &a,int idx){
    if(idx== a.size()){
        ans.push_back(a);
        return;
    }
    for (int i = 0; i < a.size(); i++)
    {
        swap(a[i],a[idx]);
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
        premute(a,0);
        for(auto v:ans){
            for (auto i:v)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}




