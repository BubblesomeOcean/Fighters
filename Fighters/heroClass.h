#include <iostream>
#include <SDL.h>

#ifndef HEROCLASS
#define HEROCLASS


class heroClass
{
public:
	heroClass();
	heroClass(int STR, int DEF, int HP, int LCK, int AGI, bool ULT);
	~heroClass();
	int attack;

	int getHealth();

private:
	int EXP;

};

#endif
