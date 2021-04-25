#include<bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;
    for(int k = 0; k < count; k++) {
        int n, i;
        double p;
        cin>>n>>p>>i;
        double r = pow(1-p, n);
        double a = pow(1-p, i-1) * p;
        if (p == 0)
            r = 0;
        cout << fixed << setprecision(4) << a / (1 - r) << endl;

    }
}
