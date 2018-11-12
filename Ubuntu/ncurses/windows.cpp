#include <ncurses.h>

using namespace std;

int main(int argc, char** argv){

    initscr();
    cbreak();//
    //raw();
    noecho();

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 10;

    WINDOW* win = newwin(height, width, start_y, start_x);
    refresh();

    char c = 'c';

    //box(win,(int)c,105);
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = 45;
    top = bottom = 67;
    tlc = trc = blc = brc = 38;

    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win, 1,1, "This is my box");
    wrefresh(win);    

    getch();
    getch();
    //int c = getch();

    endwin();

    return 0;
}
