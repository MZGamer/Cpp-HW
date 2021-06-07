#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
    int num[3];
    for(int i=0;i<3;i++){
        cin.ignore(1000000,'&');
        cin>>num[i];
    }
    int chk[3] = {abs(num[0]-num[1]),abs(num[0]-num[2]),abs(num[1]-num[2])};
    bool flag = false;
    for(int i=0;i<2;i++){
        for(int k=i+1;k<3;k++)
            if(chk[i] == chk[k])
                flag = true;
    }
    if(flag)
        cout<<"AS"<<endl;
    else
        cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
}
//press F6 to compile