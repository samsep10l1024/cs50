#define _CRT_SECURE_NO_WARNINGS
#define YEAR 12
#define INTEREST 0.012
#include <stdio.h>

int main() {

	int deposit = 0; // ������ �Է¹��� ����
	int principal = 0; // ���� ����
	int sum = 0; // �ѹ��� �ݾ�
	float val = 0; //���� ���� ����

	printf("��ǥ�ݾ� : ");
	scanf("%d", &deposit); // ��ǥ�ݾ� �Է�

	//1�� ����� ���ݰ� �ްԵ� �ݾ�
	principal = deposit * YEAR; // ����
	val = (deposit * YEAR)*INTEREST; //�߻��� ����
	sum = principal + val; // ���� + ����



	printf("���� : %d\n", principal); // �������
	printf("�߻� ����: %.f\n", val); // �������
	printf("�ްԵ� �ݾ� : %d��\n", sum); // �ްԵ� �Ѿ�
}