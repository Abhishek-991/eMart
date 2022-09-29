#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array";
    cin >> n;
    int a[n];
    cout << "enter value of array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 10 == 0)
        {
            count++;
            continue;
        }
        else
        {
            a[i] = 10 * count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}