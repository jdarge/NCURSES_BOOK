#include <ncurses.h>

int main(void) {

    char first[4];

    initscr();

    addstr("First 3 letters of your first name? ");
    refresh();
    getnstr(first, 3);

    printw("%s\n", first);
    addch('!');
    refresh();
    getch();
}
