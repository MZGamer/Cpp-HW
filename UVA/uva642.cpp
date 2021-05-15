#include<bits/stdc++.h>

using namespace std;

int main() {
    
    string input;
    vector<string> dic;
    vector<string> target;
    while (getline(cin,input)) {
        if(input == "XXXXXX") {
            break;
        } else {
            target.push_back(input);
            sort(input.begin(),input.end());
            dic.push_back(input);
        }
    }
    while (getline(cin,input)) {
        if(input == "XXXXXX") {
            break;
        } else {
            bool flag = false;
            sort(input.begin() ,input.end());

            vector<string> ans;
            for(int i=0;i<dic.size();i++) {
                //cout<<dic[i]<<endl;
                if(input == dic[i]) {
                    ans.push_back(target[i]);
                    flag = true;
                }
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++) {
                cout<<ans[i]<<endl;
            }
            if(flag == false ) {
                cout<<"NOT A VALID WORD"<<endl;
            }
            cout<<"******"<<endl;
        }
    }

}
