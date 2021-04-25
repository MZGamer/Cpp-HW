
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int sleep[7],walk[14],floor[8],now = 0;;
    while (cin>>sleep[0])
    {
        for(int i=1;i<7;i++){
            cin>>sleep[i];
        }
        for(int i=0;i<14;i++){
           cin>>walk[i];
        }
        for(int i=0;i<8;i++){
           cin>>floor[i];
        }
        now = floor[0];
        for(int i=1;i<8;i++){
            int time = 0;
            if(now > floor[i])
                for(int k = now;k > floor[i];k--){
                    time += walk[k-2];
                }
            else if(now < floor[i])
                for(int k = now;k < floor[i];k++){
                    time += walk[k-1];
                }
            if(i+1!=8)
                now = floor[i];
            if(i!=1)
                cout<<" ";
            //cout<<time<<" "<<sleep[i-1]<<endl;
            if(time<=sleep[i-1])
                cout<<"yes";
            else
                cout<<"no";
            if(i+1!=8)
                cout<<",";
            else
                cout<<endl;
            
        }
        for(int i=0;i<7;i++){
            sleep[i] = 0;
        }
        for(int i=0;i<14;i++){
           walk[i] = 0;
        }
        for(int i=0;i<8;i++){
           floor[i] = 0;
        }
    }
   
}