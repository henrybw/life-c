/*
 * Defines some game actions for Conway's Game of Life.
 *
 * @author: Johnathan Davis
 */

#ifndef LIFE_ACTIONS_H
#define LIFE_ACTIONS_H

#include "types.h"
#include "vars.h"

void
populate_board(int32_t board_h, int32_t board_w, Board board);

void
zero_board(int32_t board_h, int32_t board_w, Board board);

void
init_board_rects(BoardRect board_rects);

size_t
get_neighbor_count(int32_t board_h, int32_t board_w, int32_t row, int32_t col,
                   Board board);

Cell *
get_cell_by_coord(int32_t board_h, int32_t board_w, int32_t x, int32_t y,
                  Board board);

void
advance_all_cells(int32_t board_h, int32_t board_w,
                  Board board_in, Board board_out);

void
advance_cell(int32_t board_h, int32_t board_w, int32_t row, int32_t col,
             Board board_in, Board board_out);

int
toggle_cells_from_clicks(int32_t board_h, int32_t board_w,
                         Board board_clicks, Board board);

#endif /* LIFE_ACTIONS_H */

