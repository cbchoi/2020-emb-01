#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

void* thread1(void * arg)
{
	int i = 1;
	
	for(; i < 5; i++)
	{
		printf("thread1:%0d\n", i);		
		sleep(0.1);
	}
	
}

void* thread2(void * arg)
{
	sleep(0.1);
	int i = 5;
	for(; i < 10; i++)
	{
		printf("thread2:%0d\n", i);		
	}
}

int main()
{
	pthread_t pt1, pt2;

	pthread_create(&pt1, NULL, thread1, NULL);
	pthread_create(&pt2, NULL, thread2, NULL);

	pthread_join(pt1, NULL);
	pthread_join(pt2, NULL);

	return 0;
}