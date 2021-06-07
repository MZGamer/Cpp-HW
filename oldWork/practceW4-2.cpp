#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;
int main (){
    double a,b;
    const double Pi=3.14159;
    int c;
    cin>>a>>b>>c;
    double rad = c/(180/Pi);
    printf("%0.3f",a*b*sin(rad)/2);
}
//press F6 to compile