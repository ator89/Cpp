#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <ncurses.h>

int main(){

   //init screen
   initscr();

   int x, y;
   x = y = 10;

   move(y,x);
   
   printw("Aja qué tal");
   
   //refresh();

   int c = getch();
   refresh();

   move(0,0);
   printw("%d",c);
   refresh();
   //mvprintw(0,0,"%d",c);
  
   getch();

   endwin();
   
   return 0;
}
