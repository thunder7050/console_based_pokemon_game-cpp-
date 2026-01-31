#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main(){
    char strname[10]="ABCDE";
    stack<char> stkname;

    for (int i=0;i<strlen(strname);i++){
        stkname.push(strname[i]);
        cout<<strname[i]<<endl;
    }
    for (int i=0;i<strlen(strname);i++){           //alternate is written below using while loop
        cout<<stkname.top()<<"\t";stkname.pop();
    }
    // while(!stkname.empty()){           
    //     cout<<stkname.top()<<"\t";stkname.pop();
    // }

    return 0;
}