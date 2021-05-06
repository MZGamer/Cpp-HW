#include <bits/stdc++.h>

using namespace std;

int degree(int s) {
    if(s < 10)
        return 1;
    int temp = 0;
    while(s != 0 ) {
        temp += s%10;
        s/=10;
    }
    return 1 + degree(temp);
}

int main() {
    string s;
    while(getline(cin,s)) {
        if(s == "0") {
            break;
        }
        int test = 0;
        for(int i=0; i<s.size();i++) {
            test += int(s[i] - '0');
        }
        int ans = 0;
        if(test % 9 != 0) {
            cout<<s<<" is not a multiple of 9."<<endl;
        } else {
            ans += degree(test);
            cout<<s<<" is a multiple of 9 and has 9-degree " << ans<<"."<<endl;
        }
        

    }

}