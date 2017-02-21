#include <stdio.h>
#include <stdlib.h>
//define random keymap
const int ROWS = 4; // Four rows
const int COLS = 4; // Four columns
// Declare 2D array
char keys[ROWS][COLS] ;

int main(void) {
  // Initialize 2D array values
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      keys[i][j] = "ABCDEFGHIJKLMNOP"[random () % 16];
      printf("%c\n",keys[i][j] );
    }
  }
}
