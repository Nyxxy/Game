#include "Scene.h"

void Scene::setScene(int newScene){
	scene = newScene;
}

int Scene::getScene(){
	return scene;
}

void Scene::setNextScene(){
	scene = scene + 1;
}