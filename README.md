# Hangman-Game-InCpp

A classic word-guessing game built using C++. The program challenges the user to identify a hidden word by guessing letters within a limited number of attempts.

🎮 How to Play
The game selects a hidden word (e.g., "computer").

The player is shown underscores _ representing each letter of the word.

The player enters one letter at a time:

Correct Guess: The letter is revealed in its correct position(s).

Wrong Guess: The player loses one attempt.

Win Condition: Correctiy guess all letters before running out of attempts.

Lose Condition: The attempts reach zero.

🚀 Features
Dynamic Feedback: Updates the word display in real-time after every guess.

Attempt Tracking: The player starts with 6 attempts, which decrement on every mistake.

Win/Loss Logic: Clear end-game messages displaying the result and the target word.

🛠️ Technical Implementation
The source code utilizes several fundamental C++ concepts:

String Manipulation: Using std::string constructors to initialize the hidden word with underscores.

Loops: A while loop manages the game state, while a for loop iterates through the string to check for character matches.

Boolean Flags: A found flag is used to determine if a guess was successful and trigger the appropriate feedback.

Input/Output: Standard cin and cout for a seamless console-based user experience.

💻 Compilation and Execution
Compile the code:

Bash
g++ hangman_game.cpp -o Hangman
Run the game:

Bash
./Hangman
📝 Potential Improvements
Add a random word generator from a file or array.

Implement a "already guessed" list to prevent repeating letters.

Add visual ASCII art of the hangman for each stage.
