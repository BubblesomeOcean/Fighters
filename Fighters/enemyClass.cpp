#include <iostream>
#include <SDL.h>

#ifndef HEROCLASS
#define HEROCLASS

class enemyClass
{
public:
	enemyClass();
	enemyClass(int STR, int DEF, int HP, int LCK, int AGI);
	~enemyClass();
	int attack();

	int getHealth();

private:
	int DIF;
};

#endif