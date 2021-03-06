#include <stdio.h>

#include <interpreter.h>
#include <screen.h>

int main() {
	int opc;

	while (opc != 3) {
		clrscr();

		printf("\t*** Welcome to Simple Machine code interpreter ***\n");
		printf("\nType program...1");
		printf("\nLoad program...2");
		printf("\nExit...........3\n");
		printf("\n>> ");
		scanf("%d", &opc);

		switch (opc) {
			case 1:
				type();
				execute();
				dump();
				break;
			case 2 :
				load();
				execute();
				dump();
				break;
			case 3 :
				clrscr();
				break;
			default:
				getchar();
			break;
		}
	}

	return 0;
}
