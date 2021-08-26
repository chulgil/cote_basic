#include <stdio.h>

int disit_sum(int num){

	int sum=0;
	while(num > 0){
		sum += num % 10;
		num /= 10;
	}
	
	return sum;
}


int main(){
	
	int total, num, i, tmp, sum=0, res;

	scanf("%d", &total);
	
	for(i=0; i<total; i++){
		scanf("%d", &num);
		tmp=disit_sum(num);
		if(sum<tmp) {
			sum = tmp;
			res = num;
		}
		else if(sum==tmp){
			if(num>res) res=num;
		}
	}

	printf("%d ", res);
			
   return 0;

}
