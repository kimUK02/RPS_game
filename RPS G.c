#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include <windows.h>

int main()
{ 
		
		int p1;
		int com;
		char re;
		srand((int)time(NULL));
	do{
		printf("���������� ����\n");
		printf("player 1 ������[0����,1����,2��]:\n \a");
		scanf("%d", &p1);
		printf("com ������[0����,1����,2��]:\n \a");
	
	 	com = rand() % 3;
	
		
		//scanf("%d", &com);// �̰� �����ϸ� ���� 2�ο� 
			
		if(p1 == 0)
			printf("p1�� ������\n"); 
		if(com == 0)
			printf("com�� ������\n");
			
		if(p1 == 1)
			printf("p1�� ������\n");
		if(com == 1)
			printf("com�� ������\n");
			
		if(p1 == 2)
			printf("p1�� ����\n");
		if(com == 2)
			printf("com�� ����\n");
			
		
		if(p1==0&&com==1)
		printf("p1����\ncom���̱�");
		
		if(p1==0&&com==2)
		printf("p1���̱�\ncom����");
		
		if(p1==1&&com==0)
		printf("p1���̱�\ncom�� ��");
		
		if(p1==1&&com==2)
		printf("p1�� ��\ncom�� �̱�");
		
		if(p1==2&&com==0)
		printf("p1����\ncom�� �̱�");
		
		if(p1==2&&com==1)
		printf("p1�� �̱�\ncom���� ");

		if(p1 == com )
		printf("���");

		if(p1 >= 3) 
		printf("\n�߸��� �Է�");
	
		
		 Sleep(705);
		 	
			 printf("\n �ٽ��Ϸ��� rŰ�� �Է��ϼ���\n") ;
	
	 getchar();
	scanf_s("%c",&re,1);

	system("cls");
	} while( re=='r');
		

	return 0;
	
}
	

