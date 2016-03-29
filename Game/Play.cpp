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
	do {
		selection = menu();

		if (selection >0 && selection < 6) {
			selection--;

			if (menus[selection].makeSelection()) {
				cout << endl;
				cout << "You have selected " << menus[selection].getName() << endl;
				cout << endl;
			}
			continue;
		}
		switch (selection){
		case 1:
			Scene play;
			play.setScene(1);
			play.getScene();
		case 2:
			Scene play;
			play.getScene();
		case 3:
			//games
		case 4:
			//Shop
		case 5:
			//Stats
		case 6:
			//invintory
		case 7:
			return;
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