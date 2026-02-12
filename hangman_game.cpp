#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "computer"; 
    int wordLength = word.length();

    string guessed(wordLength, '_'); 
    int attempts = 6; 
    

    char guess;

    cout << "==== HANGMAN GAME ====\n";
    cout << "Guess the word. You have " << attempts << " attempts.\n\n";

    while (attempts > 0 && guessed != word) {
        cout << "Word: " << guessed << endl;
        cout << "Enter a letter: ";
        cin >> guess;

        bool found = false;

        
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                found = true;
            }
        }

        if (found) {
            cout << "Correct! Letter found.\n\n";
        } else {
            attempts--;
            cout << "Wrong guess! Attempts left: " << attempts << "\n\n";
        }
    }

    
    if (guessed == word) {
        cout << "Congratulations! You guessed the word: " << word << endl;
    } else {
        cout << "Game Over! The word was: " << word << endl;
    }

    return 0;
}
