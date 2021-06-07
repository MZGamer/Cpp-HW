#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    set<int>x,y;
    for (int i=0;i<a;i++){
        int temp;
        cin>>temp;
        x.insert(temp);
    }
    for(int i = 0;i<b;i++){
        int temp;
        cin>>temp;
        y.insert(temp);
    }
    char fun;
    while(cin>>fun){
        if(fun == 'A'){
            set<int>ans;
            set_intersection(x.begin(),x.end(),y.begin(),y.end(),inserter(ans,ans.begin()));
            bool flag = false;
            for(auto i : ans){
                if(flag)
                    cout<<" ";
                flag = true;
                cout<<i;
            }

        }
        if(fun == 'O'){
            set<int>ans;
            set_union(x.begin(),x.end(),y.begin(),y.end(),inserter(ans,ans.begin()));
            bool flag = false;
            for(auto i : ans){
                if(flag)
                    cout<<" ";
                flag = true;
                cout<<i;
            }
        }
        if(fun == 'N'){
            set<int>ans;
            set_difference(x.begin(),x.end(),y.begin(),y.end(),inserter(ans,ans.begin()));
            bool flag = false;
            for(auto i : ans){
                if(flag)
                    cout<<" ";
                flag = true;
                cout<<i;
            }

        }
        if(fun == 'X'){
            set<int>ans,x1,x2;
            set_difference(x.begin(),x.end(),y.begin(),y.end(),inserter(x1,x1.begin()));
            set_difference(y.begin(),y.end(),x.begin(),x.end(),inserter(x2,x2.begin()));
            set_union(x1.begin(),x1.end(),x2.begin(),x2.end(),inserter(ans,ans.begin()));
            bool flag = false;
            for(auto i : ans){
                if(flag)
                    cout<<" ";
                flag = true;
                cout<<i;
            }
        }
        cout<<endl;
    }
}

