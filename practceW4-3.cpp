#include <iostream>

using namespace std;
int main (){
    int a,tem,pa;
    cin>>a;
    cin>>tem>>pa;
    if(a>100)
        cout<<"High"<<endl;
    else
        cout<<"Low"<<endl;
    if(tem>=40||pa>=200)
        cout<<"Warning"<<endl;
    else
        cout<<"OK"<<endl;
    
}
//press F6 to compile