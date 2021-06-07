
#include<bits/stdc++.h>
using namespace std;

struct car
{
    int row;
    int col;
    car(int r,int c){
        row = r;
        col = c;
    }
};
void sol(int R,int C, char (&m)[10][10]){
    if(m[R][C] != '1'){
            m[R][C] ='x';

    }
}

int main(){
    int n;
    while(cin>>n){
        vector<car> v;
        char m[10][10];
        //vector<vector<char>> m(n, vector<char>(n)); 
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                cin>>m[i][k];
                if(m[i][k] == '1'){
                    v.push_back(car(i,k));
                }
            }
        }
        for(int i=0;i<int(v.size());i++){
            int R = v[i].row,C = v[i].col;
            if(C-1>=0){
                for(int k=C-1;k>=0;k--){
                    sol(R,k,m);
                }
            }
            if(R-1>=0){
                for(int k=R-1;k>=0;k--){
                    sol(k,C,m);
                }
            }
            if(R+1<n){
                for(int k=R+1;k<n;k++){
                    sol(k,C,m);
                }
            }
            if(C+1<n){
                for(int k=C+1;k<n;k++){
                    sol(R,k,m);
                }
            }
            //cout<<"next"<<endl;
        }
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                if(m[i][k] != '.')
                    cout<<m[i][k];
                else
                    cout<<'o';
                
            }
            cout<<endl;
        }
    }
}