#include <iostream>
#include <cstdlib>
#include <curses.h>
#include <unistd.h>
#include <ctime>

void clearConsole() {
    system("cls");
}

int main() {
    int width = 20;   // Width of the box
    int height = 10;   // Height of the box
    int linePosition = width - 3;   // Initial position of the moving line
    int gapRow = rand() % (height - 2);   // Randomly select a row for the gap
    int playerColumn = 1;   // Initial column position of the player
    int playerRow = height / 2;   // Initial row position of the player
    int score = 0;   // Player's score
    int sleepDuration = 200;   // Initial sleep duration in milliseconds

    srand(time(NULL));  // Initialize the random number generator

    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);

    while (1) {
        clear();

        // Top side of the box
        for (int i = 0; i < width; i++) {
            addch(ACS_BLOCK);
        }
        addch('\n');

        // Sides and inner space of the box
        for (int i = 0; i < height - 2; i++) {
            addch(ACS_BLOCK);  // Left side of the box

            // Inner space
            for (int j = 0; j < width - 2; j++) {
                if (j == linePosition && i != gapRow) {
                    addch(ACS_BLOCK);  // Vertical line
                } else if (j == linePosition && i == gapRow) {
                    addch(' ');  // Gap
               } else if (j == playerColumn && i == playerRow) {
                    addch('>');  // Player
                } else {
                    addch(' ');
                }
            }

            addch(ACS_BLOCK);  // Right side of the box
            addch('\n');
        }

        // Bottom side of the box
        for (int i = 0; i < width; i++) {
            addch(ACS_BLOCK);
        }
        addch('\n');

        printw("Score: %d\n", score);

        // Check for collision with the line
        if (playerColumn == linePosition && playerRow != gapRow) {
            printw("Game Over\n");
            break;
        }

        // Check for user input
        int key = getch();

        // Move the player up
        if (key == 'w' || key == 'W') {
            if (playerRow > 0)
                playerRow--;
        }

        // Move the player down
        if (key == 's' || key == 'S') {
            if (playerRow < height - 3)
                playerRow++;
        }

        // Update the line position
        linePosition--;
        if (linePosition < 1) {
            linePosition = width - 3;

            // Change the gap row after reaching the left border
            gapRow = rand() % (height - 2);
            score++;

            // Decrease sleep duration as the score increases
            if (sleepDuration > 0) {
                sleepDuration -= 5;
            }
        }

        refresh();
        usleep(sleepDuration * 1000);  // Sleep for the updated duration
    }

    endwin();

    return 0;
}

