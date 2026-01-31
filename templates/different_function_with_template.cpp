#include<iostream>
using namespace std;
template< class t1,class t2>
class c1{
    public:
    t1 a;
    t2 b;
    c1(t1 x,t2 y){
        a=x;
        b=y;
    }
    display(){
        cout<<"this is t1="<<a<<endl<<"this is t2="<<b<<endl; 
    }

};
int main(){
    c1<int ,char>obj1(1,'h');
    obj1.display();
    return 0;
}