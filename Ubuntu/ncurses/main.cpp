#include <ncurses.h>
using namespace std;

int main (int argc, char** argv){
    
    //initializes the screen
    //sets up memory and clears the screen
    initscr();
   
    int x, y;
    x = y = 10;

    //moves the cursor to the specified location
    move(y,x); 

    //prints a string(const char*) to a window
    printw("NCurses!");
    clear();
    //regreshes the screen to match whats in memory
    refresh(); 

    //whais for user input, returns int value of that key
    //getch();
    
    int c = getch();

    move(0,0);

    mvprintw(0,5,"%d", c);
    
    clear();
    
    getch();
    
    

    endwin();
    //deallocates memory and ends ncurses    

    return 0;
}
