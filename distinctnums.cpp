#include <bits/stdc++.h>
#define lli long long int

using namespace std;

set<lli> vals;

int main() {
    lli n, k;
    cin >> n;
    while(n--) {
        cin >> k;
        vals.insert(k);
    }
   
    cout << vals.size() << endl;
    return 0;
}