#pragma once

class Scene{
private:
	double scene;
public:
	Scene();
	Scene(double newScene);
	void setScene(double newScene);
	int getScene();
	void setNextScene();
};