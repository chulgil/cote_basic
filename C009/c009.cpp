#include <stdio.h>

int main(){
	int cnt[50001];
	int n, i, j;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		cnt[i] = 0;
		for(j=1; j<=i; j++) {
			if(i%j==0) cnt[i]++;
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d ", cnt[i]);
	}
    
   return 0;

}
