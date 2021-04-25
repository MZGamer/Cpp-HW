#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int x,y;
    cin>>x>>y;
    if(x == 0&&y==0)
        cout<<"原點"<<endl;
    else if(x == 0 && y!=0)
        cout<<"Y軸"<<endl;
    else if(x!=0 && y == 0)
        cout<<"X軸"<<endl;
    else if(x>0){
        if(y>0)
            cout<<"第一象限"<<endl;
        else
            cout<<"第四象限"<<endl;
    }
    else if(x<0){
        if(y>0)
            cout<<"第二象限"<<endl;
        else
            cout<<"第三象限"<<endl;
    }
}
//press F6 to compile