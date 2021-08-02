#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    vector<int>::iterator it = v.begin();

    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp = {{1, 2}, {4, 5}, {7, 8}};

    vector<pair<int, int>>::iterator vpit;

    for (vpit = vp.begin(); vpit != vp.end(); vpit++)
    {
        cout << vpit->first << " " << vpit->second << endl;
    }

    for (int value : v)
    {
        cout << value << " ";
    }

    return 0;
}
