#include <ncurses.h>

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char** argv){

   initscr();
   //start_ncurses(true,true);
   start_color();
   if(!has_colors()){
      printw("Terminal does not support color");
   }

   init_pair(1,COLOR_CYAN,COLOR_WHITE);

   if(can_change_color()){
      init_color(COLOR_CYAN,0-999,0-999,0-999);
   }

   attron(COLOR_PAIR(1));
   printw("ahosdg");
   attroff(COLOR_PAIR(2));

   getch();

   endwin();

   return 0;
}
