
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
bool compare(string a,string b){
    // cout<<a<<endl<<b<<endl;
    if(a.length()>b.length()){
        return false;
    }
    else if (a.length() == b.length()){
        for(int k=0;k<int(a.size());k++){
            //cout<<(a[k]>b[k])<<endl;
            if(a[k]>b[k]){
                return false;     
            }
            else if (a[k]<b[k]){
                return true;
            }
        }
    }
    else{
        return true;
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<string> sp,sm;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(temp[0] == '-'){
            sm.resize(sm.size()+1);
            sm[sm.size()-1] = temp;
        }
        else{            
            sp.resize(sp.size()+1);
            sp[sp.size()-1] = temp;             
        }
    }
    sort(sm.begin(),sm.end(),compare);
    reverse(sm.begin(),sm.end());
    //cout<<"Done"<<endl;
    sort(sp.begin(),sp.end(),compare);
    //cout<<"PDone"<<endl;
    for(int i=0;i<int(sm.size());i++){
        cout<<sm[i]<<endl;
    }
    for(int i=0;i<int(sp.size());i++){
        cout<<sp[i]<<endl;
    }
    
}