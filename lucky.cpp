#include<bits/stdc++.h>

int main (){
	int lucky[]={1, 3, 7, 9, 13, 15, 21, 25, 31, 33, 37, 43, 49, 51, 63, 67, 69, 73, 75, 79, 87, 93, 99}, aux=1, flag;
	printf("Press 0 to Esc\n");
	while(aux>0){
		flag=0;
		scanf("%d", &aux);
		for (int i=0; 99>lucky[i]; i++){
			if(aux==lucky[i]) {
				printf("%d is a lucky number\n", aux); 
				flag=1;				
				break;
			}
		}
		if(flag==0) printf("%d is not a lucky number\n", aux); 
	}
}
