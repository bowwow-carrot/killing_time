#include <stdio.h>


int main() {
	int list[] = { 9, 7, 6, 15, 17, 5, 10, 11 };
	int temp = 0, i = 0, j = 0;
	int len_list = sizeof(list) / sizeof(int);

	for (i = 0; i < len_list; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");

	for (i = 0; i < len_list; i++) {
		for (j = i; j>=0 && j+1 < len_list; j--) {
			if (list[j + 1] < list[j]) {
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
		}
	}

	for (i = 0; i < len_list; i++) {
		printf("%d ", list[i]);
	}
	
	return 0;
}