#pragma once

#ifndef U64
#define U64 unsigned long long
#endif

#include "board_constants.h"

U64 bitboards[12];
U64 occupancies[3];

extern int side;
extern int enpassant;
extern int castle;

void print_board();
