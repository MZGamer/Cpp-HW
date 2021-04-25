#include <iostream>
#include <iomanip>
using namespace std;

long long int gcd(long long int n, long long int m){
    if(m > n){
        long long int temp = m;
        m = n;
        n = temp;
    }
    while (m % n != 0){
        m = m % n;
        long long int temp = m;
        m = n;
        n = temp;
    }
    return n;
}

int main (){
    long long int n, m;
    while(cin >> n >> m){
        long long int c = (n*m) / gcd(n,m);
        cout << gcd(n, m) << " " << c << endl;
    }
}

//press F6 to compile