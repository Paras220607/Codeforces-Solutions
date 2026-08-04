#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        if (n <= 2) {
            cout << 0 << endl;
            continue;
        }
 
        
        int totalSum = 0;
        for (int i = 0; i < n - 1; i++) {
            totalSum += abs(a[i] - a[i + 1]);
        }
 
        int maxReduction = 0;
 
        
        for (int i = 0; i < n; i++) {
            int reduction = 0;
 
            if (i == 0) {
                reduction = abs(a[0] - a[1]);
            }
            else if (i == n - 1) {
                reduction = abs(a[n - 2] - a[n - 1]);
            }
            else {
                reduction = abs(a[i - 1] - a[i])
                          + abs(a[i] - a[i + 1])
                          - abs(a[i - 1] - a[i + 1]);
            }
 
            maxReduction = max(maxReduction, reduction);
        }
 
        
        cout << totalSum - maxReduction << endl;
    }
 
    return 0;
}