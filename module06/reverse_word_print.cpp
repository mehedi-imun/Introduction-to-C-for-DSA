#include <bits/stdc++.h>
using namespace std;
void reverse(stringstream & ss)
{
    string word;
    if(ss>>word)
    {
        reverse(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    reverse(ss);
    

    return 0;
}