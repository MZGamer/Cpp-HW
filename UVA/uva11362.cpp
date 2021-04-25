#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool comp(string a, string b) {
    return a.length() >b.length() ? false : true;
    
}

int main() {
    int count;
    cin>>count;
    while(count > 0) {
       bool flag = false;
       int c;
       cin>>c;
       string num[c];
       for(int i=0;i<c;i++) {
           string temp;
           cin>>temp;
           num[i] = temp;
       }
       for(int i=0;i<c;i++) {
           bool flag = false;
           for(int k=0;k<c;k++){
               for(int j=k+1;j<c;j++) {
                   if(num[k].length()>num[j].length()) {
                       swap(num[k],num[j]);
                       flag = true;
                   } else {
                       break;
                   }
               }
           }
           if(flag)
            break;
       }
        //sort(num,num + c,comp);
        for(int i=0;i<c;i++) {
            for(int k = i+1;k<c;k++) {
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
    return 0;
}
