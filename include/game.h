#define BOARD_WIDTH 78
#define BOARD_HEIGHT 22

int initGame(void);
void clearBoard(void);
void runGame(void);
void nextGeneration(char* board);
int checkNeighbors(char *board, int x, int y);
void handleInput(void);