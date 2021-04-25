#include<bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin>>count;
    string temp;
    bool flag = false;
    getline(cin,temp);
    map<char,char>m = {{'0','O'},{'1','I'},{'2','Z'},{'3','E'},{'4','A'},{'5','S'},{'6','G'},{'7','T'},{'8','B'},{'9','P'}};
    while(count > 0) {
        string s;
        if(flag)
            cout<<endl;
        flag = true;
        string ans = "";
        while(getline(cin,s)) {
            if(s == "")
                break;
            for(int i=0;i<s.size();i++) {
                if(m.find(s[i]) == m.end()) {
                    ans += s[i];
                } else {
                    ans += m[s[i]];
                }

            }    
            ans += '\n';      
        }

        cout << ans;
        count --;

    }

}
