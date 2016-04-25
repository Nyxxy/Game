#include <iostream>
#include <stdlib.h>
#include "Play.h"
#include "Stats.h"

using namespace std;

int main(){
	Play go;
	cout << "Welcome to Hell" << endl;

	go.run();

	system("pause");
	return 0;
}


























/*int main(){
	int evil = 0;
	int good = 0;
	int neutral = 0;
	string name;
	//double scene;
	int you = 0;

	//menu
		//

	//character info
		//name
		//gender
		//age   

	//scene 1
	cout << "/Welcome to Hell./" << endl;
	cout << "/There are two kinds of people:/" << endl;
	cout << "/1. Those who know they will stay here forever/" << endl;
	cout << "/2. Those who try to get out/" << endl;
	cout << endl;
	cout << "/Which are you?/" << endl;
	cout << endl;
	cout << "(1, 2, 3)" << endl;
	cout << endl;

	cin >> you;
	switch (you) {
	case 1:
		cout << endl;
		cout << "/Follow the red haired man. He'll be more than happy to show you around./" << endl;
		evil++;
		break;
	case 2:
		cout << endl;
		cout << "/Then you want to go over there, where you see the bald man. But word from the wise, He's been looking for a way out for a long time./" << endl;
		good++;
		break;
	case 3:
		cout << endl;
		cout << "Mhm. If you say so." << endl;
		neutral++;
		break;
	}
	//scene 1.2
	if (evil >= 1){
		cout << "/You are approched by the Red haired man who was pointed out to you/" << endl;
		cout << "???:Havent seen you before. By chance are you new around here? "<<endl;
		cout << "1. Nod" << endl; // 1 Nue, 2 good
		cout << "2. Lie" << endl; //3 evil
		cout << "3. Be sarcastic" << endl; //1 evil
		cin >> you;
		switch (you){
		case 1:
			cout << "You nod without making eye contact." << endl;
			cout << "???: Piece of advice, you might not want to be so open about that here, even if its asked of you. Reguardless name is Kingsley" << endl;
			neutral++;
			cin >> name;
			good = good + 2;
		case 2:
			cout << "You: " << endl;
			cout << "???: Then why are you so hostile, you should know better. Though I guess it does set you apart from the rest of the laughing stacks that come through here. My name is Kingsley. And yours is....?" << endl;
			cin >> name;
			evil = evil + 3;
			case 3:
			cout << "You: Just becuse /you/ havent seen me doesnt mean I am new. Reguardless, I was told you could show me around?" << endl;
			cout << "???: Well, arn't you just a ball of sass. Whats your name?" << endl;
			cin >> name;
			cout <<" Yes, I can show you around." << endl;
			evil++;
		}
		//scene 1.3 
		if (good >= 1){
			cout << "/You approch the bald man who was pointed out to you/" << endl;
			cout << "1. Be polite" << endl;
			cout << "2. Demand he show you around." << endl;
			cout << "3. Wait for him to notice you." << endl;
			cin >> you;
			switch (you){
			case 1:
				cout << "You: Excuse me sir, I was told you were looking for a way out? I would like to help." << endl;
				good = good + 3;
			}
		}

	}



	cout <<"evil:" << evil << endl;
	cout << "good:" << good << endl;
	cout << "neutral:" << neutral << endl;
	// endings
	if (evil >= 100){
		// cout evil ending
	}

	if (good >= 100){
		// cout good ending
	}

	if (neutral >= 100){
		// cout neutral ending
	}

	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}


// maybe make a class for characters, that has baisc info on them??*/