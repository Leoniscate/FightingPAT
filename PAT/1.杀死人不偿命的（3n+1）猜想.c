#include <stdio.h>

//PAT�Ҽ����⼰ѵ����1001��
//��Ŀ��ַ https://www.patest.cn/contests/pat-b-practise/1001
//2018.2.1 23��59
//СС����Ա����leon@hooc.top
//��ӭ����С�׻�����־��PAT��ͯЬ��ɧ��С�ܰ�
 
int f(int x){//��д�����㷨 
	int i = 0;
	
	while(x!=1){//����x���ֵΪ1 
	
	if(x%2==0){//�ж��Ƿ���ż�� 
		x=x/2;
	}else{
		x=(3*x + 1)/2;
	}
	i++;
	return x;	//��xֵ���� 
}

	return i;//���ش���i��ֵ 
}

int main(){
	int a;
	printf("������һ������0С��1000��������"); 
	scanf("%d",&a);
	if(a>=0&&a<=1000){//�ж�������С�Ƿ�������Χ�� 
		int b;
		b=f(a);//���ú��� 
		printf("count = %d",b);
		
	}else{
		printf("please input right number!"); 
	}
	return 0;
} 
