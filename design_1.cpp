#include<iostream>
#include<random>
#include<ctime>
#include<thread>
#include<chrono>


using namespace std;
int main(){
    int input,r_n;
    srand(time(0));
    cout<<"hello user ,this is number guessing game"<<endl<<"enter the number btw 0-3";
    cin>>input;
    cout<<"we are generating random number"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<" ...";
    this_thread::sleep_for(chrono::seconds(1));
    r_n=rand()%3; 
    if (input==r_n+1){
        cout<<"you guessed it!!!!!! the number was"<<r_n+1;
    }
    else{
        cout<<"the number was "<<r_n+1<<endl<<"try again later";
        return 0;
    }
}