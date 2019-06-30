#include <ncurses.h>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv){

   initscr();
   //cbreak();
   //raw();
   //noecho();

   int height, width, y, x;
   height = 10;
   width = 20;
   y = x = 10;
   WINDOW* win = newwin(height,width,y,x);
   refresh();

   char g = 'g';

   box(win,(int)g,0);
   //wborder(win,left,right,top,bottom,tlc,trc,blc,brc);

   mvwprintw(win,1,1,"box 1"); 
  
   wrefresh(win);
   int c = getch();

   endwin();

   return 0;
}
