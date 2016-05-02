#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Scene{
private:
	int scene;
	double input;
	ifstream read;
	string infile;
	string file;
public:
	Scene();
	Scene(double newScene);
	void setScene(double newScene);
	double getScene();
	void setNextScene();
	double setUserinput();
	void getUserinput(int newInput);
	double getFile();
};