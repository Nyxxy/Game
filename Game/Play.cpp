#include "Play.h"
#include "Scene.h"
#include "Stats.h"
#include <iostream>

Play::Play(){
	menus[0].setName("New");
	menus[1].setName("Continue");
	menus[2].setName("Mini Games");
	menus[3].setName("Shop");
	menus[4].setName("View Stats");
	menus[5].setName("Inventory");
	menus[6].setName("Exit");
	menus[7].setName("An Invaid Option");
}

void Play::run() {
	int selection = 0;
	Play get;
	Scene play;
	Hang go;
	Tac game;
	Stats display;

	int c;

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
			play.setScene(1);
			play.getScene();
			//continue;
			break;
		case 2:
			play.getScene();
			//continue;
			break;
		case 3:
			cout << "1. Hangman" << endl;
			cout << "2. Tic Tac Toe" << endl;
			cin >> c;
			if (c == 1){
				go.runHang();
				continue;
			}
			if (c == 2){
				game.run();
				continue;
			}
			break;
		case 4:
			// shop
			break;
		case 5:
			display.getStats();
			break;
		case 6:
			// inventory
			break;
		case 7:
			return;
		case 8:
			break;
		}
	} while (true);
}


int Play::menu() {
		cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << i + 1 << ". " << menus[i].getName();
		for (int s = 0; s < (30 - menus[i].getName().length()); s++) {
			cout << " ";
		}
		cout << endl;
	}
	int s;
	cin >> s;
	cout << endl;
	if (s >= 1 && s <= 8){
		return s;
	}
	else{
		return 8;
	}
}