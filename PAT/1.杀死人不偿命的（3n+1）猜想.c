#include <stdio.h>

//PAT乙级真题及训练集1001题
//题目地址 https://www.patest.cn/contests/pat-b-practise/1001
//2018.2.1 23：59
//小小程序员邮箱leon@hooc.top
//欢迎大佬小白或者有志考PAT的童鞋来骚扰小弟啊
 
int f(int x){//描写核心算法 
	int i = 0;
	
	while(x!=1){//最终x输出值为1 
	
	if(x%2==0){//判断是否是偶数 
		x=x/2;
	}else{
		x=(3*x + 1)/2;
	}
	i++;
	return x;	//将x值返回 
}

	return i;//返回次数i的值 
}

int main(){
	int a;
	printf("请输入一个大于0小于1000的整数！"); 
	scanf("%d",&a);
	if(a>=0&&a<=1000){//判断整数大小是否在允许范围内 
		int b;
		b=f(a);//调用函数 
		printf("count = %d",b);
		
	}else{
		printf("please input right number!"); 
	}
	return 0;
} 
