#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n,last = 2;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int k=0;k<i+1;k++){
            if(k==0){
                last = 2*(i+1);
            }
            cout<<last;
            last+=2;
            if(k+1!=i+1)
                cout<<" ";
            else
                cout<<endl;
            
        }
    }
}
//press F6 to compile