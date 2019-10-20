#include <stdio.h>

int bs(int *a, int size, int target) {
	int head = 0;
	int last = size-1;
	printf("Start search:\n");
	while (head <= last) {
		int mid = (head+last)/2;
		printf("Current head=%d, last=%d, mid=%d\n", head, last, mid);
		if (a[mid] > target) {
			last = mid-1;
		} else if (a[mid] < target) {
			head = mid+1;
		} else if (a[mid] == target) {
			printf("Found idx of %d is %d\n", target, mid);
			return mid;
		}
	}
	printf("Can not find idx of %d\n", target);
	return 0;
}

int main() {
	int a[] = {1,2,10,13,44,65,66,100,130,200};
	int target = 44;
	int size = sizeof(a)/sizeof(a[0]);
	for (int i=0; i<size; i++) {
		printf("%d. %d\n", i, a[i]);
	}
	printf("\n");
	int idx = bs(a, size, target);
	return 0;
}
