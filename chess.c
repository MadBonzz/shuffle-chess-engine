#ifndef STDIO_H_
#define STDIO_H_
#include <stdio.h>
#endif

#ifndef STRING_H_
#define STRING_H_
#include <string.h>
#endif

#include "helpers/magic_num_generator.h"

#ifndef CONST_H_
#define CONST_H_
#include "helpers/board_constants.h"
#endif

#ifndef BITS_H_
#define BITS_H_
#include "helpers/bit_manipulation.h"
#endif

#ifndef MASKS_H_
#define MASKS_H_
#include "helpers/masks.h"
#endif

#ifndef MAGIC_NUMS_H_
#define MAGIC_NUMS_H_
#include "helpers/magic_numbers.h"
#endif

#ifndef PCTABLES_H_
#define PCTABLES_H_
#include "helpers/pre_calculated_tables.h"
#endif

#ifndef BOARD_H_
#define BOARD_H_
#include "helpers/board.h"
#endif

#include "helpers/fen.h"
#include "helpers/movegen.h"
#include "helpers/moves.h"

#ifndef U64
#define U64 unsigned long long
#endif


void init_all() {
    init_leaper_attacks();
    init_sliders_attacks(bishop);
    init_sliders_attacks(rook);
    // init_magic_numbers();
}

// Main driver
int main(){
    init_all();

    int move = encode_move(d7,d8,P,Q,0,0,0,0);
    printf("%s\n", sqaure_to_coordinate[get_move_source(move)]);
    printf("%s\n", sqaure_to_coordinate[get_move_target(move)]);
    printf("%c\n", ascii_pieces[get_move_piece(move)]);
    printf("%c\n", ascii_pieces[get_move_promoted(move)]);
    printf("%d\n", get_move_capture(move) ? 1 : 0);
    printf("%d\n", get_move_double(move) ? 1 : 0);
    printf("%d\n", get_move_enpassant(move) ? 1 : 0);
    printf("%d\n", get_move_castling(move) ? 1 : 0);


    return 0;
}