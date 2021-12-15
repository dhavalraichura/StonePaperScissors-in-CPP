#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int input,computer;
		while(1)
		{
			cout<<"=====Welcome to Stone Paper Scissors=====\n";
			cout<<"Select an option from the choices given below\n";
			cout<<"1.Stone\n";
			cout<<"2.Paper\n";
			cout<<"3.Scissor\n";
			cout<<"0.Exit\n";
			cout<<"=========================================\n";
			cin>>input;
			computer = rand()%3;
			switch(input)
			{
				case 1:
					if(computer == 2)
						cout<<"Computer selects Paper\nComputer Wins!\n";
					else if(computer == 1)
						cout<<"Computer selects Stone\nIts a Tie!\n";
					else
						cout<<"Computer selects Scissor\nYou Win!\n";
					break;
				case 2:
					if(computer == 2)
						cout<<"Computer selects Paper\nIts a Tie!\n";
					else if(computer == 1)
						cout<<"Computer selects Stone\nYou Win!\n";
					else
						cout<<"Computer selects Scissor\nComputer Wins!\n";
					break;
				case 3:
					if(computer == 2)
						cout<<"Computer selects Paper\nYou Win!\n";
					else if(computer == 1)
						cout<<"Computer selects Stone\nComputer Wins!\n";
					else
						cout<<"Computer selects Scissor\nIts a Tie!\n";
					break;
				case 0:
					cout<<"Thank You For Playing\n";
					break;					
			};
			if(input==0)
				break;	
		};	
}
