#include<stdio.h>
#include <stdbool.h>

bool sort();

int main(void) {
   bool result;
   result = sort();

   if (result == true) printf("오름차순\n");
   else if (result == false) printf("내림차순\n");
}

bool sort() {
   int select, temp = 0, cnt = 0;
   int num[5];

   //배열 저장
   printf("배열을 입력해주세요.");
   for (int i = 0; i < 5; i++) {
      scanf_s("%d", &num[i]);
   }

   //정렬방식 선택
   printf("정렬방식을 선택해주세요!\n");
   printf("1.오름차순, 2.내림차순 : ");
   scanf_s("%d", &select);

   //배열 갯수 설정
   int length = sizeof(num) / sizeof(int);

   if (select == 1) { //오름차순
      for (int i = 0; i < length; i++) {
         for (int j = i + 1; j < length; j++) {
            if (num[i] > num[j]) {
               temp = num[i];
               num[i] = num[j];
               num[j] = temp;
            }
         }
      }
      for (int i = 0; i < length; i++) {
         printf("%3d", num[i]);
      }
      printf("\n");

      return true;
   }
   else if (select == 2) { //내림차순
      for (int i = 0; i < length; i++) {
         for (int j = i + 1; j < length; j++) {
            if (num[i] < num[j]) {
               temp = num[i];
               num[i] = num[j];
               num[j] = temp;
            }
         }
      }
      for (int i = 0; i < length; i++) {
         printf("%3d", num[i]);
      }
      printf("\n");
   }
}
