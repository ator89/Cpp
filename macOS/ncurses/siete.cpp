#include <ncurses.h>
#include <string>
using std::string;

#include <cstdlib>
#include <ctime>
#include "Player.h"


void start_ncurses(bool useRaw, bool useNoecho);
void printMenu(WINDOW* menu, string choices[], int size, int highlight);

int main(int argc, char** argv){
  initscr();
  noecho();
  cbreak();

  int y,x,yBeg,xBeg,yMax,xMax;
  getmaxyx(stdscr,yMax,xMax);

  WINDOW* playwin = newwin(20,50,(yMax/2)-10,10);

  box(playwin,0,0);
  refresh(); 
  wrefresh(playwin);

  Player* p = new Player(playwin,1,1,'@');
  do{
     p->display();
     wrefresh(playwin);
  } while(p->getmv() != 'x');

  getch();
  endwin();
  
  return 0;

}
