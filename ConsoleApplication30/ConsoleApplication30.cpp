#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int width = 0;
    int hight = 0;

    printf("가로의길이");
        scanf("%d", &width);

        printf("세로의길이");
        scanf("%d", &hight);

    printf("직사각형의넓이 ");
    printf("%d", hight * width);

    printf("직사각형의둘레 ");
    printf("%d", hight * 2 + width * 2);
}
