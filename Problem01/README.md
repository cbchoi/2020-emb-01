# 문제 1번 pthread 동기화 (15점)
다음 문제는 임베디드 시스템에서 멀티쓰레드를 사용하는 경우 발생할 수 있는 동기화 문제를 해결하는 문제이다. 다음 problem01.c 프로그램은 동기화 문제가 있으며 problem01.c를 컴파일하고 실행하였을 시에 매번 그 실행결과가 달라지는 문제가 있다.  
따라서, problem01.c 소스코드를 확인하여 프로그램이 정상적으로 동작하도록 구현하라. 

```C
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
```

## 정상적인 동작
```
>$ ./solution
thread1:1
thread1:2
thread1:3
thread1:4
thread2:5
thread2:6
thread2:7
thread2:8
thread2:9
```

## 참고사항
- 힌트로 모범답안을 제공함. 모범답안을 실행하기 위해서는 다음과 같이 명령어를 기입한다. 
```
>$ ./solution
```
- Compile Error: 0점
- Compile은 성공하였으나 Runtime Error 발생: 5점
- Compile은 성공하였고 Runtime Error가 발생하지 않으나 원하는 결과를 도출하지 않는 경우: 10점
- Compile 성공, 원하는 결과 도출: 15점