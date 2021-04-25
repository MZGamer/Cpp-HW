#include <bits/stdc++.h>

using namespace std;

int countStr(char *s) {
    return strlen(s);
}

int countAlp(char *s) {
    int count = 0;
    for(int i=0; i<int(strlen(s));i++) {
        if(s[i]>='a' && s[i]<='z') {
            count++;
        } else if (s[i]>='A' && s[i]<='Z') {
            count ++;
        }
    }
    return count;
}

int countDig(char *s) {
    int count = 0;
    for(int i=0; i<int(strlen(s));i++) {
        if(s[i]>='0' && s[i]<='9') {
            count++;
        }
    }
    return count;
}

int countSpaces(char *s) {
    int count = 0;
    for(int i=0; i<int(strlen(s));i++) {
        if(s[i] == ' ') {
            count++;
        }
    }
    return count;
}

int countSp(char *s) {
    return countStr(s) - countAlp(s) - countDig(s) - countSpaces(s);
}

int main() {
    string s;
    while(getline(cin,s)) {
        bool flag = false;
        for(int i=0;i<int(s.size());i++) {
            if(!flag && s[i] >= 'A') {
                flag = true;
            } else if (isupper(s[i])) {
                cout<<" "<<char(s[i] + 32);
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
}
