#include "Play.h"
#include "Scene.h"
#include <iostream>

Play::Play(){
	menus[0].setName("New");
	menus[1].setName("Continue");
	menus[2].setName("Mini Games");
	menus[3].setName("Shop");
	menus[4].setName("View Stats");
	menus[5].setName("Invintory");
	menus[6].setName("Exit");
}

void Play::run() {
	int selection = 0;
	Scene play;
	Hang go;
	Tac game;
	int c;

	do {
		selection = menu();

		if (selection >0 && selection < 6) {
			selection--;

			if (menus[selection].makeSelection()) {
				cout << endl;
				cout << "You have selected " << menus[selection].getName() << endl;
				cout << endl;
			}
		}
		switch (selection){
		case 1:
			play.setScene(1);
			play.getScene();
			//continue;

		case 2:
			play.getScene();
			//continue;

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

		case 4:
			//Shop

		case 5:
			//Stats

		case 6:
			//invintory

		case 7:
			return;

		default:
			continue;
		}

		cout << "Invalid option" << endl;
	} while (true);
}


int Play::menu() {
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << ". " << menus[i].getName();
		for (int s = 0; s < (30 - menus[i].getName().length()); s++) {
			cout << " ";
		}
		cout << endl;
	}
	int s;
	cin >> s;
	return s;
}