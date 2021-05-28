#include <iostream>
#include <math.h>
#define lli long long int

using namespace std;

lli min (lli x, lli y) {
    if(x > y) {
        return y;
    }
    else {
        return x;
    }
    
}

lli max (lli x, lli y) {
    if(x>y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    lli t,a,b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        cout << ((a+b) % 3 == 0 && (min(a, b)*2 >= max(a, b)) ? "YES" : "NO") << endl;
    }
    return 0;
}