#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n,m;
    while(cin>>n && n != -1){
        int count = 0;
        while (n%2 ==0)
        {
            n/=2;
            count ++;
        }
        cout<<count<<endl;
        
    }
}

//press F6 to compile