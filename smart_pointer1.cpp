#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1(new int(12));    //variable ptr1,value 12
    cout << *ptr1 << endl;               // since ptr1 is a pointer we use * to access the value 
    return 0;
}
