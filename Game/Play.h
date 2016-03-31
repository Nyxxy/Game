#pragma once
#include "Menu.h"
#include "Games.h"

class Play{
private:
	Menu menus[7];
	int good;
	int bad;
	int neutral;
	int coins;
public:
	Play();
	void run();
	int menu();
	int getStats();
};