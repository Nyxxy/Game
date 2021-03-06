#include "Play.h"
#include "Scene.h"
#include "Stats.h"
#include <iostream>

Menu run;

Play::Play(){
	menus[0].setName("New");
	menus[1].setName("Continue");
	menus[2].setName("Mini Games");
	menus[3].setName("Shop");
	menus[4].setName("View Stats");
	menus[5].setName("Exit");
	menus[6].setName("An Invaid Option");
}

void Play::run() {
	int selection = 0;
	Menu run;

	do {
		selection = menu();		
			selection--;

		if (selection >= 0 && selection <= 8) {
			if (menus[selection].makeSelection()) {
				cout << endl;
				cout << "You have selected " << menus[selection].getName() << endl;
				cout << endl;
			}
		}
		
		switch (selection + 1){
		case 1:
			break;
		case 2:
			break;
		case 3:
			run.runGames();
			break;
		case 4:
			run.runShop();
			break;
		case 5:
			run.runStats();
			break;
		case 6:
			return;
		case 7:
			cout << "Hey Loser, Type Something thats on the Menu not random numbers!" << endl;
			break;
		}
	} while (true);
}


int Play::menu() {
		cout << endl;
		cout << "Main Menu" << endl << endl;
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << ". " << menus[i].getName();
		for (int s = 0; s < (30 - menus[i].getName().length()); s++) {
			cout << " ";
		}
		cout << endl;
	}
	int s;
	cin >> s;
	cout << endl;
	if (s >= 1 && s <= 6){
		return s;
	}
	else{
		return 8;
	}
}