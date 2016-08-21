#include<stdio.h>

static char input[2048];

int main(){
	
	puts("LiteLisp v.0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	while(1){
		fputs("LLispy> ",stdout);
		fgets(input,2048,stdin);
		printf("No. You're not %s",input);
	}
	
	return 0;
}
