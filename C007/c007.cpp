
#include<stdio.h>

int main(){
	char a[101], b[101];
	int i, j=0;
	scanf("%[^\n]s", a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]==' ') continue;
		if(a[i]>=97 && a[i]<=122){
			b[j]=a[i]-32;
		}
		else b[j]=a[i];
	
		j++;
	}
	
	
	printf("%s\n", b);
    
   return 0;

}
