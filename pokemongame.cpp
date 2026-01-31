#include<iostream>
using namespace std;
//creating first character class 
class character1{
    public:
    int health;
    int level;
    char name;

};
//creating second chahracter class
class character2{
    public:
    int health;
    int level;
    char name;

};
int attack_p1(){
    int attack1;
    cout<<"player 1 is listening"<<endl;
    cout<<"you have 2 attack and a defence skill"<<endl;
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
    cout<<"you have 2 attack and a defence skill"<<endl;
    cout<<"choose your attack or defence "<<endl;
    cout<<"1)heavy attack"<<endl;
    cout<<"2)quick attck"<<endl;
    cout<<"3)defend he attack"<<endl;
    cin>>attack2;
    return attack2;
}
//creating fight function that changes health of the players
int fight(int a1,int a2,int health1,int health2){     // heavy attack do destroy defence=>defender-20,quick attack doesnot destroys defence=>attacker-10,quick attack destroy heavy attack=>heavy attacker-15 
    while (health1 >0 && health2>0 ){
        if(a1==1 && a2==1){
        health1= health1 -0;
        health2= health2 -0;
        }
    
    
        else if (a1==1 && a2==2){
        health1= health1 -15;
        health2= health2 -0;

        }
        else if (a1==1 && a2==3){
        health1= health1 -0;
        health2= health2 -20;

    
        }
        else if (a1==2 && a2==1){
        health1= health1 -0;
        health2= health2 -15;

        }
        else if (a1==2 && a2==2){
        health1= health1 -5;
        health2= health2 -5;

        }
        else if (a1==2 && a2==3){
        health1= health1 -10;
        health2= health2 -0;
        }
        else if (a1==3 && a2==1){
        health1= health1 -20;
        health2= health2 -0;
        }
        else if (a1==3 && a2==2){
        health1= health1 -0;
        health2= health2 -10;
        }
        else if (a1==3 && a2==3){
        health1= health1 -0;
        health2= health2 -0;
        }
        else if (a1>3 || a2>3){
            cout<<"\nYOU HAVE ENTERED WRONG SELECTION CHOICE \n ENTER AGAIN \n \n"<<endl;
        }
    cout<<"player 1 has "<<health1<<"% health left"<<endl;
    cout<<"player 2 has "<<health2<<"% health left"<<endl;
    if (health1>0 && health2>0){
        a1=attack_p1();
        a2=attack_p2();
    }

    
    
    }
    return 0;
    
   
}





int main(){
    cout<<"hello welcome to mini pokemon game"<<endl;

    character1 pokemon1;
    character2 pokemon2;
    pokemon1.health=100;
    pokemon1.level=1;
    pokemon2.health=100;
    pokemon2.level=1;
    cout <<"player 1 has health:"<<pokemon1.health<<endl; 
    cout <<"player 2 has health:"<<pokemon2.health<<endl; 
    int a1,a2;
    a1=attack_p1();           //function will call att1 where user will input thier choice of attack in number
    a2=attack_p2();           //function will call att2 where user will input thier choice of attack in number
    fight(a1, a2, pokemon1.health, pokemon2.health);                     //here a1 and a2 are used as numbers 1,2 and 3 that will help in further operations

    return 0;
}

