#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int t,n,m;
    cin>>t;
    for (int i=0;i<t;i++){
        int ans = 1;
        cin>>n>>m;
        for (int k=1;k<=n;k++){
            if(ans>m){
                ans%=m;
            }
            ans*=k;
        }
        cout<<ans%m<<endl;
    }
}
//press F6 to compile