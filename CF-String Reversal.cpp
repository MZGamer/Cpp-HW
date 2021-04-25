#include <iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    int count = a-1;
    string s,ref;
    int sum = 0;
    char temp;
    cin>>s;
    ref = s;
    for(int i=0;i<a;i++){
        if(s[i] != ref[count-i]){
            for(int k=i+1;k<=a-1;k++){
                if(s[k] == ref[count-i]){
                    for(int m=k;m>i;m--){
                        temp = s[m];
                        s[m] = s[m-1];
                        s[m-1] = temp;
                        sum++;
                    }
                    //cout<<s<<" "<<ref<<endl;
                    break;
                }
            }
        }
    }
    cout<<sum<<endl;
}
//press F6 to compile