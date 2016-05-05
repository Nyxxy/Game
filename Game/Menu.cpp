#include "Menu.h"
#include "Scene.h"
#include "Games.h"
#include "Stats.h"

Stats display;
Hang go;
Tac gam;

Menu::Menu(){
	name = "blank";
}

Menu::Menu(string newName){
	name = newName;
}

string Menu::getName(){
	return name;
}

void Menu::setName(string newName){
	name = newName;
}

bool Menu::makeSelection(){
	return true;
}

void Menu::runSceneone(){

}
void Menu::runSceneconti(){

}
void Menu::runGames(){
	int c;
		cout << "1. Hangman" << endl;
		cout << "2. Tic Tac Toe" << endl;
		cout << "3. Back to Menu" << endl;
		cin >> c;
		if (c == 1){
			if (go.runHang()){
				display.setCoins(5);
			}
		}
		if (c == 2){
			if (gam.run()){
				display.setCoins(1);
			}

		}
} 

void Menu::runShop(){
	int i;
	cout << "You have " << display.getCoins() << "g." << endl;
	cout << "1 3g Good up (1 point)" << endl;
	cout << "2 3g Bad up (1 point)" << endl;
	cout << "3 3g Neutral up (1 point)" << endl;
	cout << "4 10g Super Good up (5 points)" << endl;
	cout << "5 10g Super Bad up (5 points)" << endl;
	cout << "6 10g Super Neutral up (5 points)" << endl;
	cin >> i;
	switch (i){
	case 1:{
			   if (display.getCoins() >= 3){
				   display.setGood(1);
				   display.setCoins(-3);
				   cout << "You have bought a Good Up. You now have " << display.getGood() << " Good points." << endl;
			   }
			   else{
				   cout << "You do not posess the funds for this item." << endl;
			   }
			   break;
	}
	case 2:{
				if (display.getCoins() >= 3){
				   display.setBad(1);
				   display.setCoins(-3);
				   cout << "You have bought a Bad Up. You now have " << display.getBad() << " Bad points." << endl;
			   }
			   else{
				   cout << "You do not posess the funds for this item." << endl;
			   }
			   break;
	}
	case 3:{
			   if (display.getCoins() >= 3){
				   display.setNeutral(1);
				   display.setCoins(-3);
				   cout << "You have bought a Neutral Up. You now have " << display.getNeutral() << " Neutral points." << endl;
			   }
			   else{
				   cout << "You do not posess the funds for this item." << endl;
			   }
			   break;
	}
	case 4:{
			   if (display.getCoins() >= 3){
				   display.setGood(5);
				   display.setCoins(-10);
				   cout << "You have bought a Super Good Up. You now have " << display.getGood() << " Good points." << endl;
			   }
			   else{
				   cout << "You do not posess the funds for this item." << endl;
			   }
			   break;
	}
	case 5:{
			   if (display.getCoins() >= 3){
				   display.setBad(5);
				   display.setCoins(-10);
			   }
			   else{
				   cout << "You do not posess the funds for this item." << endl;
				   cout << "You have bought a Super Bad Up. You now have " << display.getBad() << " Bad points." << endl;
			   }
			   break;
	}
	case 6:{
			   if (display.getCoins() >= 3){
				   display.setNeutral(5);
				   display.setCoins(-10);
				   cout << "You have bought a Super Neutral Up. You now have " << display.getNeutral() << " Neutral points." << endl;
			   }
			   else{
				   cout << "You do not posess the funds for this item." << endl;
			   }
			   break;
	}

	
	}
}
void Menu::runStats(){
	display.getStats();
}
void Menu::runInvintory(){

}