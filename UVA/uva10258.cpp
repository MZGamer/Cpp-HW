#include<bits/stdc++.h>

using namespace std;

struct contestants {
    int id;
    bool played = false;
    int solved = 0;
    int ptime[10];
    bool solq[10] = {false,false,false,false,false,false,false,false,false,false};
    int time = 0;
};

bool comp(contestants a, contestants b) {
    if(a.solved != b.solved)
        return a.solved >b.solved ? true : false;
    else if(a.time != b.time){
        return a.time >b.time ? false : true;
    } else {
        return a.id >b.id ? false : true;
    }
    
}

int main() {
    int count;
    cin>>count;
    string temp;
    bool flag = false;
    getline(cin,temp);
    getline(cin,temp);
    while(count > 0) {
        contestants *s = new contestants;
        for(int i=0;i<10;i++)
            s->ptime[i] = 0;
        vector<contestants> cons(100,*s);
        while(true) {
            stringstream s;
            int ID,qid,time;
            char res;
            string temp = "";
            getline(cin,temp);
            if(temp == "") {
                if(flag)
                    cout<<endl;
                vector<contestants> ans;
                for(int i=0;i<100;i++) {
                    if (cons[i].played) {
                        ans.push_back(cons[i]);
                    }
                }
                sort(ans.begin(),ans.end(),comp);
                for(int i=0;i<ans.size();i++) {
                    cout<<ans[i].id<<" "<<ans[i].solved<<" "<<ans[i].time<<endl;
                }
                count--;
                flag = true;
                break;
            }
            s<<temp;
            s>>ID>>qid>>time>>res;
            cons[ID-1].played = true;
            cons[ID-1].id = ID;
            if(res == 'I' && cons[ID-1].solq[qid-1] == false) {
                cons[ID-1].ptime[qid-1]+=20;
            } else if (res == 'C' && cons[ID-1].solq[qid-1] == false) {
                cons[ID-1].solq[qid-1] = true;
                cons[ID-1].solved++;
                cons[ID-1].time+=time + cons[ID-1].ptime[qid-1];
            }
        }

    }

}
