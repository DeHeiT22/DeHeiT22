#include <stdio.h>
#include <stdlib.h>

const char*  BlindNumber(const char* phoneNumber){

	int index = 1;
	char* answer;
	for(int i = 0; phoneNumber[i] != '\0'; i++){
		index++;
	}
	answer = (char*)malloc(sizeof(char) * index);
	for(int i = 0; i < index; i++){
		if(i < index - 5)
			answer[i] = '*';
		else
			answer[i] = phoneNumber[i];
	}
	return answer;
}

int main(void){

	const char* phoneNumber = "01058751452";
	printf("input ; %s\n\n", phoneNumber);

	printf("output : %s\n\n", BlindNumber(phoneNumber));


	return 0;
}
