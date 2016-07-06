/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that allows a user to enter high scores of a game, keeping tracking of the name
               of the user and the score. Add the ability to show the highest score for each user, all scores for a
               particular user, all scores from all users, and the list of users.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Info
{
	string name;
	int highscore;
	int score;
};

int get_highscore_player (Info player[], int no_players)
{
	int index = 0;
	for (int i=0; i< (no_players-1); i++)
	{
	if (player[i].highscore <= player[i+1].highscore)
	{if(player[index].highscore <= player[i+1].highscore)
	index=  i+1;
	}
	else 
	{if(player[index].highscore <= player[i].highscore)
		index=i;
	}
	}
	return index;
}

void playagain(Info P[], int n, int i)
{
	int temp;
		cout<<"Rolling Dice .... "<<endl;	
		temp = ((rand()%100)+1);
		if(P[i].highscore <= temp)
		{
			P[i].highscore=temp;
		cout<<P[i].highscore<<endl;
		}
		else P[i].score = temp; 
}

void play(Info P[], int n, int i)
{
		cout<<"Rolling Dice .... "<<endl;	
		P[i].highscore = ((rand()%100)+1);
		P[i].score=0;
		cout<<P[i].highscore<<endl;
}

int main()
{
	clock_t begin = clock();
	int seed = time (NULL);
	srand (seed);

	Info player[10];

	int no_players;
cout<<"Number of Players: "<<endl;
cin>> no_players;

int dice; int first_place;
for (int i=0; i<no_players; i++)
{
	cout<<"Name of the Player : "<< endl;
	cin >> player[i].name;
	play(player, no_players, i);
}

int choice;
first_place=get_highscore_player (player, no_players);

while(1)
{
	cout<<"\n1: To see the list of users\n2: To see who has the highest score\n3: To see all the users and their highest scores\n4: Play again"\
<<endl;
cin>>choice;

if (choice == 1)
{
	for (int i=0; i<no_players; i++)
	{
	cout<<"				"<<player[i].name<<endl;

	}
}

if (choice==2)
	cout<<"		  High Score belongs to : " << player[first_place].name <<" -> "<< player[first_place].highscore<<endl;

if (choice == 3)
{
	cout<<"				All Scores"<<endl;
	for (int i=0; i<no_players; i++)
	{
		cout<<"				"<<player[i].name<<"::" <<"Score1: "<< player[i].highscore<<", Score2: "<<player[i].score<<endl;
	}
}

if(choice==4)
{
	cout<<" PLAY Again"<<endl;
	for (int i=0; i<no_players;i++)
	{
	playagain(player, no_players, i);
	}

}
}
	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
