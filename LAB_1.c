#include <stdio.h>
int main(){
	int money = 0;
	int x = 1;

	printf("*-----------------------------*\n");
	printf("โปรแกรมคำนวนชนิดเหรียญ\n");

	while (x > 0) {
		printf("Enter Money: ");
		scanf("%d", &money);
		x = money;
	
		if(money >= 10){
			printf("เหรียญ 10 บาทจำนวน %d เหรียญ\n", money/10);
			money = money % 10;
		}
		
		if(money >= 5){
				printf("เหรียญ 5 บาทจำนวน %d เหรียญ\n", money/5);
				money = money % 5;
		}

		if(money >= 2){
				printf("เหรียญ 2 บาทจำนวน %d เหรียญ\n", money/2);
				money = money % 2;
		}

		if(money >= 1){
				printf("เหรียญ 1 บาทจำนวน %d เหรียญ\n", money/1);
				money = money % 1;
		}
		
	printf("*-----------------------------*\n");
	
	}
	
	return 0;
}
