
#include<iostream>
#include<vector>
#include <queue>
using namespace std;
int sum(int);

int main(){
    int n,s = 0;
    s = sum(n);
    cout<<s<<endl;
    
}
int sum(int n){
    int sum = 0;
    cin>>n;
    if(n<0)
        sum = 0;
    else{
        for(int i=1;i<=n;i++)
            sum+=i;
    }
    return sum;
    
}

