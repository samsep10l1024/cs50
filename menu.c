#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void) {
    char* menu[7];
    menu[0] = "월요일 : 청국장";
    menu[1] = "화요일 : 비빔밥";
    menu[2] = "수요일 : 된장찌개";
    menu[3] = "목요일 : 칼국수";
    menu[4] = "금요일 : 냉면";
    menu[5] = "토요일 : 소불고기";
    menu[6] = "일요일 : 오삼불고기";

    char* dow = malloc(sizeof(char) * 10);
    printf("요일을 입력하세요.");
    scanf("%s", dow);
  

    if (strcmp(dow, "월요일") == 0)
        printf("%s\n", menu[0]);
    else if (strcmp(dow, "화요일") == 0)
        printf("%s\n", menu[1]);
    else if (strcmp(dow, "수요일") == 0)
        printf("%s\n", menu[2]);
    else if (strcmp(dow, "목요일") == 0)
        printf("%s\n", menu[3]);
    else if (strcmp(dow, "금요일") == 0)
        printf("%s\n", menu[4]);
    else if (strcmp(dow, "토요일") == 0)
        printf("%s\n", menu[5]);
    else if (strcmp(dow, "일요일") == 0)
        printf("%s\n", menu[6]);
    return 0;
}