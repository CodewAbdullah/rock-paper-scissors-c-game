# Rock Paper Scissors (C Project)

This is a simple **Rock Paper Scissors** game written in **C**. The user plays against the computer, which randomly selects rock, paper, or scissors each round. The game continues until the user chooses to exit.

## 🔧 Features

- Menu system with options for Rock, Paper, Scissors, or Exit
- Randomized computer choices using `rand()`
- Input validation to ensure proper user choices
- Option to confirm before exiting the game
- Clear result display (Win / Lose / Tie)

## 💡 How It Works

- You choose between:
  - 1 = Rock
  - 2 = Paper
  - 3 = Scissors
  - 4 = Exit
- The computer makes a random choice (1-3)
- Game compares both choices and declares the winner
- If you choose "4", it asks you to confirm before exiting

## 🛠️ Technologies Used

- Language: **C**
- Standard Libraries: `stdio.h`, `stdlib.h`, `time.h`


## 📁 How to Run

1. Compile using `gcc`:
   ```bash
   gcc -o rps rock_paper_scissors.c

