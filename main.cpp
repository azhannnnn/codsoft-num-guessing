#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(int argc, char** argv) {
    
	srand((unsigned int)time(NULL));

	int number = (rand() % 100) + 1;

	int guess = 0;
      
    cout<<"\t\t\t\t\t\tNUMBER GUESSING GAME"<<endl<<endl;
    cout<<"\t\t\t\t\t\tLET'S START GUESSING"<<endl<<endl;
	do {
		cout<<"enter guess (1 - 100): ";
		cin>>guess;
		if(guess > number)
			cout<<"guess lower!\n"<<endl;
		else if (guess<number)
			cout<<"guess higher!\n"<<endl;
		else
			{
				cout<<"\t\t\t\t\t\t ************"<<endl;
				cout<<"\t\t\t\t\t\t * You Won! *"<<endl;
				cout<<"\t\t\t\t\t\t ************"<<endl;
			}

	} while(guess != number);

	
	return 0;
}