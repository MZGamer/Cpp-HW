#include<bits/stdc++.h>

using namespace std;

struct sale {
    string divisionName;
    int Quarter;
    int quarterly_Sales;

};

int main() {
    fstream data("sales.dat", ios::out | ios::binary);
        if (!data) 
        {
            cout << "Error opening file. Program aborting.\n";
            return 0;
        }
        do 
        {
            string name;
            int q = 0;
            int salesnum = 0;
            getline(cin, name);
            do {
                cin>>q;
            } while (q>4 || q<1);
            cin>>salesnum;
            sale s;
            s.divisionName = name;
            s.Quarter = q;
            s.quarterly_Sales = salesnum;
            cout<<"write"<<endl;
            cout<<s.Quarter<<endl;
            data<<reinterpret_cast<char *>(&s);
            data.write(reinterpret_cast<char *>(&s), 
                        sizeof(s));
        } while (true);

        // Close file
        data.close();
        return 0;

}