#define SUBAK 5 // ���� ���� ����
#define SUBAK_VAL 10000 // ���� ���� ����
#define VAT 0.1 // �ΰ��� 10%

#include <stdio.h>

int main() {
	//���� �ش��ϴ� �͸� Ǯ������ scanf�� �Լ����� ���� ������� �ʾҽ��ϴ�.

	int num = 3; // �ֹ��Ǽ�
	int sales = 0; // �����
	float vat = 0; //�ΰ���ġ�� ���

	printf("�ֹ��Ǽ� : %d\n", num); //�ֹ��Ǽ� ���
	printf("���� ��� : %d\n", SUBAK); //���� ��� ���
	printf("���� ��� : %d\n", SUBAK - num); // ����������� �ֹ��Ǽ���ŭ ����

	//����� �� �ΰ���ġ�� ���
	vat =  (num * SUBAK_VAL)* VAT; // �ΰ���ġ�� ���
	sales = (num * SUBAK_VAL) + vat; //����װ� �ΰ���ġ���� ����
	printf("�����(�ΰ�������) : %d", sales);
}
