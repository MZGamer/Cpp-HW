#include<iostream>
#include<map>
using namespace std;
int main(){
	string s;
	map<char,int> m = {{'A',0},{'B',0},{'C',0},{'D',0},{'E',0},{'F',0},{'G',0},{'H',0},{'I',0},{'J',0},{'K',0},{'L',0},{'M',0},{'N',0},{'O',0},{'P',0},{'Q',0},{'R',0},{'S',0},{'T',0},{'U',0},{'V',0},{'W',0},{'X',0},{'Y',0},{'Z',0}};

    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            char fin = s[i];
            if(fin>90){
                fin-=32;
            }
            m[fin]++;
        }
    }
    int max = 0;
    char mc;
    for (int i = 0; i < 26; i++)
    {
        if(m[char(65+i)]>max){
            mc = char(65+i);
            max = m[char(65+i)];
        }
    }
    cout<<mc<<" "<<max<<endl;
    

}