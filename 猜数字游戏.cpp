#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("######################\n");
	printf("####1.play  0.exit####\n");
	printf("######################\n");
}
void game()
{
	int count =0;
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//生成1-100之间的随机数 
	while(1)
	{
		printf("请猜数字\n");
		scanf("%d",&guess);
		if(guess<ret)
		{
			printf("猜小了\n");
			count++;
		}
		else if(guess>ret)
		{
			printf("猜大了\n");
			count++;
		} 
		else
		{
			printf("猜对了\n");
			printf("猜了%d次\n",count);
			Sleep(1000);
			system("cls");
			break;
	    }
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d",&input);
		switch(input)
		{
			case 1://case与情况之间要有一个空格！！！！ 
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	}
	while(input);//只要非零 就会一直循环 
	return 0;
} 


//套太多层了，可以先学time函数，再学srand和rand，最后写这个游戏
//time_t time（time_t*timer）类似 int time （int*timer） 前面的int代表返回值是一个长整形即整形 括号里是接收一个地址，应该是接收系统时间的地址
//时间戳：当前时间-计算机产生时间（1970.1.1 0.0.0）
//用游戏的抽奖来说就是你下载游戏的时候游戏获取你的时间并保存，你抽奖时根据你抽奖的时间-保存时间，和n个结果对应
//可时间戳不也是按顺序变化的吗 怎么随机 
//时间戳和srand有啥关系，为啥可以设置随机数的起点啊 
//时间戳是差值，当前的时间在不断变化，因此时间戳也在不断的变化，所以一次就够了
//NULL是空指针   (unsigned int ) time 是srand的参数，作用是返回一个变化的整形，而（NULL）是time的参数，因为time要求输入一个指针类型的参数
//srand函数的作用是为rand函数设置一个随机的起点；不然rand的随机数就是那几个了
