#include "stdio.h"
#include "stdlib.h"
#include "ncurses.h"

int main() {
    initscr();
    mvprintw(5,5,"Hello World!");
    refresh();
    getch();
    endwin();
    return EXIT_SUCCESS;
}
