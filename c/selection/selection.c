#include <stdio.h>

int main() {
	int list[] = { 29,72,98,13,87,66,52,51,36 };
	int len = sizeof(list) / sizeof(int);
	int min = 0, select = 0, temp = 0;
	int i = 0;

	for (select = 0; select < len; select++) {
		min = select;
		for (i = select+1; i < len; i++) {
			if (list[min] > list[i]){
				min = i;
			}
		}

		temp = list[select];
		list[select] = list[min];
		list[min] = temp;

		printf("%d ", list[select]);
	}

	return 0;
}