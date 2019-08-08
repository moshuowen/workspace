#include<stdio.h>
enum number {
	RED,YELLOW,GREEN,NUMCOLORS //自动计数的枚举 
};
int main(int argc,char const *argv[]){
	int color = -1;
	char *ColorNames[NUMCOLORS] = {"red","yellow","green",};
	char *ColorName =NULL;
	printf("输入你喜欢的颜色代码\n");
	scanf("%d",&color);
	if(color >= 0 && color < NUMCOLORS){
		ColorName = ColorNames[color];
	}else{
		ColorName = "UnKnown";
	}
	printf("你喜欢的颜色是%s\n",ColorName);
}
