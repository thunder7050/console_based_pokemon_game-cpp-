#include<iostream>
using namespace std;
template<class tmpnm>
tmpnm fnc( tmpnm a, tmpnm b){
    return (a>b)?a:b; //compact way of writing if else --> condition ? if true return a :else return b
}
int main(){
    cout<<fnc<int>(3,.6)<<endl;

return 0;
}