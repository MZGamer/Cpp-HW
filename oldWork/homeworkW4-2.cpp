#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
class rps{
    public:
        char Win;
        char Lose;
        rps(char W,char L){
            Win = W;
            Lose = L;

        }
};
int main (){
    rps R = rps('S','P');
    rps P = rps('R','S');
    rps S = rps('P','R');
    rps chk[3] = {R,P,S};
    char in;
    unsigned seed = time(0);
    srand(seed);
    cout<<"請出拳 S表示剪刀; R表示石頭; P表示布";
    cin>>in;
    int com = rand() %3;
    cout<<com;
    if(chk[com].Win == in){
        cout<<"WIN"<<endl;
    }
    else if (chk[com].Lose == in){
        cout<<"LOSE"<<endl;
    }
    else{
        cout<<"TIE"<<endl;
    }


}
//press F6 to compile