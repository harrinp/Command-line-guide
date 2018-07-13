#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "ncurses.h"

// Stores our balls position
typedef struct _Ball {
    int x;
    int y;
} Ball;
// Stores the direction that the ball is moving
typedef struct _Direction {
    int x;
    int y;
} Direction;

int main() {
    initscr();              // Start ncurses
    nodelay(stdscr, TRUE);  // Don't wait for \n for getch to parse input
    cbreak();               // Switch off input buffering
    curs_set(FALSE);        // Don't place a cursor on the screen

    int height = 0;         // Window height
    int width = 0;          // Window width

    // initialize our ball struct and direction struct
    Ball b = {
        1,1
    };
    Direction d = {
        1,1
    };

    // Get terminal window dimensions (rows and characters)
    getmaxyx(stdscr, height, width);

    while (getch() == ERR) {
        // print ball
        mvprintw(b.y,b.x,"o");

        // move ball for next frame
        b.y += d.y;
        b.x += d.x;

        // Check for ball being outside of our window boundaries
        if (b.x == width - 1 || b.x == 0){
            // change direction
            d.x *= -1;
            b.x += d.x;
        }
        if (b.y == height - 1 || b.y == 0){
            // change direction
            d.y *= -1;
            b.y += d.y;
        }

        refresh();      // Refresh the output
        usleep(50000);  // Sleep to show output (Single frame)
        clear();        // Clear output
    }
    destroyWindow(&w);
    endwin();
    return EXIT_SUCCESS;
}
