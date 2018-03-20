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
		printf("가위바위보 게임\n");
		printf("player 1 낼차례[0가위,1바위,2보]:\n \a");
		scanf("%d", &p1);
		printf("com 낼차례[0가위,1바위,2보]:\n \a");
	
	 	com = rand() % 3;
	
		
		//scanf("%d", &com);// 이거 실행하면 직접 2인용 
			
		if(p1 == 0)
			printf("p1이 가위냄\n"); 
		if(com == 0)
			printf("com가 가위냄\n");
			
		if(p1 == 1)
			printf("p1이 바위냄\n");
		if(com == 1)
			printf("com가 바위냄\n");
			
		if(p1 == 2)
			printf("p1이 보냄\n");
		if(com == 2)
			printf("com가 보냄\n");
			
		
		if(p1==0&&com==1)
		printf("p1이짐\ncom가이김");
		
		if(p1==0&&com==2)
		printf("p1이이김\ncom가짐");
		
		if(p1==1&&com==0)
		printf("p1이이김\ncom가 짐");
		
		if(p1==1&&com==2)
		printf("p1이 짐\ncom가 이김");
		
		if(p1==2&&com==0)
		printf("p1이짐\ncom가 이김");
		
		if(p1==2&&com==1)
		printf("p1이 이김\ncom가짐 ");

		if(p1 == com )
		printf("비김");

		if(p1 >= 3) 
		printf("\n잘못된 입력");
	
		
		 Sleep(705);
		 	
			 printf("\n 다시하려면 r키를 입력하세요\n") ;
	
	 getchar();
	scanf_s("%c",&re,1);

	system("cls");
	} while( re=='r');
		

	return 0;
	
}
	

