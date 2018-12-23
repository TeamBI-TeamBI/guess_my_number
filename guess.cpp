//guess my number
//the classic number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

srand(static_cast<unsigned int>(time(0))); //seed ranmdom number generator
int secretNumber=rand()%100+1;//rand numbner between 1 and 100
int tries=0;
int guess;
cout<<"\twelcome to guess my number\n\n";
do
{
cout<<"enter a guess";
cin>>guess;
++tries;
if(guess>secretNumber)
{

cout<<"too high, don't aim so high !\n\n";
}
else if(guess<secretNumber)
{

cout<<"too low!\n\n";

}
else
{
cout<<"\nthat's it! you have get in "<< tries<<" guesses !\n";

}

}
while(guess!=secretNumber);
return 0;
}




