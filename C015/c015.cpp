#include <stdio.h>


int main(){
	
	unsigned int num, i, j, res=0;
	
	bool isPrime;
	
	num=20;
	
	for(i=2; i<=num; i++){
		isPrime = true;
		for(j=2; j*j<=i; j++) {
			if(i%j==0) {
				isPrime=false;
				break;
			}
		}
		if(isPrime) res++;
	}
	
	
	printf("%d", res);
   return 0;

}
