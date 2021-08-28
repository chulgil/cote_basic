#include <stdio.h>



int main(){

   int n, i, j, tmp, res=0;
	
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		
		tmp=i;
		while(tmp>9){
			tmp/=10;
			res++;
		}

	}
	
	printf("%d",res+n);
	
	
   return 0;

}


