#ifndef BOARD_H
#define BOARD_H

#define COLS 20
#define ROWS 20

extern char board[COLS * ROWS];

void fill_board();
void clear_screen();
void print_board();

#endif
