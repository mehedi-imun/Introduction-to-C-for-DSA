#include<iostream>
using namespace std;

int main()
{
    int v;
    cin>>v;
    switch (v)
    {
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"two";
        break;
    case 3:
        cout<<"three";
        break;
    case 4:
        cout<<"four";
        break;
    case 5:
        cout<<"five";
        break;
    
    default:
        cout<<"didn't match";
    }
    return 0;
}