#include "Scene.h"
#include <iostream>
#include <stdlib.h>

Scene::Scene(){
	scene = 0;
}

Scene::Scene(double newScene){
	scene = newScene;
}

void Scene::setScene(double newScene){
	input = input / 10;
	infile = scene + input;
}

double Scene::getScene(){
	return scene;
}

void Scene::setNextScene(){
	scene = scene + 1;
}

double Scene::setUserinput(){
	return input;
}

void Scene::getUserinput(int newInput){
	input = newInput;
}

// run scenes with get files?
// have base 1 2 3 4 options, each with set point earns
//  take input to get different files, ie; scene2.4 if during scene two they chose the 4th option

double Scene::getFile(){

	cout << "Enter a file to open: ";
	getline(cin, infile);
	read.open(infile.c_str());

	if (!read.is_open()){
		cout << "Unable to open file. " << endl;
		system("pause");
		return 1;
	}
	cout << endl;
}