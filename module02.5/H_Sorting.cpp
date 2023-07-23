#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a[x];
    
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }

    sort(a, a + x);

    for (int i = 0; i < x; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
