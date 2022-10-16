#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <ctime> //Needed for time function
#include <cstdlib> // Needed for srand and rand functions
using namespace std;

//Imported libraries for nedded for time fuction and generating random numbers
//Implemented a time algorithm that converts calculates the time spent playing the game



int main() {
int computer_num;
int user_guess, user_guess2;
int user_choice;
int num_of_tries;
int num_of_tries_used;
long startTime = time(0);
bool decision;

srand(time(0));

computer_num = 1 + (rand() % 100);

cout<<"Welcome to Guess Game"<<endl<<endl;
cout <<"Do you want to guess or do you want to let the computer guess?  \n";
cout <<"If you want to guess, enter 1. If you want the computer to guess, enter 0 \n\n";
cin >> decision;

  if (decision == 1) 
  {
    cout<<"If you choose Easy, you have 10 tries"
    <<"If you choose medium, you have 5 tries"
    <<"If you choose hard, you have 3 tries"
    <<endl<<endl;
          
    cout<<"Choose your level of difficulty"<<endl;
    cout<<"Enter 1 for easy\nEnter 2 for medium\nEnter 3 for Hard" 
    <<endl<<endl;
    
        
    cout<<"Enter your choice: ";
    cin>>user_choice;

    if (user_choice == 1){
    num_of_tries = 10;
    }
    else if(user_choice == 2){
    num_of_tries = 5;
    }
    else if(user_choice == 3){
    num_of_tries = 3;
    }
      
    
    for (int i =1; i <= num_of_tries; i++)
    {
      cout<<"Enter your guess (a number from 1 - 100): ";
      cin>>user_guess;
        
      if ( user_guess < computer_num){
      cout<<"Wrong! Try again"<<endl;
      cout<<"Your guess is less than mine"<<endl<<endl;  
          }
      else if(computer_num < user_guess){
      cout<<"Wrong! Try again"<<endl;
      cout<<"Your guess is greater than mine"<<endl<<endl;     
          }
      else{
      cout<<"Correct! Good Job"<<endl; 
      break;
          }
      num_of_tries_used = i;
    }//end of for loop
        
    if(num_of_tries_used == num_of_tries)
    {
      cout<<"You have exhausted your tries"<<endl;
      cout<<"Correct number is "<<computer_num <<endl;
    }
  }
  
  else if (decision == 0) {
  
  cout << "Enter an integer number between 1-100 you want the computer to guess: ";
  cin >> user_guess2;

  int left = 1;
  int right = 100;

  int computerGuess = 0;
  
  
  while (computerGuess != user_guess2) // Condition to control the loop
    {
      cout<<"My guess is "<<computerGuess<<endl;
      if (computerGuess < user_guess2)
        {
          left = computerGuess; 
        }
      else if (computerGuess > user_guess2)
       {
         right = computerGuess;
       }
      computerGuess = (left + right)/2; // Updating the computer's guess
 
    }
  
  cout << "Haha! your number is : " << computerGuess << endl;
  
  }
  
 //Time Algorithm   
 long endTime = time(0);
 long gameTimeMinute = endTime - startTime;
 long gameTimeSecond = endTime - startTime;
  
  if(gameTimeMinute> 60){
    gameTimeMinute/=60;  
  }
  if (gameTimeMinute< 60){
     gameTimeSecond%=60;
  }
 cout <<  "You spent " << gameTimeMinute << " minute(s) " << gameTimeSecond << " second(s)" << endl;  
 
  
  return 0; 
  
}
