
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin>>n)
    {
        if(n==0)
            break;
        int a[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        bool sw = true;
        while(sw){
            sw = false;
            for (int i = 0; i < n-1; i++){
                int L=0,R=0,tL = a[i],tR = a[i+1];
                while(tL != 0){
                    L+=tL%10;
                    tL/=10; 
                }
                while(tR != 0){
                    R+=tR%10;
                    tR/=10; 
                }
                if(L>R){
                    swap(a[i],a[i+1]);
                    sw = true;
                }
                else if (L == R){
                    if(a[i]>a[i+1]){
                        swap(a[i],a[i+1]);
                        sw = true;
                    }
                }
            }
            //cout<<sw<<endl;
        }
        for(int i=0;i<n;i++){
            if(i !=0)
                cout<<" ";
            cout<<a[i];
        }
        cout<<endl;
        
    }
    
}