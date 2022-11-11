#include<stdio.h>
int main()
{
	
	double a = 1;	//定义并给初值赋值
	double x = 0;	//定义x和y,并初始化 
	double y = a;
	printf("x\t\ty\n");	//在屏幕上显示x,y
	while (0.001 * y >= 1e-6)	//迭代计算，当y前后两值之差小于步长的0.0001倍时终止 
	{
		if(x<=0.011||x>6.89)	//if语句是为了控制输出x和y数据 
		{
			printf("%lf\t%lf\n", x, y);	//输出各个瞬时x和y
		}
		x = x + 0.001;	//上一轮输出后，x加一个步长 
		y = y - 0.001 * y;	//Eluer公式计算x对应的y的瞬间值 
	}
	
	printf("final stationary state is %lf",y);	//输出最终定态 
	return 0;
	
}

