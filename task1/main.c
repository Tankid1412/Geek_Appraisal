#include<stdio.h>
int main()
{
	
	double a = 1;	//���岢����ֵ��ֵ
	double x = 0;	//����x��y,����ʼ�� 
	double y = a;
	printf("x\t\ty\n");	//����Ļ����ʾx,y
	while (0.001 * y >= 1e-6)	//�������㣬��yǰ����ֵ֮��С�ڲ�����0.0001��ʱ��ֹ 
	{
		if(x<=0.011||x>6.89)	//if�����Ϊ�˿������x��y���� 
		{
			printf("%lf\t%lf\n", x, y);	//�������˲ʱx��y
		}
		x = x + 0.001;	//��һ�������x��һ������ 
		y = y - 0.001 * y;	//Eluer��ʽ����x��Ӧ��y��˲��ֵ 
	}
	
	printf("final stationary state is %lf",y);	//������ն�̬ 
	return 0;
	
}

