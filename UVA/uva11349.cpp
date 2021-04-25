#include<bits/stdc++.h>

using namespace std;

int main() {
   int count;
   cin>>count;
   char g1,g2;
   int n;
   for(int c=0;c<count;c++) {
       bool neg = false;
        cin>>g1>>g2>>n;
        vector<vector<long int>> v2;
        for(int i=0;i<n;i++) {
            vector<long int> v;
            for(int k=0;k<n;k++) {
                long int temp;
                cin>>temp;
                if(temp<0)
                    neg = true;
                 v.push_back(temp);
            }
            v2.push_back(v);
        }
        if(neg) {
            cout<<"Test #" << c+1<<": Non-symmetric."<<endl;
            continue;
        }
        int chk = n/2;
        if(n%2) {
            chk++;
        }
        bool nsym = false;
        for(int i = 0;i <chk;i++) {
            vector<long int> ch = v2[n-1-i];
            reverse(ch.begin(),ch.end());
            for(int k=0;k<n;k++) {
                if(v2[i][k] != ch[k]) {
                    nsym = true;
                    break;
                }
            }
            if(nsym)
                break;
        }
        if(nsym) {
            cout<<"Test #" << c+1<<": Non-symmetric."<<endl;
        } else {
            cout<<"Test #" << c+1<<": Symmetric."<<endl;
        }


   }

}
