#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    for(int i=0;i<int(s.length());i++){
        if(s[i]>=97)
            s[i]-=32;
    }
    cout<<s<<endl;

}
//press F6 to compile