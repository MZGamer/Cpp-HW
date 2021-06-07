#include <iostream>  
using namespace std;  
  
string intToString(int);  
int stringToInt(string);  
  
int main (){  
    long long n = 2147483648;  
    int a;  
    string b;  
    cin >> a >> b;  
    string s = intToString(a);          //convert integer to string  
    int number = stringToInt(b);        //convert string to integer  
    for(int t = 0;t < s.size(); t++){  
        cout << s[t];  
    }  
    cout << endl;  
    cout << number % n << endl;  
}
#include <sstream> 
string intToString(int a){
	stringstream s;
	string b;
	s << a;
	s >> b;
	return b;
	
}

int stringToInt(string a){
	stringstream s;
	int b;
	s << a;
	s >> b;
	return b;
	
}
