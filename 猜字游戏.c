#include<stdio.h>
#include<time.h>

void menu()
{
	printf("################################\n");
	printf("####   1.play     0.exit    ####\n");
	printf("######3#########################\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret =rand()%100+1;
	while(1)
	{
		printf("����������\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

int main()

{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>;");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
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
	while(input);
	return 0;
}


