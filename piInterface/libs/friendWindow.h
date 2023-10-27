#ifndef _FRIENDWINDOW_H_
#define _FRIENDWINDOW_H_

#include <stdint.h>
#include <ncurses.h>


void rePrintId(void);
void initFriendWindow(WINDOW *window);
void parseFriendsList(uint8_t *data);
void printPacketToWindow(uint8_t *packet, WINDOW *window, const char title[3]);


#endif // _FRIENDWINDOW_H_