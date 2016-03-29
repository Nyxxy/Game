#pragma once
#include <string>
using namespace std;

class Menu{
private:
	string name;
public:

	Menu();
	Menu(string newName);

	string getName();

	void setName(string newName);

	bool makeSelection();
};