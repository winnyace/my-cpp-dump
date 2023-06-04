#include <curses.h>
#include <ncurses.h>

int main()
{
    int ch, characters_typed = 0;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    printw("Type any character you want and I will try to show it in bold.\n");
    while (true) {
        ch = getch();

        switch (ch) {
            case KEY_F(1):
                clear();
                printw("Press any key to leave the program.");
                getch();
                endwin();
                return 0;
            default:
                move(1, 0);
                printw("You pressed ");
                attron(A_BOLD);
                printw("%c\n", ch);
                attroff(A_BOLD);
                break;
        }
        refresh();
    }
    return 0;
}
