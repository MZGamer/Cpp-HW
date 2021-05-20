#include<iostream>

using namespace std;

string checked(string t) {
    if(t[0]>='p' && t[0]<='z') {
        return string(1,t[0]);
    } else if(t[0] == 'N') {
        string Left = "E";
        if(t.size() -1 > 0)
            Left = checked(t.substr(1,t.size() -1));
        return t[0] + Left;
    } else if(t[0] == 'C' || t[0] == 'D' || t[0] == 'E' || t[0] == 'I') {
        string Left = "E";
        if(t.size() -1 > 0) {
            Left = checked(t.substr(1,t.size() -1));
        }
        string Right = "E";
        int chk = t.size() - Left.size();
        if(chk-1> 0) {
            Right = checked(t.substr(1 + Left.size(),chk));
        }
        return t[0] + Left + Right;
    }
    return "E";
}

int main() {
    string test;
    while(cin>>test) {
        string check = checked(test);
        if(check == test) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
