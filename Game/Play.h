#pragma once
#include "Menu.h"
#include "Games.h"

class Play{
private:
	Menu menus[8];
public:
	Play();
	void run();
	int menu();
	void getStats();
};