#include <iostream>


#define lli long long int
#define li long int

const lli mod = 1e9 + 7;
using namespace std;

lli pow(lli a, lli b, lli p) {
    // a function to perform the operation (x^y) % p
    lli res = 1;
    a %= p;
    while(b) {
        if (b&1) 
            res = (res * a) % p;
        b >>= 1;
        a = (a*a) % p;
    }
    return res;
}

int main() {
    lli n;
    cin >> n;
    cout << pow(2,n,mod);
    return 0;
}