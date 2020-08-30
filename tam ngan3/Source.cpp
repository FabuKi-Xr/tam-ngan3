#include<stdio.h>
int main() {
	int i, num[99], count[99], n=0, discount;
	double sum = 0;
	for (i = 1;i <=99;i++) {
		printf("Enter value : ");
		scanf_s("%d",&num[i]);
		if (num[i] == 0) break;
		printf("Enter how many you get : ");
		scanf_s("%d",&count[i]);
		n++;
		sum += (num[i] * count[i]);
	}
	if (sum > 200 && n >= 3) {
		discount = (double)sum * 0.1;
		if (discount >= 50) sum -= 50;
		else sum -= discount;
	}
	printf("You have to pay for %.2lf baht\n", sum);
	return 0;
}