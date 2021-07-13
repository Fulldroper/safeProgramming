#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPasswordOk() {
	char password[12];
	gets(password);
	return 0 == strcmp(password, "goodpass");
}

int main(int argc, char* argv[]) {
	bool status;
	puts("Enter password: ");
	status = isPasswordOk();
	if (!status) {
		puts("Access denied");
		system("pause");
		exit(-1);
	}
	puts("Passed");
	system("pause");
	exit(-1);
	return 0;
}
