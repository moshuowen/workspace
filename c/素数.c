#include<stdio.h>
int main(){
	int isPrime = 1;
	int x;
	int i = 2;
	scanf("%d",&x);
	if(x < 2 || x > 2 && x % 2 ==0) isPrime = 0;
	if(isPrime == 1){
		for(i = 3;i < x;i++){
			if(x % i == 0){
				isPrime = 0;
			//	printf("in loop\n");
				break;
			}
	}
	if(isPrime == 1){
	}
		printf("%d 是素数\n",x);
	}else {
		printf("%d 不是素数\n",x);
	}



	return 0;
}

