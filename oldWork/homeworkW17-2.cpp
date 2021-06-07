
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    bool sw = true;
    while(sw){
        sw = false;
        int count = 0;
        for (int i = 0; i < n-1-count; i++){
            if(s[i][0] == '-'){
                if(s[i+1][0] =='-'){
                    if(s[i].size()<s[i+1].size()){
                        swap(s[i],s[i+1]);
                        sw = true;
                    }
                    else if (s[i].size() == s[i+1].size()){
                        for(int k=1;k<int(s[i].size());k++){
                            if(s[i][k]<s[i+1][k]){
                                swap(s[i],s[i+1]);
                                sw = true;
                                break;
                            }
                        }
                    }   
                }
            }
            else{
                if(s[i+1][0] =='-'){
                    swap(s[i],s[i+1]);
                    sw = true;
                }
                else if(s[i].size()>s[i+1].size()){
                    swap(s[i],s[i+1]);
                    sw = true;
                }
                else if (s[i].size() == s[i+1].size()){
                    for(int k=0;k<int(s[i].size());k++){
                        if(s[i][k]>s[i+1][k]){
                            swap(s[i],s[i+1]);
                            sw = true;
                            break;
                        }
                    }
                }
            }
        }
        count++;
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    
}