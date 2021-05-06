#include <bits/stdc++.h>

using namespace std;

long long int pow(int ques, int times) {
    if(times == 0) {
        return 1;
    } else {
        return ques * pow(ques, --times);
    }

}

int main() {
    string q;
    while(cin>>q) {
        if(q[0] =='-') {
            continue;
        }

        if(q[0] == '0') {
            long long int ans = 0;
            for(int i=2;i<q.size();i++) {
                if(q[i] - '0' > 10) {
                    ans+= int(q[i] - 'A' + 10) * pow(16,q.size() -1 -i);
                }
                else
                    ans+= int(q[i] - '0') * pow(16,q.size() -1 -i);
            }
            cout<<ans<<endl;
        } else {
            stringstream s;
            s << q;
            long long int ques;
            s >> ques;
            vector<char> ans;
            while(ques != 0){
                if(ques % 16 > 9) {
                    ans.push_back(char('A' +  ((ques % 16) % 10)));
                } else {
                    ans.push_back(char('0' + ques % 16) );
                }
                ques /= 16;
            }
            reverse(ans.begin(),ans.end());
            cout<<"0x";
            for(int i=0;i<ans.size();i++) {
                cout<<ans[i];
            }
            cout<<endl;
        }
    }

}