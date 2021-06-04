#include <iostream>
#include <string>
#include "DynamicQue.hpp"
#include "DynamicQue.cpp"
using namespace std;

int main() {

	DynamicQue<string>phraseQ;
	DynamicQue<int>integerQ;
	string phrase;
	int integer;




	cout <<"You can write up to 3 integers to store in the Queue to show.\n";
	for(int c = 0; c < 3; c++){

		cout <<"Please write an integer:\n";
		cin >> integer;
		integerQ.eQu(integer);
	}
	cout <<"The integers you selected to store in the Queue were: \n";
	for(int c = 0; c < 3; c++){
		integerQ.dQu(integer);
		cout << integer << "\n";

	}
	cout <<"\n";

	cout <<"You can write up to 3 phrases to store in the Queue to show.\n";
	for(int a = 0; a < 3; a++){

		cout <<"Please write a word or phrase: \n";
		getline(cin, phrase);
		phraseQ.eQu(phrase);
	}
	cout <<"The phrases you selected to store in the Queue were: \n";
	for(int a = 0; a < 3; a++){
		phraseQ.dQu(phrase);
		cout << phrase << "\n";

	}

	cout << "Program ending, bye\n";
	return 0;
}
