#include "Menu.h"

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