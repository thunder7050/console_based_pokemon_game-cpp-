#include<iostream>
//#define n 45
using namespace std;
int main(){
    int n=100;
    cout<< "value of n is at address of %d "<<&n;
    cout<<"\tvalue of n is"<<n;

    int *ptr=&n;
    cout <<" *ptr and n are different variable but they share a same memory location \nthat means if u change any thing *ptr that change will carry forwared to n";
    *ptr =12;
    cout <<endl<<"new value of n is "<<n<<endl;
    cout <<"we can also call it by its pointer"<<*ptr<<endl;
    n=17;
    cout <<endl<<"new value is changed again  "<<n<<endl;
    cout <<"it change the value again "<<*ptr<<endl;



    return 0;
}