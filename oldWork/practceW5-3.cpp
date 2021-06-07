#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    string a[10] = {"甲","乙","丙","丁","戊","己","庚","辛","壬","癸"};
    string b[12] = {"子","丑","寅","卯","辰","巳","午","未","申","酉","戌","亥"};
    int year;
    cin>>year;
    year = (year-3)%60;
    int d,e;
    if(year%10-1 == -1)
        d = 9;
    else
        d = year%10-1;
    if(year%12-1 == -1)
        e = 11;
    else
        e = year%12-1;
    cout<<a[d]<<b[e]<<endl;
}
//press F6 to compile