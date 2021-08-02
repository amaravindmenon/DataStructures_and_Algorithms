#include<bits/stdc++.h>


using namespace std;


void printMap(map<int,string> &m){
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string> m1;
    m1[1] = "tarun";
    m1[5] = "b";
    m1[4] = "c";
    m1.insert({2,"afg"});

    map<int,string>::iterator it;

    printMap(m1);
   
    

    return 0;
}








