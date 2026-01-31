#include<iostream>
using namespace std;
int main(){
    string str="example";
    string tempt;
    tempt.append(str).append(str);
    cout<<tempt;

    return 0;
}