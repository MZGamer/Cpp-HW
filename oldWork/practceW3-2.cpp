#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<abs(a-c)*abs(b-d)<<endl;
    cout<<2*(abs(a-c)+abs(b-d))<<endl;
}
//press F6 to compile