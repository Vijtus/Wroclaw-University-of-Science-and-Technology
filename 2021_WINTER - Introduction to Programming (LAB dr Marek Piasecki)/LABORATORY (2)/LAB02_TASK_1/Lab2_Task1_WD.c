#include <stdio.h>
int main()
{
	short int num = 0;
	float f_num = 0;
	char ch;
	char text[30];
	int boolean = 0;
	
	printf("Enter number:");
	scanf("%hd", &num);

	printf("Enter float number:");
	scanf("%f", &f_num);
	fflush(stdin);
	
	printf("Enter character:");
	scanf("%c", &ch);
	
	printf("Enter text:");
	scanf("%s", &text [0]);
	
	printf("Enter boolean:");
	scanf("%d", &boolean);
	
	printf("%15.2hd\n", num);
	printf("%15.2f\n", f_num);
	printf("%15ch\n", ch);
	printf("%15.2text\n", text);
	printf("%15d\n", boolean);
	
	return 0;
}