#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double a,b,c;
    cin>>a>>b;
    c =a/b;
    if(c *100 - int(c *100)>0.0000000001)
        c = c *100+1;
    else
    {
        c = c* 100;
    }
    
    cout<<fixed<<setprecision(2)<<double(int(c)/100.00)<<endl;

}
//press F6 to compile