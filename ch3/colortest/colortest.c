#include <ncurses.h>
#include <stdlib.h>

void bomb(char* msg);

int main(void) {
    
    initscr();

    /*Test for color ability in the terminal!*/
    if(!has_colors()) bomb("Terminal cannot do color\n");
    
    /*Try to init curses colors*/
    if(start_color() != OK) bomb("Unable to start colors\n");

    printw("Colors have been properly initialized.\n");
    printw("NCurses reports that you can use %d colors,\n", COLORS);
    printw("and %d color pairs.", COLOR_PAIRS);

    refresh();
    getch();

    endwin();
    return 0;
}

void bomb(char* msg) {
    endwin();
    puts(msg);
    exit(1);
}
