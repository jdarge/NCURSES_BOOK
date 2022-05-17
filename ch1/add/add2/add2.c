#include <ncurses.h>

int main(void) {

    char text1[] = "Give me a clone!\n";
    char text2[] = "Roger roger!";

    initscr();

    addstr(text1);
    addstr(text2);

    move(2,0);

    int x = 1;
    printw("Another %d", x);

    refresh();
    getch();

    endwin();
    return 0;
}
