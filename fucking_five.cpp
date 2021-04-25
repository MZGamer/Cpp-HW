#include <iostream>
#include <map>
using namespace std;
int main(){
    string d1,d2;
    getline(cin,d1);
    getline(cin,d2);
    int year[2] = {atoi(d1.substr(0,4).c_str()) , atoi(d2.substr(0,4).c_str())};
    int month[2] = {atoi(d1.substr(5,2).c_str()) , atoi(d2.substr(5,2).c_str())};
    int day[2] = {atoi(d1.substr(8,2).c_str()) , atoi(d2.substr(8,2).c_str())};
    int hour[2] = {atoi(d1.substr(11,2).c_str()) , atoi(d2.substr(11,2).c_str())};
    int min[2] = {atoi(d1.substr(14,2).c_str()) , atoi(d2.substr(14,2).c_str())};
    map<int,int> mtable = {
        {1,31},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}
    };

}
//2020/10/14 20:00