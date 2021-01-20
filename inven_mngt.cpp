#define SUBAK 5 // 수박 개수 정의
#define SUBAK_VAL 10000 // 수박 가격 정의
#define VAT 0.1 // 부가세 10%

#include <stdio.h>

int main() {
	//문제 해당하는 것만 풀기위해 scanf나 함수선언 따로 사용하지 않았습니다.

	int num = 3; // 주문건수
	int sales = 0; // 매출액
	float vat = 0; //부가가치세 계산

	printf("주문건수 : %d\n", num); //주문건수 출력
	printf("기존 재고량 : %d\n", SUBAK); //기존 재고량 출력
	printf("남은 재고량 : %d\n", SUBAK - num); // 기존재고량에서 주문건수만큼 차감

	//매출액 및 부가가치세 계산
	vat =  (num * SUBAK_VAL)* VAT; // 부가가치세 계산
	sales = (num * SUBAK_VAL) + vat; //매출액과 부가가치세를 더함
	printf("매출액(부가세포함) : %d", sales);
}
