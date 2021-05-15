#include<bits/stdc++.h>

using namespace std;

void DFS(int x, int y, int k, int i, vector<vector<char>> &map) {
    //cout<<k<<" "<<i<<endl;
    map[i][k] = 'X';
    if(k != x-1) {
        // 往右看
        if(map[i][k+1] == '@') {
            DFS(x,y,k+1,i,map);
        }

        //往右下看
        if(i != y-1) {
            if(map[i+1][k+1] == '@') {
                DFS(x,y,k+1,i+1,map);
            }
        }
    }

    if(i != y-1) {
        //往下看
        if(map[i+1][k] == '@') {
            DFS(x,y,k,i+1,map);
        }
        //往左下看
        if(k != 0) {
            if(map[i+1][k-1] == '@') {
                DFS(x,y,k-1,i+1,map);
            }
        }

    }
    //往右看
    if(k != 0) {
        if(map[i][k-1] == '@') {
            DFS(x,y,k-1,i,map);
        }
    }
    if(i != 0) {
        //往上看
        if(map[i-1][k] == '@') {
            DFS(x,y,k,i-1,map);
        }

        //往左上看
        if(k != 0 && map[i-1][k-1] == '@') {
            DFS(x,y,k-1,i-1,map);
        }

        //往右上看
        if(k != x-1 && map[i-1][k+1] == '@') {
            DFS(x,y,k+1,i-1,map);
        }
    }
}

int main() {
    int y,x;
    while (cin>>y>>x) {
        if(y == 0 && x == 0) {
            break;
        } 

        int ans = 0;
        vector<vector<char>> map;
        bool isvisit [y][x];
        for(int i = 0; i < y; i++) {
            vector<char> t;
            for(int k = 0; k < x; k++) {
                char temp;
                cin>>temp;
                t.push_back(temp);
            }
            map.push_back(t);
        }

        for(int i = 0; i < y; i++) {
            for(int k = 0; k < x; k++) {
                if (map[i][k] == '@') {
                    DFS(x,y,k,i,map);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;


    }
    
}
