//scanf로 입력시 그 0부터 9에서 숫자를 알아낸 후 비교후 일치하면 그 단에 대한 곱셈을 출력하는 소스
#include <stdio.h>
int main() {
 	int result;
 	int input;
 	while(1) {
 		printf("곱셈을 할 단을 입력해주세요\n");
 		scanf("%d", &input);
 		if(input<=9) {
 			for(int i=0; i<10; i++) {
 				result = input * i;
 				printf("%d * %d = %d\n", input, i, result);
 			}
 		}
 		else {
 			printf("올바르지 않은 값입니다.\n");
 		}
 	}
}