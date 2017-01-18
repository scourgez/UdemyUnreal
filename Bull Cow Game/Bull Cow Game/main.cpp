#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

int main()
{

	PrintIntro();

	constexpr int NUM_OF_GUESSES = 5;
	for (int count = 0; count < NUM_OF_GUESSES; count++)
	{
		GetGuess();
		cout << endl;

	}

	return 0;

}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to the Bull and Cow game\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram?\n";
	cout << endl;
	return;
}

string GetGuess()
{
		//read in the users guess
		string Guess = "";
		cout << "What is your guess? ";
		getline(cin, Guess);

		//repeat back the guess
		cout << "You guessed: " << Guess << endl;

		return Guess;
}
