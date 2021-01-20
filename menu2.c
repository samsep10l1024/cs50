#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* today(char* dow); //해당요일에 메뉴 

int main(void) {

    char* dow = malloc(sizeof(char) * 10); // 포인터 사용을 위한 동적메모리 할당
    printf("요일을 입력하세요."); // 요일입력
    scanf("%s", dow);
    char* menu = today(dow); // today에서 가져옴
    printf("%s: %s\n", dow, menu);

}

char* today(char* dow) {  // 요일을 입력받아 해당 요일의 메뉴 반환
    char* menu[7][2] = { //요일별 메뉴 매칭
        {"월요일", "청국장"},
        {"화요일", "비빔밥"},
        {"수요일", "된장찌개"},
        {"목요일", "칼국수"},
        {"금요일", "냉면"},
        {"토요일", "소불고기"},
        {"일요일", "오삼불고기"}
    };
    char* result = NULL;  
    for (int i = 0; i < 7; i++) {
        if (strcmp(dow, menu[i][0]) == 0) { // 입력받은 문자열과 menu의 문자열 비교
            result = menu[i][1];
        }
    }
    return result;
}