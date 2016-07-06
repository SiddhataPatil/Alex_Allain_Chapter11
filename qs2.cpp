/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Create an array of space ship objects and write a program that continually updates their
               positions until they all go off the screen. Assume that the size of the screen is 1024 pixels by 768
               pixels.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Spaceships
{
	int x;
	int y;
};

Spaceships upgradeDistance (Spaceships obj)
{
	obj.x+=50;
	obj.y+=50;
	return obj;
}

bool disp (Spaceships obj)
{
	if (obj.x < 1024 && obj.y<768)
		return true;
	else return false;
}

int main()
{
	clock_t begin = clock();

	Spaceships object1;
	Spaceships object2;

	object1.x = 610;
	object1.y =155;

	object2.x = 740;
	object2.y =75;
for(int i =0; i<10; i++)
{
	object1 = upgradeDistance(object1);
	object2 = upgradeDistance(object2);
	
	bool print1=false;
	bool print2=false;
	print1=disp(object1);
	print2=disp(object2);
	if(print1)cout<< "Spaceship1 spotted \n" <<endl;
	else cout<<"WE LOST SPACESHIP1 \n"<<endl;
	if(print2)cout<< "Spaceship2 spotted \n"<<endl;
	else cout<<"WE LOST SPACESHIP2 \n"<<endl;

}
	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
