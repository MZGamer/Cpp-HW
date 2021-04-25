
#include<iostream>
#include<vector>
#include <queue>
using namespace std;
class treeNode{
    public:
        treeNode *Left = nullptr;
        treeNode *Right = nullptr;
        int start;
        int end;
        int sum;
        treeNode(vector<int> v, int st,int en){
            this->start = st;
            this->end = en;
            int mid = (st+en)/2;
            if(st < en){
                this -> Left = new treeNode(v,st,mid);
                this -> Right = new treeNode(v,mid+1,en);
            }
            else if(st ==en){
                this->sum = v[st];
                return;
            }
            this->sum = this ->Left->sum + this->Right->sum;

        }
};

void bfsPrint(treeNode* root){
    queue<treeNode*> que;
    que.push(root);
    while(!que.empty()){
        cout << que.front()->sum << " ";
        que.push(que.front()->Left);
        que.push(que.front()->Right);
        que.pop();
    }
}

int searchtree(treeNode *,int,int);
int main(){
    int size;
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    treeNode *root = new treeNode(v,0,v.size()-1);
    //bfsPrint(root);
    int count;
    cin>>count;
    for(int i=0;i<count;i++){
        int a,b;
        cin>>a>>b;
        cout<<searchtree(root,a-1,b-1)<<endl;
    }
}
int searchtree(treeNode * root ,int st,int en){
    float mid = (root->start+root->end)/2.0;
    if (root->start == st && root->end == en){
        return root->sum;
    }
    else if(root->Left->end>=st && root->Right->start <=en){
        return searchtree(root ->Left ,st,root->Left->end) + searchtree(root ->Right ,root->Right->start,en);
    }
    else if(st>mid)
        return searchtree(root ->Right ,st,en);
    else if(en<mid){
        return searchtree(root ->Left ,st,en);
    }
    else if(en == root ->Left -> end){
        return searchtree(root ->Left ,st,en);
    }
    else if(st == root ->Right -> start){
        return searchtree(root ->Right ,st,en);
    }
}

