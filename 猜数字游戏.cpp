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
	ret = rand()%100+1;//����1-100֮�������� 
	while(1)
	{
		printf("�������\n");
		scanf("%d",&guess);
		if(guess<ret)
		{
			printf("��С��\n");
			count++;
		}
		else if(guess>ret)
		{
			printf("�´���\n");
			count++;
		} 
		else
		{
			printf("�¶���\n");
			printf("����%d��\n",count);
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
		printf("��ѡ��:");
		scanf("%d",&input);
		switch(input)
		{
			case 1://case�����֮��Ҫ��һ���ո񣡣����� 
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	}
	while(input);//ֻҪ���� �ͻ�һֱѭ�� 
	return 0;
} 


//��̫����ˣ�������ѧtime��������ѧsrand��rand�����д�����Ϸ
//time_t time��time_t*timer������ int time ��int*timer�� ǰ���int������ֵ��һ�������μ����� �������ǽ���һ����ַ��Ӧ���ǽ���ϵͳʱ��ĵ�ַ
//ʱ�������ǰʱ��-���������ʱ�䣨1970.1.1 0.0.0��
//����Ϸ�ĳ齱��˵������������Ϸ��ʱ����Ϸ��ȡ���ʱ�䲢���棬��齱ʱ������齱��ʱ��-����ʱ�䣬��n�������Ӧ
//��ʱ�����Ҳ�ǰ�˳��仯���� ��ô��� 
//ʱ�����srand��ɶ��ϵ��Ϊɶ�����������������㰡 
//ʱ����ǲ�ֵ����ǰ��ʱ���ڲ��ϱ仯�����ʱ���Ҳ�ڲ��ϵı仯������һ�ξ͹���
//NULL�ǿ�ָ��   (unsigned int ) time ��srand�Ĳ����������Ƿ���һ���仯�����Σ�����NULL����time�Ĳ�������ΪtimeҪ������һ��ָ�����͵Ĳ���
//srand������������Ϊrand��������һ���������㣻��Ȼrand������������Ǽ�����
