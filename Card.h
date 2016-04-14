#pragma once
#include <string>

using namespace std;

enum result
{
	win='w',
	lose='l',
	dravs='d'
};

class Card
{

private:

	int figure, colour;
	static int counter;

public:
	Card();
	result compare(Card*);
	string description();
	void show();

};