#include<iostream>
#include<random>
#include<ctime>
#include<thread>
#include<chrono>
#include<cstring>
#include"filehandling.h"
using namespace std;
//creating first character class 
class character1{
    public:
    int health;
    int level;
    string name;

};
//creating second chahracter class
class character2{
    public:
    int health;
    int level;
    string name;

};
int attack_p1(){
    int attack1;
    cout<<"player 1 is listening"<<endl;
    cout<<"you have 2 attack and a defence skill"<<endl;         //this user will always be here 
    cout<<"choose your attack or defence "<<endl;
    cout<<"1)heavy attack"<<endl;
    cout<<"2)quick attck"<<endl;
    cout<<"3)defend he attack"<<endl;
    cin>>attack1;
    return attack1;
}
int attack_p2(){
    int attack2;
    cout<<endl<<"player 2 is listening"<<endl;
    cout<<"you have 2 attack and a defence skill"<<endl;       //user2 only activate when 2 player mode si choosen
    cout<<"choose your attack or defence "<<endl;
    cout<<"1)heavy attack"<<endl;
    cout<<"2)quick attck"<<endl;
    cout<<"3)defend he attack"<<endl;
    cin>>attack2;
    return attack2;
}
int cpm_mode(){
    int cpm_attack;
    srand(time(0));
    cout<<"WAIT CPM IS THINKINGGGGGGG";                      //cpm will play against u with some added dealy 
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"\nstill thinkinggggggggg\n";
    this_thread::sleep_for(chrono::seconds(1));
    cpm_attack=rand()%3 +1;
    cout<<cpm_attack;
    return cpm_attack;
}
//creating fight function that changes health of the players     //below is the logic of the programme
int fight(int a1,int a2,character1 &pokemon1,character2 &pokemon2, int flag){     // heavy attack do destroy defence=>defender-20,quick attack doesnot destroys defence=>attacker-10,quick attack destroy heavy attack=>heavy attacker-15 
    while (pokemon1.health >0 && pokemon2.health>0 ){
        if(a1==1 && a2==1){
        pokemon1.health=pokemon1.health -0;
        pokemon2.health= pokemon2.health -0;
        }
    
    
        else if (a1==1 && a2==2){
        pokemon1.health=pokemon1.health -15;
        pokemon2.health= pokemon2.health -0;

        }
        else if (a1==1 && a2==3){
        pokemon1.health=pokemon1.health-0;
        pokemon2.health= pokemon2.health -20;

    
        }
        else if (a1==2 && a2==1){
        pokemon1.health=pokemon1.health-0;
        pokemon2.health= pokemon2.health -15;

        }
        else if (a1==2 && a2==2){
        pokemon1.health=pokemon1.health-5;
        pokemon2.health= pokemon2.health -5;

        }
        else if (a1==2 && a2==3){
        pokemon1.health= pokemon1.health -10;
        pokemon2.health= pokemon2.health -0;
        }
        else if (a1==3 && a2==1){
        pokemon1.health= pokemon1.health -20;
        pokemon2.health= pokemon2.health -0;
        }
        else if (a1==3 && a2==2){
        pokemon1.health= pokemon1.health -0;
        pokemon2.health= pokemon2.health -10;
        }
        else if (a1==3 && a2==3){
        pokemon1.health= pokemon1.health -0;
        pokemon2.health= pokemon2.health -0;
        }
        else if (a1>3 ||a1==0 || a2>3 ||a2==0){
            cout<<"\nYOU HAVE ENTERED WRONG SELECTION CHOICE \nENTER AGAIN  \n"<<endl;
        }
        

    cout<<"\n \tplayer 1 has "<<pokemon1.health<<"% health left"<<endl;
    cout<<"\n \tplayer 2 has "<<pokemon2.health<<"% health left"<<endl;

    
    //condition for exit
    if (pokemon1.health>0 && pokemon2.health>0){
        if (flag==1){
            a1=attack_p1();
            a2=cpm_mode();

        }
        else{
            
            a1=attack_p1();
            a2=attack_p2();
        }
    }
    else{
        if(pokemon1.health <=0){
            cout<<"PLAYER 2 WINS"<<endl;
            updatelevel();
    } 
        else if(pokemon2.health<=0){
            cout<<"PLAYER 1 WINS"<<endl;
            updatelevel();
    }
    }
    
    
    }
    return 0;
}


int main(){
    int flag;
    cout<<"hello welcome to mini pokemon game"<<endl;
    cout<<"if you want to start computer oriented run "<<endl<<"(single player mode) [press 1]"<<endl;
    cout<<"if you want to stat two player mode [press 2]"<<endl;
    cin>>flag;
    //----------------------
    menu(flag);
    //---------------------
    character1 pokemon1;
    character2 pokemon2;
    pokemon1.health=100;
    pokemon1.level=1;
    pokemon2.health=10;
    pokemon2.level=1;
    cout <<"player 1 has health:"<<pokemon1.health<<endl; 
    cout <<"player 2 has health:"<<pokemon2.health<<endl; 
    if (flag ==1){ 
        cout<<"you have entered in single player mode"<<endl;
        int a1,a2;
        a1=attack_p1();
        a2=cpm_mode();
        fight(a1, a2,pokemon1, pokemon2,flag);
    }
    else if (flag ==2){
        cout<<"you have entered in two player mode"<<endl;
        int a1,a2;
        a1=attack_p1();           //function will call att1 where user will input thier choice of attack in number
        a2=attack_p2();           //function will call att2 where user will input thier choice of attack in number
        fight(a1, a2, pokemon1,pokemon2,flag);                     //here a1 and a2 are used as numbers 1,2 and 3 that will help in further operations
        return 0;
    }
    else{
        cout<<"YOU HAVE ENTERRED WRONG CHOICE "<<endl;
    }
}
