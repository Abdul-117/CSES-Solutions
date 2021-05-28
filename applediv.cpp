#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#define lli long long int

using namespace std;

int main() {
    lli n, total=0;
    lli ans = 1e9;
    cin >> n;
    lli arr[n];
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    for (lli i = 0; i < 1<<n; i++) {
        lli s = 0;
        for (lli j = 0; j < n; j++) {
            if (i & 1<<j) s += arr[j];
        }
        lli curr = abs((total-s)-s);
        ans = min(ans,curr);


    }
    cout << ans;
    return 0;


}