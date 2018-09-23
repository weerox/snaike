#include <time.h>
#include <stdlib.h>
#include "snake.h"
#include "board.h"
#include "draw.h"

int main(int argc, char **argv)
{
	srand(time(NULL));
	atexit(draw_reset);

	int width = 5;
	int height = 5;
	snake snake = snake_init(width, height);
	board board = board_init(width, height, snake);
	board_print(board);
	return 0;
}
