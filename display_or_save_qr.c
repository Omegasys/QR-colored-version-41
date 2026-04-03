#include <stdio.h>

#define WHITE      0
#define BLACK      1
#define RED        2
#define GREEN      3
#define BLUE       4
#define YELLOW     5
#define ORANGE     6
#define PURPLE     7
#define PINK       8
#define BROWN      9
#define GRAY       10
#define CYAN       11
#define MAGENTA    12
#define LIME       13
#define TEAL       14
#define INDIGO     15
#define VIOLET     16
#define MAROON     17
#define NAVY       18
#define OLIVE      19
#define GOLD       20
#define SILVER     21
#define BRONZE     22
#define CORAL      23
#define TURQUOISE  24
#define LAVENDER   25
#define PEACH      26
#define MINT       27
#define BEIGE      28
#define CRIMSON    29
#define CHARTREUSE 30
#define PERIWINKLE 31

#define QR_SIZE 10  // Adjust as needed

typedef struct {
    int matrix[QR_SIZE][QR_SIZE];
} qr_code_t;

void print_qr_matrix(qr_code_t *qr) {
    for (int i = 0; i < QR_SIZE; i++) {
        for (int j = 0; j < QR_SIZE; j++) {
            switch (qr->matrix[i][j]) {
                case WHITE:     printf(" "); break;
                case BLACK:     printf("#"); break;
                case RED:       printf("R"); break;
                case GREEN:     printf("G"); break;
                case BLUE:      printf("B"); break;
                case YELLOW:    printf("Y"); break;
                case ORANGE:    printf("O"); break;
                case PURPLE:    printf("P"); break;
                case PINK:      printf("p"); break;
                case BROWN:     printf("N"); break;
                case GRAY:      printf("A"); break;
                case CYAN:      printf("C"); break;
                case MAGENTA:   printf("M"); break;
                case LIME:      printf("L"); break;
                case TEAL:      printf("T"); break;
                case INDIGO:    printf("I"); break;
                case VIOLET:    printf("V"); break;
                case MAROON:    printf("m"); break;
                case NAVY:      printf("n"); break;
                case OLIVE:     printf("v"); break;
                case GOLD:      printf("g"); break;
                case SILVER:    printf("s"); break;
                case BRONZE:    printf("z"); break;
                case CORAL:     printf("c"); break;
                case TURQUOISE: printf("q"); break;
                case LAVENDER:  printf("w"); break;
                case PEACH:     printf("h"); break;
                case MINT:      printf("x"); break;
                case BEIGE:     printf("e"); break;
                case CRIMSON:   printf("d"); break;
                case CHARTREUSE:printf("u"); break;
                case PERIWINKLE:printf("j"); break;
                default:        printf("?"); break; // Handle unknown colors
            }
        }
        printf("\n");
    }
}
