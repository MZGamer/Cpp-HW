
#include<bits/stdc++.h>
using namespace std;

int main(){
    string target,word,fk;
    int ans = 0;
    bool started = false;
    getline(cin,target);
    while(getline(cin,fk)){
        word+=fk;
        word+="\n";
    }
    for(int i=0;i<int(word.size());i++){
        if(word[i] == target[0]){
            started = true;
            for(int k=1;k<int(target.size());k++){
                if(word[i+k]!=target[k]){
                    started = false;
                    i+=k;
                    break;
                }
            }
            if(started)
                ans++;
        }
 
    }
    cout<<ans<<endl;
}
