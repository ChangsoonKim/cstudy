//구구단을 출력하는 프로그램 이중 for문을 이용한 방법
#include <stdio.h>
int main() { 
	printf("Welcome to GuGu Program\n");

	int result;

	for(int i = 0; i<10; i++) {
		for(int j = i; j<10; j++) {
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);
		}
	}
}