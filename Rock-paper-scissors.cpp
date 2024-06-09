//ROCK, PAPER ,SCISSORS
#include <iostream>//includes the input output stream library 
#include <cstdlib>//this line includes standard library for utilities in c++ for generating pseudo-random nums
#include <ctime>//Used for handling time related functions which seed the random number genration
using namespace std ;

void playGame( string playerChoice)
{
    string choices[3]={"rock","paper","scissors"};//this line contains the possible choices for the playGame
    
    string computerChoice=choices[rand()%3];//Randomly chooses computer's choice from the given array of choices
    
    cout<<'\n'<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Your choice:"<<playerChoice<<endl;
    cout<<"\n"<<endl;
    cout<<"Computer's choice:"<<computerChoice<<endl;
    cout<<"--------------------------------"<<endl;
    
    
    if (playerChoice==computerChoice)
    {
        cout<<"Its a tie"<<endl;
        cout<<":|"<<endl;
    }
    else if((playerChoice=="rock"&&computerChoice=="scissors")||(playerChoice=="scissors"&&computerChoice=="paper")||(playerChoice=="paper"&&computerChoice=="rock"))
    {
        cout<<"You win!!"<<endl;
        cout<<":D"<<endl;
    }
    else
    {
        cout<<"Computer wins"<<endl;
        cout<<":0"<<endl;
    }
}

int main()
{
    srand(time(0));//this line seeds the random number generator with the current time so that every time it generates a different number
    cout<<"========================================="<<endl;
    cout<<"WELCOME TO A GAME OF ROCK PAPER SCISSORS"<<endl;
    cout<<"========================================="<<endl;
    cout<<"\n"<<endl;
    char playAgain;
    do{
        cout<<"Pick your choice(rock/paper/scissors):"<<endl;
        string playerChoice;
        
    
        cin>>playerChoice;
        if (playerChoice=="rock"||playerChoice=="paper"||playerChoice=="scissors")
        {
            playGame(playerChoice);
        }
        else
        {
            cout<<"Invalid option"<<endl;
        }
        cout<<"\n"<<endl;
        cout<<"Do you still want to play(y/n):"<<endl;
        cin>>playAgain;
        
        
    }while(playAgain=='Y'||playAgain=='y');
    
    
    return 0;
    
}




