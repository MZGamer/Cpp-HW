#include <iostream>
using namespace std;
#include<iostream>  
using namespace std;  
int A[100];  
void mySort(int siz);  
int main()  
{  
    int n;  
    cin >> n;  
    for(int i=0; i<n; i++)  
        cin >> A[i];  
    mySort(n);  
    for(int i=0; i<n; i++){  
        if(i)  
            cout << ' ';  
        cout << A[i];  
    }  
    cout << endl;  
} 
void mySort(int siz){
    int temp;
    for(int i=0;i<siz;i++){
        for(int k=0;k<siz-1;k++){
            if(A[k]>A[k+1]){
                temp = A[k];
                A[k] = A[k+1];
                A[k+1] = temp;
            }
        }
    }
}
//press F6 to compile