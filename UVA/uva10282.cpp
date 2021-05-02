#include<bits/stdc++.h>

using namespace std;

int main() {
    string word;
    map<string,string> m;
    bool input = true;
    while(getline(cin,word)) {
        if(input) {
            if(word == "") {
                input = false;
                continue;
            }
            string w,tr;
            stringstream s;
            s << word;
            s>>tr>>w;
            m[w] = tr;

        } else {
            map<string,string>::iterator iter = m.find(word);
            if(iter != m.end())
                cout<<m[word]<<endl;
            else 
                cout<<"eh"<<endl;
        }
    }
}
