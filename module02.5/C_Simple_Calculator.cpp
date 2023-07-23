#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    long long int mult = (long long int)x * y; 
    int sub = x - y;
    cout << x << " " << "+" << " " << y << " " << "=" << " " << sum << endl;
    cout << x << " " << "*" << " " << y << " " << "=" << " " << mult << endl;
    cout << x << " " << "-" << " " << y << " " << "=" << " " << sub << endl;
    return 0;
}
