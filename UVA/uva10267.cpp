#include<iostream>  
using namespace std;  
class Graph{  
public:  
    Graph(int,int);  
    void J(char);  
    void C();  
    void L(int,int,char);  
    void V(int,int,int,char);  
    void H(int,int,int,char);  
    void K(int,int,int,int,char);  
    void F(int,int,char);  
    void S(string);  
private:  
    char **map;  
    int M,N;  
};  

Graph :: Graph(int x,int y) {
    M = y;
    N = x;
    map = new char *[y];
    for(int i=0;i<y;i++) {
        map[i] = new char [x];
        for(int k=0;k<x;k++) {
            map[i][k] = 'O';
        }
    }

}

void Graph :: J(char fill) {
    for(int i=0;i<M;i++) {
        for(int k=0;k<N;k++) {
            map[i][k] = fill;
        }
    }
}

void Graph :: C() {
    J('O');
}

void Graph :: L(int x,int y ,char fill) {
    map[y-1][x-1] = fill;
}

void Graph :: V(int x,int y1,int y2,char fill) {
    if(y1 > y2)
        swap(y1,y2);
    for(int i=y1-1;i<y2;i++) {
        map[i][x-1] = fill;
    }
}

void Graph :: H(int x1,int x2,int y,char fill) {
    if(x1 > x2)
        swap(x1,x2);
    for(int i=x1-1;i<x2;i++) {
        map[y-1][i] = fill;
    }
}

void Graph :: K(int x1, int y1, int x2, int y2,char fill) {
    if(y2 < y1)
        swap(y1,y2);
    for(int i=y1-1;i<y2;i++) {
        for(int k=x1-1;k<x2;k++) {
            map[i][k] = fill;
        }
    }
}

void Graph :: F(int x,int y,char fill) {
    char target = map[y-1][x-1];
    if(target == fill)
        return;
    map[y-1][x-1] = fill;
    //看上面
    if(y != 1) {
        //正上
        if(map[y-2][x-1] == target) {
            F(x, y-1,fill);
        }

        //右上
        if(x != N) {
            if(map[y-2][x] == target) {
                F(x+1, y-1,fill);
            }
        }

        //左上
        if(x != 1) {
            if(map[y-2][x-2] == target) {
                F(x-1, y-1,fill);
            }
        }

    }
    //看中

    //看左
    if(x != 1) {
        //cout<<y-1<<" "<<x-2<<endl;
        //cout<<map[y-1][x-2]<<endl;
        if(map[y-1][x-2] == target) {
            F(x-1, y,fill);
        }
    }
    //看右
    if(x != N) {
        if(map[y-1][x] == target) {
            F(x+1, y,fill);
        }
    }

    //看下
    if(y != M) {
        //正下
        if(map[y][x-1] == target) {
            F(x, y+1,fill);
        }

        //右下
        if(x != N) {
            if(map[y][x] == target) {
                F(x+1, y+1,fill);
            }
        }

        //左下
        if(x != 1) {
            if(map[y][x-2] == target) {
                F(x-1, y+1,fill);
            }
        }

    }
    return;
}

void Graph :: S(string filename) {
    cout<<filename<<endl;
    for(int i=0;i<M;i++) {
        for(int k=0;k<N;k++) {
            cout<<map[i][k];
            /*if(k+1 != N) {
                cout<<" ";
            }*/
        }
        cout<<endl;
    }
}
int main(){  
    char c;  
    bool flag=0;  
    cin >> c; //c='I'  
    int m, n;  
    cin >> m >> n;  
    Graph g(m,n);  
    char ch; //colour  
    int x, y, x1, x2, y1, y2; // coordinate  
    string s; //name  
    while(cin >> c){  
        switch (c){  
        case 'I':
            cin >> m >> n;
            g = * new Graph(m,n);
            break;
        case 'J':  
            cin >> ch;  
            g.J(ch);  
            break;  
        case 'C':  
            g.C();  
            break;  
        case 'L':  
            cin >> x >> y >> ch;  
            g.L(x,y,ch);  
            break;  
        case 'V':  
            cin >> x >> y1 >> y2 >> ch;  
            g.V(x,y1,y2,ch);  
            break;  
        case 'H':  
            cin >> x1 >> x2 >> y >> ch;  
            g.H(x1,x2,y,ch);  
            break;  
        case 'K':  
            cin >> x1 >> x2 >> y1 >> y2 >> ch;  
            g.K(x1,x2,y1,y2,ch);  
            break;  
        case 'F':  
            cin >> x >> y >> ch;  
            g.F(x,y,ch);  
            break;  
        case 'S':  
            cin >> s;  
            g.S(s);  
            break;  
        case 'X':  
            flag=1;  
            break;  
        default:  
            getline(cin, s);  
            break;  
        }  
        if(flag)  
            break;  
    }  
}  