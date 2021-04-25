#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    for(int i=1;i<= ((n+1)/2);i++){
        for(int k=1;k<=((n+1)/2)-(i);k++){
            cout<<'x';
        }
        for(int k=1;k<=(i-1)*2+1;k++){
            cout<<'o';
        }
        for(int k=1;k<=((n+1)/2)-i;k++){
            cout<<'x';
        }
        cout<<endl;
    }
    for(int i=((n+1)/2) -1;i>= 1;i--){
        for(int k=1;k<=((n+1)/2)-(i);k++){
            cout<<'x';
        }
        for(int k=1;k<=(i-1)*2+1;k++){
            cout<<'o';
        }
        for(int k=1;k<=((n+1)/2)-i;k++){
            cout<<'x';
        }
        cout<<endl;
    }
}
//press F6 to compile