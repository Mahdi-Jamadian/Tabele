#include <stdio.h>

int main() {
    int Array[6][6]={
             {0, 6, 7, 8, 9, 10}
            ,{6, 36, 42, 48, 54, 60}
            ,{7, 42, 79, 56, 63, 70}
            ,{8, 48, 56, 64, 72, 80}
            ,{9, 54, 63, 72, 81, 90}
            ,{10, 60, 70, 80, 90, 100}
    };
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf_s("%d  ",Array[i][j]);
        }
        puts("\n");
    }
    return 0;
}
