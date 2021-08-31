#include <iostream>
#include <stdio.h>

using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArray)
{

    if ((x == (n - 1)) && (y == (n - 1)))
    {
        solArray[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArray[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solArray))
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArray))
        {
            return true;
        }
        solArray[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (ratinMaze(arr, 0, 0, n, solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solarr[i][j] << "";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }
}
