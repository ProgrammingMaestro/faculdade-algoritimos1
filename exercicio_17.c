#include <stdio.h>
int main() {
	int nums[5], i, j, temp;

	printf("Digite 5 numeros inteiros:\n");
	for (i = 0; i <= 4; i++) {
		scanf("%d", &nums[i]);
	}

	// Insertion sort https://www.geeksforgeeks.org/insertion-sort-algorithm/
	int n = sizeof(nums) / sizeof(nums[0]);
	for (i = 0; i < n; i++) {
		int key = nums[i];
		int j = i - 1;
		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			j = j - 1;
		}
		nums[j + 1] = key;
	}

	printf("Numeros em ordem crescente: ");
	for (i = 0; i <= 4; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}