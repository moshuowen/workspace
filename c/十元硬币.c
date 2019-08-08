#include<stdio.h>
int main(){
	int x;
	int exit = 0;
	int one, two ,five;
	//printf("请输入x\n");
	x = 2;
	//scanf("%d",&x);
	for(one  = 1;one < x * 10 ; one++){
		for(two =1 ; two < x * 10 / 2;two++){
			for(five = 1;five < x * 10 / 5;five++){
				if(one  + two * 2 + five * 5 == x * 10){
					printf("%d个一角 + %d个两角 + %d个五角组成%d元\n",one,two,five,x);
					//exit =  1;
					goto out;
					//break;
				}
			}
			//if(exit) break;
		}
		//if(exit) break;
	}





 out :
	return 0;
}

