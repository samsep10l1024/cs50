#define _CRT_SECURE_NO_WARNINGS
#define YEAR 12
#define INTEREST 0.012
#include <stdio.h>

int main() {

	int deposit = 0; // 예금을 입력받을 변수
	int principal = 0; // 원금 변수
	int sum = 0; // 총받을 금액
	float val = 0; //이자 받을 변수

	printf("목표금액 : ");
	scanf("%d", &deposit); // 목표금액 입력

	//1년 만기시 원금과 받게될 금액
	principal = deposit * YEAR; // 원금
	val = (deposit * YEAR)*INTEREST; //발생한 이자
	sum = principal + val; // 원금 + 이자



	printf("원금 : %d\n", principal); // 원금출력
	printf("발생 이자: %.f\n", val); // 이자출력
	printf("받게될 금액 : %d원\n", sum); // 받게될 총액
}