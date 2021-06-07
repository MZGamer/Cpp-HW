#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n;
    while (cin>>n)
    {    
        for (int i=1;i<n;i++)
        {
           if(n%i==0){
               cout<<i<<" ";
           }
        }
        cout<<endl;
        
    }
}
//press F6 to compile