#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
int m,y;
double r;
cin>>m>>r>>y;
r = r/100;
cout<<fixed<<setprecision(2)<<m*pow((1+r),y)<<endl;
}
//press F6 to compile