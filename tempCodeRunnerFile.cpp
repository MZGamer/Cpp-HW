#include<bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
        return a.size() >b.size() ? true : false;
    
}

int main() {
    int count;
    cin>>count;
    while(count > 0) {
       vector<string> num;
       bool flag = false;
       int c;
       cin>>c;
       for(int i=0;i<c;i++) {
           string temp;
           cin>>temp;
           num.push_back(temp);
       }
        sort(num.begin(),num.end(),comp);
        for(int i=0;i<num.size();i++) {
            for(int k = i+1;k<num.size();k++) {
                string chk = num[k].substr(0,num[i].size());
                if(num[i] == chk) {
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
        count--;
        
    }

}
