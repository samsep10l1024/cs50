#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* today(char* dow); //�ش���Ͽ� �޴� 

int main(void) {

    char* dow = malloc(sizeof(char) * 10); // ������ ����� ���� �����޸� �Ҵ�
    printf("������ �Է��ϼ���."); // �����Է�
    scanf("%s", dow);
    char* menu = today(dow); // today���� ������
    printf("%s: %s\n", dow, menu);

}

char* today(char* dow) {  // ������ �Է¹޾� �ش� ������ �޴� ��ȯ
    char* menu[7][2] = { //���Ϻ� �޴� ��Ī
        {"������", "û����"},
        {"ȭ����", "�����"},
        {"������", "�����"},
        {"�����", "Į����"},
        {"�ݿ���", "�ø�"},
        {"�����", "�ҺҰ��"},
        {"�Ͽ���", "����Ұ��"}
    };
    char* result = NULL;  
    for (int i = 0; i < 7; i++) {
        if (strcmp(dow, menu[i][0]) == 0) { // �Է¹��� ���ڿ��� menu�� ���ڿ� ��
            result = menu[i][1];
        }
    }
    return result;
}