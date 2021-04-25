#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
using namespace std;
int main (){
    string a[5] = {"    *","    *","    *","    *","    *"};
    string b[5] = {"*****","    *","*****","*    ","*****"};
    string c[5] = {"*****","    *","*****","    *","*****"};
    string d[5] = {"*   *","*   *","*****","    *","    *"};
    string e[5] = {"*****","*    ","*****","    *","*****"};
    string f[5] = {"*****","*    ","*****","*   *","*****"};
    string g[5] = {"*****","    *","    *","    *","    *"};
    string h[5] = {"*****","*   *","*****","*   *","*****"};
    string m[5] = {"*****","*   *","*****","    *","*****"};
    string j[5] = {"*****","*   *","*   *","*   *","*****"};
    char num[3];
    cin>>num[0]>>num[1]>>num[2];
    string data[3][5];
    for(int i=0;i<3;i++){
        if(num[i] == '1')
            for(int y=0;y<5;y++){
                data[i][y] = a[y];
            }
        else if(num[i] == '2')
            for(int y=0;y<5;y++){
                data[i][y] = b[y];
            }
        else if(num[i] == '3')
            for(int y=0;y<5;y++){
                data[i][y] = c[y];
            }
        else if(num[i] == '4')
            for(int y=0;y<5;y++){
                data[i][y] = d[y];
            }
        else if(num[i] == '5')
            for(int y=0;y<5;y++){
                data[i][y] = e[y];
            }
        else if(num[i] == '6')
            for(int y=0;y<5;y++){
                data[i][y] = f[y];
            }
        else if(num[i] == '7')
            for(int y=0;y<5;y++){
                data[i][y] = g[y];
            }
        else if(num[i] == '8')
            for(int y=0;y<5;y++){
                data[i][y] = h[y];
            }
        else if(num[i] == '9')
            for(int y=0;y<5;y++){
                data[i][y] = m[y];
            }
        else if(num[i] == '0')
            for(int y=0;y<5;y++){
                data[i][y] = j[y];
            }       
    }
    for(int i=0;i<5;i++){
        cout<<data[0][i]<<" "<<data[1][i]<<" "<<data[2][i]<<endl;
    }

}
//press F6 to compile