#include <iostream>
#include <bits/stdc++.h>
#include <array>

using namespace std;

void display(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

const int N = 1e5 + 10;
int a[N];

void marge(int l, int r, int mid)
{
    int lsize = mid - l + 1;
    int larr[lsize];

    int rightsize = r - mid;
    int rarr[rightsize + 1];

    for (int i = 0; i < lsize; i++)
    {
        larr[i] = a[i + 1];
    }

    for (int i = 0; i < rightsize; i++)
    {
        rarr[i] = a[i + mid + 1];
    }

    larr[lsize] = rarr[rightsize] = INT_MAX;

    int li = 0;
    int ri = 0;

    for (int i = 0; i <= r; i++)
    {
        if (larr[li] < rarr[ri])
        {
            a[i] = larr[li];
            li++;
        }
        else
        {
            a[i] = rarr[ri];
            ri++;
        }
    }
}

void margeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    margeSort(l, mid);
    margeSort(mid + 1, r);
    marge(l, r, mid);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    display(n, a);

    margeSort(0, n - 1);

    cout << endl;
    display(n, a);

    return 0;
}
