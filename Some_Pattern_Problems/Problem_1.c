#include<stdio.h>
void DrawRectangleSolid(void);
int main()
{
	DrawRectangleSolid();
	return 0;
}
void DrawRectangleSolid(void){
	//Declared two variables to get the values
	int x, y;
	printf("enter the length of rectangle : \n");
	scanf("%d", &x);
	printf("enter the height of rectangle : \n");
	scanf("%d",&y);
	for(int i = 0; i < x; i++){
		for(int l = 0; l < y; l++){
			printf("*");
		}
		printf("\n");
	}
	
}