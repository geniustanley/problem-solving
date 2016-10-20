#include <stdio.h>
int dollars[5] = {1, 5, 10, 25, 50};
long long cnt[30100] = {};
int main(void)
{
	cnt[0] = 1;
	for(int i = 0; i < 5; i++)
		for(int j = 0; j+dollars[i] <= 30000; j++)
			cnt[j+dollars[i]] += cnt[j];

	int n;

	while(EOF != scanf("%d", &n)) {
		if(cnt[n] == 1)
			printf("There is only 1 way to produce %d cents change.\n", n);
		else
			printf("There are %lld ways to produce %d cents change.\n", cnt[n], n);


	}

	
	return 0;
}

