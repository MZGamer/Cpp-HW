#include<bits/stdc++.h>

using namespace std;
struct answer {
    char t;
    int count;
};

bool comp(answer a, answer b) {
    if(a.count != b.count)
        return a.count < b.count;

    return a.t > b.t;
}

int main() {
    string question;
    bool flag = false;
    while(getline(cin, question)) {
        if(flag)
            cout<<endl;;
        int ascii[200] = {0};
        vector<answer> ans;
        for (int i=0; i<question.size();i++) {
            ascii[question[i]]++;
        }
        for(int i=0;i<200;i++) {
            if(ascii[i]) {
                answer a;
                a.t = char(i);
                a.count = ascii[i];
                ans.push_back(a);
            }
        }
        sort(ans.begin(),ans.end(),comp);
        for(int i=0;i<ans.size();i++) {
            printf("%d %d\n", ans[i].t,ans[i].count);
            flag = true;
        }
    }
}
