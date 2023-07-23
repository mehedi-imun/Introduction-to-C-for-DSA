#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main()
{
    int x;
    cin>>x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
   int big = *max_element(a, a + x);
   cout << big;
    
    return 0;
}