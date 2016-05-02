#include "Menu.h"
#include "Scene.h"
#include "Games.h"
#include "Shop.h"
#include "Stats.h"
#include "Invintory.h"

Stats display;
Hang go;
Tac game;

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
	//do{
		cout << "1. Hangman" << endl;
		cout << "2. Tic Tac Toe" << endl;
		cin >> c;
		if (c == 1){
			if (go.runHang()){
				display.setCoins(5);
			}
		}
		if (c == 2){
				if (game.run()){
					display.setCoins(1);
				}

		}
	//}while (true);
} 

void Menu::runShop(){

}
void Menu::runStats(){
	display.getStats();
}
void Menu::runInvintory(){

}