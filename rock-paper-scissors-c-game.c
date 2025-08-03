#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer_choice();
int user_choice();
void winner(int user, int computer) {

    if(user == computer) {

        printf("IT'S A TIE!\n");
    } else if(user == 1 && computer == 3) {

        printf("YOU WON!\n");
    } else if(user == 2 && computer == 1) {

        printf("YOU WON!\n");
    } else if(user == 3 && computer == 2) {

        printf("YOU WON!\n");
    } else {

        printf("THE COMPUTER WON!\n");
    }
}

int main() {

    char exit = '\0';

    do {
        int getuser_choice = 0;
        int getcomputer_choice = 0;

        srand(time(NULL));

        printf("=== ROCK PAPER SCISSORS GAME ===\n");
        printf("1. ROCK.\n");
        printf("2. PAPER.\n");
        printf("3. SCISSORS.\n");
        printf("4. Exit.\n");

        getuser_choice = user_choice();
        getcomputer_choice = computer_choice();

        if (getuser_choice == 4) {

            printf("Are you sure you want to exit?(Y/N): ");
            scanf(" %c", &exit);
            while(getchar() != '\n');
            continue;
        }

        switch(getuser_choice) {

            case 1:
            printf("You choose ROCK!.\n");
            break;
            case 2:
            printf("You choose PAPER.\n");
            break;
            case 3:
            printf("You choose SCISSORS.\n");
            break;
        }

        switch(getcomputer_choice) {

            case 1:
            printf("Computer choose ROCK!.\n");
            break;
            case 2:
            printf("Computer choose PAPER.\n");
            break;
            case 3:
            printf("Computer choose SCISSORS.\n");
            break;
        }

        winner(getuser_choice, getcomputer_choice);
    } while (exit != 'Y' && exit != 'y');

    return 0;
}

int computer_choice() {

    return (rand() % 3) + 1;
}

int user_choice() {

    int choice;

    do {
        printf("Choose an option: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 4);

    return choice;
}