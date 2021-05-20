#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool flag = false;
    while(cin>>n) {
        map<string, int> m;
        string list[n];
        for(int i=0;i<n;i++) {
            string name;
            cin>>name;
            m[name] = 0;
            list[i] = name;
        }

        for(int i=0;i<n;i++) {
            string name,target;
            int money,count;
            cin>>name>>money>>count;
            if(count != 0)
                m[name] -= (money/count * count);
            for(int k=0;k<count;k++) {
                cin>>target;
                m[target] += money/count;
            }
        }
        if(flag){
            cout<<endl;
        }
        for(int i=0;i<n;i++) {
            cout<<list[i]<<" "<<m[list[i]]<<endl;
        }
        if(!flag)
            flag = true;

    }
}
