#include <iostream>
#include<string>
using namespace std;

int main() {
	char letter;
	int count = 0;
	string fullWord;


	cout << "--------------------------------------------" << endl;
	cout << "--------------> HangMan Game <--------------" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Let's Start the Game: \n\n\n";

	char word[] = { 'c', 'o', 'm', 'p', 'u', 't', 'e', 'r' };
	char spaces[] = { '_', '_', '_', '_', '_', '_', '_', '_' };

	cout << "Here are the number of letters in the word you have to" << endl << endl;
	cout << "guess:";

	for (int i = 0; i<sizeof(spaces); i++){
		cout << spaces[i];
	}
	cout << "\n";


	for (int i = 1; i<sizeof(word); i++){
		cout << "Enter your guess#" << i << ": ";
		cin >> letter;
		count++;
		if (letter == '$'){
			break;
		}

		for (int j = 0; j<sizeof(spaces); j++){
			if (word[j] == letter){
				spaces[j] = letter;
				cout << spaces[j];
			}
			else{
				cout << spaces[j];
			}
		}
		cout << "\n";
	}


	cout << "\n";
	cout << "You have no more guess attempts left: \n\n";

	cout << "so now you have to type in the complete word you think it would be:";
	cin >> fullWord;
	if (fullWord == "computer" || fullWord == "Computer")
	{
		cout << "\n\nCongrats! you have gussed it correctly in just --> " << count << " <-- attempt";

	}
	else{
		cout << "\n\nSorry your guess is incorrect" << endl;
	}


	return 0;
}