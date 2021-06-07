
#include<iostream>
#include<cmath>
using namespace std;
class Movie{
    private:
        string Name;
        string MPAA;
        int Rate[5];
    public:
        Movie(string,string);
        void addRating(int);
        int getAverage();
        void printInformation();
};
Movie::Movie(string name = "unknown",string mpaa = "unknown"){
    Name = name;
    MPAA = mpaa;
    for (int i=0;i<5;i++)
        Rate[i]= 0;
}
void Movie::addRating(int rate = 0){
    if(rate>0 && rate<=5)
        Rate[rate-1]++;
}
int Movie::getAverage(){
    double count = 0;
    double score = 0;
    for(int i=0;i<5;i++){
        score+=Rate[i]*(i+1);
        count += Rate[i];
    }
    if(!count)
        return 0;
    return ceil(score/count);
}
void Movie::printInformation(){
    cout<<Name<<" "<<MPAA<<endl;
}

int main(){
    Movie m1("Hello"), m2, m3("Merry Christmas", "PG");
    m1.printInformation();
    m1.addRating(3);
    m1.addRating(6);
    m1.addRating(4);
    cout << m1.getAverage() << endl;
    m2.printInformation();
    m3.printInformation();
    cout << m3.getAverage() << endl;
}
