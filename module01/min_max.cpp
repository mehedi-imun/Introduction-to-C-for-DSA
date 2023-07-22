#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int a,b;
    cin>>a>>b;
    int m = max(a,b);
    int i = min(a,b);
    cout<<m<<" "<<i<<endl;
    return 0;
}