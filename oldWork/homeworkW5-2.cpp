#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main (){
    string s1,s2;
    cin>>s1>>s2;
    int hour[2] = {(s1[0] - 48)*10 + (s1[1] - 48),(s2[0] - 48)*10 + (s2[1] - 48)};
    int min[2] = {(s1[3] - 48)*10 + (s1[4] - 48),(s2[3] - 48)*10 + (s2[4] - 48)};
    int sec[2] = {(s1[6] - 48)*10 + (s1[7] - 48),(s2[6] - 48)*10 + (s2[7] - 48)};
    int money = 0;
    money += abs(hour[1] - hour[0]);
    if(min[1]-min[0]>0){
        money++;
    }
    else if (min[1]-min[0] == 0){
        if(sec[1] - sec[0]>0)
            money++;
    }
    if(money !=0)
        money--;
    cout<<money*20<<endl;

}
//press F6 to compile