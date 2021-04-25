
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,count,now =0,ans = 0;
    cin>>n>>count;
    int tree[count] = {0};
    for(int i=0;i<count;i++)
        cin>>tree[i];
    for(int i=0;i<count;i++){
        if(tree[i]-now >n){
            now = tree[i-1];
            i = i-1;
            ans ++;
        }
        else if(i+1 == count){
            ans++;            
        }

        
    }
    cout<<ans<<endl;
   
}