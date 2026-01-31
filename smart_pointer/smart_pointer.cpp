#include<iostream>
using namespace std;
int main(){
    while(1){               //infinite loop bcz >>while (true)<<
        int * ptr=new int;  //auto memory allocation free memory used by pointer
        cout<<ptr<<endl;  //printing address of allocated memory 
        delete ptr;       //deleting the allocated memory >>imp step to avoid memory leak<<
    }
    return 0;
}