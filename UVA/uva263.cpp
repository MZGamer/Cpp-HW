#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool flag = false;
    while(cin>>n) {
        if(n == 0) {
            break;
        }

        flag = true;
        cout << "Original number was " << n << endl;
        int chain = 0;
        map<int,int> anssheet;
        int chk = 0;
        while (anssheet.find(chk) == anssheet.end() || anssheet[chk] <= 1)
        {
            stringstream s;
            s << n;
            string ns, rs;
            s >> ns;
            sort(ns.begin(),ns.end());
            //cout<<ns<<endl;
            rs = ns;
            reverse(rs.begin(),rs.end());
            int nans, rans;
            s.clear();
            s << ns;
            s >> nans;
            s.clear();
            s << rs;
            s >> rans;
            cout << rans << " - " << nans << " = " << rans - nans << endl;
            chk = rans - nans;
            n = chk;
            anssheet[chk] += 1;
            chain ++ ;
        }
        cout<<"Chain length "<< chain <<endl << endl;;


    }
}
