
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int next = 0,n;
    //cout<<int('1')<<" "<<int('9')<<endl;
    string a,b,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        next = 0;
        ans = "";
        cin>>a>>b;
        while(a.length()>b.length())
            b = "0" + b;
        while(b.length()>a.length())
            a = "0" + a;
        for(int i = 0;i<a.length();i++){
            int add = int(a[a.length()-i-1]) + int(b[b.length()-i-1]) + next - 48;
            //cout<<add<<endl;
            next = 0;
            if(add > 57){
                //cout<<add<<endl;
                add -=10;
                next++;
            }
            ans = char(add) + ans;
        }
        if(next)
            ans = char(48 + next) + ans;

        cout<<ans<<endl;
    }
}