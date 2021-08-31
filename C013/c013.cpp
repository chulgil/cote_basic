#include <stdio.h>

int ch[10];

int main(){
	char a[101];
   int i, digit, cnt, res;
   scanf("%s", a);
   for(i=0; i<a[i]!='\0'; i++){
   	digit = a[i] - 48;
	   ch[digit]++;
   }


	cnt = ch[0];
   for(i=1; i<10; i++){
	   if(cnt <= ch[i]) {
	   	cnt = ch[i];
		   res = i;
	   }
   }
   
   printf("%d", res);
   return 0;
}
