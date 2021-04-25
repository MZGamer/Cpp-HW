
#include<bits/stdc++.h>
using namespace std;

struct bomb
{
    int row;
    int col;
    bomb(int r,int c){
        row = r;
        col = c;
    }
};
void sol(int R,int C, char (&m)[10][10]){
    if(m[R][C] != '*'){
        //cout<<R<<" "<<C<<endl;
        if(m[R][C] == '-')
            m[R][C] ='1';
        else
            m[R][C] ++;
    }
}

int main(){
    int n;
    cin>>n;
    vector<bomb> v;
    char m[10][10];
    //vector<vector<char>> m(n, vector<char>(n)); 
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin>>m[i][k];
            if(m[i][k] == '*'){
                v.push_back(bomb(i,k));
            }
        }
    }
    for(int i=0;i<int(v.size());i++){
        int R = v[i].row,C = v[i].col;
        if(C-1>=0){
            sol(R,C-1,m);
            if(R-1>=0){
                sol(R-1,C-1,m);
            }
            if(R+1<n){
                sol(R+1,C-1,m);
            }
        }
        if(R-1>=0){
            sol(R-1,C,m);
        }
        if(R+1<n){
            sol(R+1,C,m);
        }
        if(C+1<n){
            sol(R,C+1,m);
            if(R-1>=0){
                sol(R-1,C+1,m);
            }
            if(R+1<n){
                sol(R+1,C+1,m);
            }
        }
        //cout<<"next"<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cout<<m[i][k];
        }
        cout<<endl;
    }
}