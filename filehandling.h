#ifndef filehandling_h
#define filehandling_h
#include<iostream>
#include<fstream>

using namespace std;

//all functions should be declared before they are used (core cpp concept top to bottom flow)
void menu(int &flag);
void singleplayer();
void dualplayer();
void database();
void newplayer();
void existingplayer();
void updatelevel();
//------------------------------------------------------------------------------------------------------
void updatelevel(){
    string name;
    cout<<"enter ur name to save ur progress"<<endl;
    cin>>name;
    ifstream file(name);

    if(!file){
        cout<<"file not found"<<endl;
        return;
    }

    string pname;
    int level;

    file >> pname >> level;   
    file.close();

    level++;   

    ofstream file2(name);     //using copy file to prevent accidental dlt or corruption
    file2 << pname << " " << level;
    file2.close();

    cout<<"Level Updated! New Level = "<<level<<endl;
}



void menu(int &flag){
    if (flag==1){
        singleplayer();
    }
    if(flag==2){
        dualplayer();
    }
    
}
void singleplayer(){
    database();
}
void dualplayer(){
    database();
}

void database(){
    cout<<"if you are new player [press 1]"<<endl;
    cout<<"if you are exsting player [press 2]"<<endl;
    int value;
    cin>>value;

    switch (value)
    {
    case 1:
        newplayer();
        break;
    case 2:
        existingplayer();
        break;
    
    default:
        cerr<<"enetered wrong value"<<endl;
        break;
    }
}


void newplayer(){

    string name;
    int player_level=0;
    cout<<"Enter your name(in name.txt format)"<<endl;
    cin>>name;
    fstream file(name,ios::app);
    if(!file){
        cerr<<"FILE NOT FOUND"<<endl;
    }
    file<<name<<" "<<player_level;
    cout<<"----------welcome to new wrold of pokemons this is trial version of the game ---------------"<<endl;
    cout<<"enjoy (:"<<endl;
}
void existingplayer(){
    string name;
    int player_level=0;
    cout<<"Enter your name(in name.txt format)"<<endl;
    cin>>name;
    fstream file(name,ios::in);
    if(!file){
        cerr<<"file not found"<<endl;
        return ;
    }
}




#endif



/*

dual player mode is not ready yet 
*/