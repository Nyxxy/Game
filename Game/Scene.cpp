#include "Scene.h"

Scene::Scene(){
	scene = 0;
}

Scene::Scene(double newScene){
	scene = newScene;
}

void Scene::setScene(double newScene){
	scene = newScene;
}

int Scene::getScene(){
	return scene;
}

void Scene::setNextScene(){
	scene = scene + 1;
}

// run scenes with get files?
// have base 1 2 3 4 options, each with set point earns
//  take input to get different files, ie; scene2.4 if during scene two they chose the 4th option