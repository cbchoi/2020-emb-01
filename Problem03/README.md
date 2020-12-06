# 문제 3번 디렉토리 구조체 활용하기
다음 코드는 count_text 함수에서 주어진 경로(path)에 존재하는 모든 파일 내 text의 글자 수를 세는 프로그램이다. 프로그램이 정상적으로 동작하도록 구현하시오. 

## 참고사항
 - 가정사항: 파일 내에는 character만 있기 때문에 fread를 통하여 읽어 들인 값은 모두 character라고 가정함
 - 코드는 자유롭게 추가/삭제할 수 있음
 - Compile Error: 0점
 - Compile은 성공하였으나 Runtime Error 발생: 5점
 - Compile은 성공하였고 Runtime Error가 발생하지 않으나 원하는 결과를 도출하지 않는 경우: 15점
 - Compile 성공, 원하는 결과 도출: 25점

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

void count_text(char* path)
{
	
	/*
	


		Put your code here
	

	

	*/

	printf("Total %d characters are found.\n", count);
}

int main()
{
	count_text("./data");
	return 0;
}
```