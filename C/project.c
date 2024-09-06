#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

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

    while (1) {
        clearConsole();

        // Top side of the box
        for (int i = 0; i < width; i++) {
            printf("%c", 219);
        }
        printf("\n");

        // Sides and inner space of the box
        for (int i = 0; i < height - 2; i++) {
            printf("%c", 219);  // Left side of the box

            // Inner space
            for (int j = 0; j < width - 2; j++) {
                if (j == linePosition && i != gapRow) {
                    printf("%c", 219);  // Vertical line
                } else if (j == linePosition && i == gapRow) {
                    printf(" ");  // Gap
                } else if (j == playerColumn && i == playerRow) {
                    printf(">");  // Player
                } else {
                    printf(" ");
                }
            }

            printf("%c\n", 219);  // Right side of the box
        }

        // Bottom side of the box
        for (int i = 0; i < width; i++) {
            printf("%c", 219);
        }
        printf("\n");

        printf("Score: %d\n", score);

        // Check for collision with the line
        if (playerColumn == linePosition && playerRow != gapRow) {
            printf("Game Over\n");
            break;
        }

        // Check for user input
        if (_kbhit()) {
            char key = _getch();

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

        Sleep(sleepDuration);  // Sleep for the updated duration

    }

    return 0;
}
