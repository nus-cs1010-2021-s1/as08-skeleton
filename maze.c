/**
 * CS1010 Semester 1 AY20/21
 * Assignment 8: Maze
 *
 * TODO(by student): Brief description of the purpose 
 * of this program.
 *
 * @file: maze.c
 * @author: XXX (Group XXX)
 */

#include "cs1010.h"
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

#define EMPTY '.'
#define WALL  '#'
#define USER  '@'

/**
 * Print the maze to the screen.
 * 
 * @param[in] maze The 2D array representing the maze.
 * @param[in] nrows The number of rows of the maze.
 * @param[in] steps The number of steps taken so far.
 */
void print_maze(char **maze, long nrows, long steps) {
    cs1010_clear_screen();
    for (long i = 0; i < nrows; i += 1) {
        cs1010_println_string(maze[i]);
    }
    cs1010_println_long(steps);

    // sleep only if we are displaying in the terminal
    if (isatty(fileno(stdout))) {
        usleep(100*1000);
    }
}

int main() 
{
}
