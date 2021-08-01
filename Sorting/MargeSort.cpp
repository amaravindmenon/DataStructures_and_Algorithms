#include <iostream>
#include <bits/stdc++.h>
#include <array>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void merge(int *a, int mid,int l,int h)
{
    int i, j, k, b[100];
    i = l;
    j = (mid+1);
    k = l;

    while (i <=l && i <=h)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int i = 0; i < h; i++)
    {
        a[i] = b[i];
    }
    
}

void mergeSort(int *a, int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;   
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a,mid, l,h);
    }
}

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}
