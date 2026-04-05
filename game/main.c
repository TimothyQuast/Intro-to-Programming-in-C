#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define X_MAX 60
#define Y_MAX 20

typedef struct  {
    int jetx;
    int jety;
} GameState;

void render_board(GameState state) {

    for (int i = 0; i < Y_MAX; i++) {
        printf("\033[A");  
    }
    printf("\r");         

    for(int y = 0; y < Y_MAX; y++) {
        for(int x = 0; x < X_MAX; x++) {
            if ( x == X_MAX - 1 && y == Y_MAX - 1) {
                printf("▟");
            } else if ( x == 0 && y == Y_MAX - 1) {
                printf("▙");
            } else if ( x == X_MAX - 1 && y == 0 ) {
                printf("▜");
            } else if ( x == 0 && y == 0) {
                printf("▛");
            } else if (y == 0) {
                printf("▀");
            } else if (x == state.jetx && y == state.jety) {
                printf("▲");
            } else if ( y == Y_MAX - 1 ) {
                printf("▄");
            } else if ( x == X_MAX - 1 ) {
                printf("▐");
            } else if ( x == 0 ) {
                printf("▌");
            } else {
                putchar(' ');
            }

        }
        putchar('\n');
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    GameState state = {5, 5};
    int c;
    
    putchar('\n');
    putchar('\n');


    while (1) {
        if (_kbhit()) {
            int ch = _getch();

            if (ch == 0 || ch == 224) {
                ch = _getch();  // get the actual key code
                switch (ch) {
                    case 72: state.jety--; break;
                    case 80: state.jety++;  break;
                    case 75: state.jetx--;  break;
                    case 77: state.jetx++; break;
                }
            }
            if (ch == 'q') break;
        }

        render_board(state);
    }

    printf("Goodbye, World!");
    return 0;
}
