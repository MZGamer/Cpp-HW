#include<bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;
    for(int i = 0; i < count; i++) {
        string question, ans;
        cin >> question;
        char target = ' ';
        int need = 0;
        for(int k = 1; k <= question.size(); k++) {
            if (question[k - 1] < '0' || question[k - 1] > '9') {
                if(target != ' ') {
                    for(int q = 0; q < need ; q++) {
                        ans += target;
                    }
                }
                target = question[k - 1];
                need = 0;
            } else {
                need *= 10;
                need += int (question[k - 1]) -48;
            }

        }
        if(target != ' ') {
            for(int q = 0; q < need ; q++) {
                ans += target;
            }
        }
        cout<<"Case " << i+1 << ": " << ans << endl;
    }
}
