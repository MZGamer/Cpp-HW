#include<bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin>>count;
    for(int i=1;i<=count; i++){
        map<string,int>m;
        int classcount;
        cin>>classcount;
        for(int k=0; k<classcount;k++) {
            int day;
            string name;
            cin>>name>>day;
            m[name] = day;
        }
        int day;
        string name;
        cin>>day>>name;
        map<string, int>::iterator iter = m.begin();
        cout<<"Case "<<i<<": ";
        if(m.find(name) == m.end()) {
            cout<<"Do your own homework!"<<endl;
        } else if(m[name] <= day) {
            cout<<"Yesss"<<endl;
        } else if(m[name] <= day + 5) {
            cout<<"Late"<<endl;
        } else {
            cout<<"Do your own homework!"<<endl;
        }
    }

}
