#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void) {
    char* menu[7];
    menu[0] = "������ : û����";
    menu[1] = "ȭ���� : �����";
    menu[2] = "������ : �����";
    menu[3] = "����� : Į����";
    menu[4] = "�ݿ��� : �ø�";
    menu[5] = "����� : �ҺҰ��";
    menu[6] = "�Ͽ��� : ����Ұ��";

    char* dow = malloc(sizeof(char) * 10);
    printf("������ �Է��ϼ���.");
    scanf("%s", dow);
  

    if (strcmp(dow, "������") == 0)
        printf("%s\n", menu[0]);
    else if (strcmp(dow, "ȭ����") == 0)
        printf("%s\n", menu[1]);
    else if (strcmp(dow, "������") == 0)
        printf("%s\n", menu[2]);
    else if (strcmp(dow, "�����") == 0)
        printf("%s\n", menu[3]);
    else if (strcmp(dow, "�ݿ���") == 0)
        printf("%s\n", menu[4]);
    else if (strcmp(dow, "�����") == 0)
        printf("%s\n", menu[5]);
    else if (strcmp(dow, "�Ͽ���") == 0)
        printf("%s\n", menu[6]);
    return 0;
}