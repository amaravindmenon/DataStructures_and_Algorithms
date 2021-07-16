#include<bits/stdc++.h>

using namespace std;

void printVec(vector<pair<int,int>> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

// int main(){
//     pair<int,string> p;
//     p = {2,"abcd"};
//     pair<int,string> &p1 = p;
//     p1.first = 3;
//     cout<<p.first<<" "<<p.second<<endl;

//     int a[] = {1,2,3};
//     int b[] = {2,3,4};
    
// }


//////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    printVec(v);
}
