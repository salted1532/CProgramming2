# CProgramming2
2020-2학기-이광형 C언어프로그래밍심화

| 항목 | 내용 |
|:----:|:-----|
| 🎓 과목명 | C언어 프로그래밍 심화 |
| 🏫 담당 교수 | 이광형 교수님 |
| 🗓️ 수강 학기 | 2020-2학기 |
| 💡 주요 학습 내용 | C언어,배열과 문자열, 포인터, 구조체, 파일 입출력 |
| 🧰 도구 | Visual Studio |
| 🧩 과제 / 프로젝트 |  |

---

## 📘 C언어 학습 목차

1. [배열과 문자열](#배열과-문자열)  
2. [포인터](#포인터)  
3. [구조체](#구조체)  
4. [파일 입출력](#파일-입출력)

---

## 배열과 문자열
```#include <stdio.h>

int main() {
    int scores[3] = {90, 85, 100};
    char name[] = "C Language";

    for (int i = 0; i < 3; i++)
        printf("%d ", scores[i]);

    printf("\n문자열: %s\n", name);
    return 0;
}
```
## 포인터

포인터는 메모리 주소를 저장하는 변수입니다.

``` #include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("a의 값: %d\n", a);
    printf("a의 주소: %p\n", p);
    printf("포인터 p가 가리키는 값: %d\n", *p);
    return 0;
}
```
## 구조체

구조체는 여러 자료형을 하나로 묶을 수 있는 사용자 정의 자료형입니다.

``` #include <stdio.h>

struct Student {
    char name[20];
    int age;
    float grade;
};

int main() {
    struct Student s1 = {"홍길동", 20, 3.8};

    printf("이름: %s, 나이: %d, 학점: %.1f\n", s1.name, s1.age, s1.grade);
    return 0;
}
```
## 파일 입출력
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) return 1;

    fprintf(fp, "Hello, File!\n");
    fclose(fp);
    return 0;
}
```

