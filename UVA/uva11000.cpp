#include<bits/stdc++.h>

using namespace std;

int main() {
    int year;
    while(cin>>year) {
        if(year == -1)
            break;
        long long int male = 0, female = 0;
        for(int i = 0;i < year; i ++) {
            long long int newyearmale = 1;
            long long int newyearfemale = 0;
            newyearmale += male + female;
            newyearfemale += male;
            male = newyearmale;
            female = newyearfemale;
        }
        cout<<male<<" "<<male+female+1<<endl;
    }
}
