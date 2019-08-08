#include<stdio.h>
int main(){
	int x;
	int number[100];
	double sum = 0;
	int n = 0;
	scanf("%d",&x);
	while(x != -1){
		number[n] = x;
		sum += number[n];
		n++;
		scanf("%d",&x);
	}	
	printf("%.2f\n",sum / n);
	if(n > 0){
		for(int i = 0;i < n;i++){
			if(number[i] > (sum / n ) ){
				printf("%d\n",number[i]);
			}	
		}
	}

	return 0;
}

