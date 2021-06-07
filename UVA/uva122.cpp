#include<bits/stdc++.h>

using namespace std;

class node {
    public :
        node(int value) {
            this->value = value;
            this->left = nullptr;
            this->right = nullptr;
        }
        int value;
        node *left;
        node *right;
        bool output(vector<vector<int>> &Queue, int level);
};

bool node :: output(vector<vector<int>> &Queue, int level) {
    if(this->value == -1) {
        return false;
    } else {
        //cout<<Queue.size()<<endl;
        while(Queue.size() <= level) {
            vector<int> push;
            Queue.push_back(push);
        }
        Queue[level].push_back(this->value);
    }
    bool chk = true;
    if(this->left != nullptr) {
        chk = this->left->output(Queue, level +1);
    }
    if (chk == true && this->right != nullptr) {
        chk = this->right->output(Queue, level +1);
    }
    return chk;
}

int main() {
    int mode;// 0 = other 1 = int 2 = side
    char input;
    string side = "";
    int value = 0;
    bool output = false;
    bool flag = false;
    node *head = new node(-1);
    vector<vector<int>> Queue;
    while(cin>>input) {
        if(input == '(') {
            mode = 1;
            value = 0;
            continue;
        } else if (input == ',') {
            mode = 2;
            side = "";
            continue;
        } else if (input == ')') {
            if(mode == 1)
                output = true;
            mode = 0;
        }
        if (mode == 1) {
            value = value * 10 + (input - '0');
        } else if (mode == 2) {
            side += input;
        } else if (mode == 0) {
            if(!output) {
                node *temp = head;
                for(int i=0;i<side.size();i++) {
                    if(side[i] == 'L') {
                        if(temp->left!=nullptr) {
                            temp = temp->left;
                        } else {
                            temp->left = new node(-1);
                            temp = temp->left;
                        }
                    } else if (side[i] == 'R') {
                        if(temp->right!=nullptr) {
                            temp = temp->right;
                        } else {
                            temp->right = new node(-1);
                            temp = temp->right;
                        }
                    }
                }
                if(temp->value != -1)
                    flag = true;
                temp->value = value;
            } else {
                vector<vector<int>> Queue(1);
                bool check = false;
                check = head->output(Queue, 0);
                if(check && !flag) {
                    bool hasout = false;
                    for(int i=0;i<Queue.size();i++) {
                        for(int k=0 ;k<Queue[i].size();k++) {
                            if(hasout) {
                                cout << " ";
                            }
                            cout<<Queue[i][k];
                            hasout = true;
                        }
                    }
                    cout<<endl;
                } else {
                    cout<<"not complete"<<endl;
                }
                delete head;
                head = new node(-1);
                output = false;
                flag = false;
            }
        }
    }
}
