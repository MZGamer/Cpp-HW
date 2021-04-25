#include<bits/stdc++.h>

using namespace std;

int main() {
    int count;
    string temp;
    int c = 1;
    while(cin>>count) {
        if(count == 0)
            break;
        getline(cin,temp);
            cout<<"Case " << c << ":"<<endl;
            printf("#include<string.h>\n"
                    "#include<stdio.h>\n"
                    "int main()\n" 
                    "{\n");
            string s;
            for(int i=1;i<=count;i++) {
                getline(cin,s);
                string ans = "printf(\"";
                for(int k = 0;k<s.size();k++) {
                    if(s[k] == '"' || s[k] == '\\') {
                        ans +="\\";
                    }
                    ans += s[k];
                }
                ans += "\\n\");";
                printf("%s\n",ans.c_str());
            }
            printf("printf(\"\\n\");\n"
                    "return 0;\n"
                    "}\n");
        c++;
    }
    
}
