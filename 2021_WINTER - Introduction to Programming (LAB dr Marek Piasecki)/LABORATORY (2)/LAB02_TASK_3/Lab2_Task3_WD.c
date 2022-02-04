#include <stdio.h>
int main() {
	int a, b, c, d;
 	printf("Enter a four numbers (one by one):");
 	scanf("%d %d %d %d", &a, &b, &c, &d);
 	if (a==b && b==c && c==d)
	 {
		 printf("Fours");
	 }
	 else if (a==b && b==c || a==c && c==d || a==b && b==d || b==c && c==d){
		 printf("Threes");
	 }
	 else if (a==b||a==c||a==d||b==c||b==d||c==d){
		 printf("Double");
	 }
	 else{
	 printf("No repetitions");
	 }
	 return 0;
}