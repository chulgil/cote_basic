#include <stdio.h>

int reverse(int x){
	int res=0, digit;

	while(x>0){	
		digit=x%10;
		res = res * 10 + digit;
		x/=10;
	}

	return res;
}

bool isPrime(int x){
	int i;
	if(x==1)return true;
	for (i=2; i<x; i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	
	int row, num, i, res;

	scanf("%d", &row);
	
	for(i=0; i<row; i++){
		scanf("%d", &num);
		res = reverse(num);
		if(isPrime(res))
			printf("%d ", res);
	}

   return 0;

}
