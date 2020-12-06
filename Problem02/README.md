# 문제 2번 Kernel Module Programming

다음 문제는 임베디드 리눅스 모듈 프로그래밍에 관한 문제이다. 모듈이 임베디드 리눅스에 올라갈 때와 내려갈 때 다음 요구사항을 만족하는 프로그램과 Makefile을 작성하라. 

## 요구사항
 - 모듈이 적재될 때 다음과 같이 자신의 영문 이름을 출력한다. 
   예) My name is Changbeom Choi!
 - 모듈이 내려갈 때 자신의 학번을 출력한다. 
   예) 47987
 - 소스파일 이름: problem02.c

## 참고사항
 - 실제 모듈에 올라가고 내려가는 지 채점할 것이기 때문에 소스코드와 Makefile을 제출해야 함
 - 정확히 동작하는 지는 insmod, lsmod, rmmod, dmesg 명령어를 사용하여 확인할 것

## 실행예제
```
>$ sudo insmod problem.ko
>$ dmesg | tail -n 5
[   59.793433] rfkill: input handler disabled
[   60.966436] audit: type=1400 audit(1607230194.660:41): apparmor="ALLOWED" operation="connect" profile="/usr/lib/ibus/ibus-engine-hangul" pid=1886 comm="ibus-engine-han" family="unix" sock_type="stream" protocol=0 requested_mask="send receive connect" denied_mask="send connect" addr=none peer_addr="@/home/cbchoi/.cache/ibus/dbus-tuBAhKMD" peer="unconfined"
[ 7716.633665] problem02: loading out-of-tree module taints kernel.
[ 7716.633694] problem02: module verification failed: signature and/or required key missing - tainting kernel
[ 7716.634151] My name is Changbeom Choi
>$ sudo rmmod problem
[   60.966436] audit: type=1400 audit(1607230194.660:41): apparmor="ALLOWED" operation="connect" profile="/usr/lib/ibus/ibus-engine-hangul" pid=1886 comm="ibus-engine-han" family="unix" sock_type="stream" protocol=0 requested_mask="send receive connect" denied_mask="send connect" addr=none peer_addr="@/home/cbchoi/.cache/ibus/dbus-tuBAhKMD" peer="unconfined"
[ 7716.633665] problem02: loading out-of-tree module taints kernel.
[ 7716.633694] problem02: module verification failed: signature and/or required key missing - tainting kernel
[ 7716.634151] My name is Changbeom Choi
[ 7782.140204] 47987
```
