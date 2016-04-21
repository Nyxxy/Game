#pragma once
#include "Menu.h"
#include "Games.h"

class Play{
private:
	Menu menus[8];
	int good=0;
	int bad=0;
	int neutral=0;
public:
	Play();
	void run();
	int menu();
	void getStats();
};