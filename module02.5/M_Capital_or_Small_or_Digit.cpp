#include <iostream>
using namespace std;


int main()
{
    char c;
    cin>>c;
    if(c>='0' && c<='9')
    {
        cout<<"IS DIGIT";
    }
    else if (c>= 'A' && c<= 'Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;

    }
    else
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    
    return 0;
}