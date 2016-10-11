/*scanf로 문자열 입력을 받아 그대로 출력해주고 문자의 길이의 데이터를 불러오는 코드*/
#include <stdio.h>
#include <string.h>


int main(void) {

  char str[] = {0};
  int num;

  scanf("%s", &str);
  printf("str size num : %lu\n", strlen(str));
  return 0;
}
