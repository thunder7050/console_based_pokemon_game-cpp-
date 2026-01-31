#include<iostream>
using namespace std;
template<class tmpnm>
class clsnm{
    public:
    tmpnm v1;
    tmpnm * heap;
    int n=6;
    clsnm (tmpnm v2){      //the contructor
    v1=v2;
    heap=new tmpnm[n]; 
    };
    ~clsnm(){
        delete[] heap;         //u have to delete memory after u are done else it will creat a memory leak
    };

     tmpnm getValue() {return v1;}
     
};
int main(){
    clsnm<int>name1(32);        //this will work as a function call to the contructor
    cout<<name1.getValue();
    return 0;
}