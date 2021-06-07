#include <iostream>  
using namespace std;  
  
string binToHex(string);  
string hexToBin(string);  
  
int main (){  
    string a;  
    while(cin >> a){  
        if(a[0] == '#')  
            a = hexToBin(a);  
        else if(a[0] == '$')  
            a = binToHex(a);  
        cout << a << endl;  
    }  
}  
#include <map>
string hexToBin(string a){
    map<char,string> dic = {{'0',"0000"},{'1',"0001"},{'2',"0010"},{'3',"0011"},{'4',"0100"},{'5',"0101"},{'6',"0110"},{'7',"0111"},{'8',"1000"},{'9',"1001"},{'A',"1010"},{'B',"1011"},{'C',"1100"},{'D',"1101"},{'E',"1110"},{'F',"1111"}};
    string b = a.substr(1,a.length());
    string res;
    for (int i=0;i<b.length();i++){
        res+= dic[b[i]];
    }
    while (res[0]=='0' &&res.length()!=1){
        res = res.substr(1,res.length());
    }
    return res;
}

string binToHex(string a){
    a = a.substr(1,a.length() -1);
    while (a.length()%4!=0)
    {
        a = "0"+a;
    }
    map<string,string> dic = {{"0000","0"},{"0001","1"},{"0010","2"},{"0011","3"},{"0100","4"},{"0101","5"},{"0110","6"},{"0111","7"},{"1000","8"},{"1001","9"},{"1010","a"},{"1011","b"},{"1100","c"},{"1101","d"},{"1110","e"},{"1111","f"}};
    string res;
    while(a.length()!=0){
        string temp = a.substr(0,4);
        a = a.substr(4,a.length()-4);
        res+=dic[temp];
    }
    while (res[0]=='0' &&res.length()!=1){
        res = res.substr(1,res.length());
    }
    return res;
}