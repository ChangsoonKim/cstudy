/*scanf로 문자열 입력을 받아 그대로 출력해주는 코드*/
#include <stdio.h>
int main() {
  char words[30];
  
  printf("Please Write Your Name : ");
  scanf("%s", words);
  printf("Name : %s \n", words);
  return 0;
} 