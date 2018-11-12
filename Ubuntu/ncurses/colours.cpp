#include <ncurses.h>

int main( int argc, char** argv){
    
    //start_ncurses(true,true);
    initscr();

    if(!has_colors()){
        printw("Oops, no color support");
        getch();
        return -1;
    }
    start_color();

    init_pair(1, 4, COLOR_YELLOW);
    init_pair(2, COLOR_RED, COLOR_MAGENTA);
    
    if(can_change_color()){
        printw("Can change color");
        init_color(COLOR_CYAN, 444,444,444);
    }
    
    /*
    *A_NORMAL
    *A_STANDOUT
    *A_REVERSE
    *A_BLINK
    *A_DIM
    *A_BOLD
    *A_PROTECT
    *A_INVIS
    *A_ALTCHARSET
    *A_CHARTEXT
    *
    */
    attron(COLOR_PAIR(1));
    printw("Some random text");
    attroff(COLOR_PAIR(2));
    /*
    *COLOR_PAIR(n)
    *COLO_RED
    *
    */

    getch();

    endwin();


    return 0;
}
