#include <ncurses.h>

#include <string>
//using std::string;

using namespace std;

void start_ncurses(bool useRaw, bool useNoEcho);
void printMenu(WINDOW * menu, string choices[], int size, int highlight);

int main(int argc, char** argv){
    
    initscr();
    noecho();
    cbreak();

    int y, x, yBeg, xBeg, yMax, xMax;

    getw(stdscr, y, x);
    getbegyx(stdscr, yBeg, xBeg);
    getmaxyx(stdscr, yMax, xMax);
    
    
    printw("%d %d %d %d %d %d", y, x, yBeg, xBeg, yMax, xMax);

    getch();
    endwin();    

    return 0;
}
