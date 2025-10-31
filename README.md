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
배열(Array)은 같은 자료형의 데이터를 연속적으로 저장하는 자료구조입니다.
문자열(String)은 사실 문자(char) 배열로 표현되며, 마지막에 반드시 \0(널 문자)이 있어야 문자열의 끝을 알 수 있습니다.

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
문자열 입력 시 scanf("%s", name); 사용, 공백은 못 읽음 → 공백 포함 입력은 fgets() 사용

### 설명

- int scores[3] → 정수 3개를 저장할 수 있는 배열 선언

- char name[] → 문자열 선언, 배열 길이는 컴파일러가 자동으로 결정

- 문자열 출력 시 printf("%s", name) 사용

- 배열의 인덱스는 항상 0부터 시작

### 배열 활용 팁

- 2차원 배열: int matrix[2][3] = {{1,2,3},{4,5,6}};
→ 행과 열을 가진 배열

---

## 포인터

포인터(Pointer)는 메모리 주소를 저장하는 변수입니다.
배열, 함수, 동적 메모리 관리 등 C 언어의 핵심 기능과 밀접하게 연결됩니다.

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
### 설명

- int *p → int 타입의 주소를 저장할 포인터 선언

- &a → 변수 a의 메모리 주소

- *p → 포인터가 가리키는 실제 값

- 포인터는 배열과 함께 사용하면 배열 요소 접근이 더 효율적

### 팁

- 함수 매개변수로 배열을 전달할 때, 포인터를 사용하면 메모리 복사가 일어나지 않음

- 동적 메모리(malloc, free)도 포인터 기반

---

## 구조체

구조체(Struct)는 서로 다른 자료형을 하나로 묶어 새로운 타입을 만드는 방법입니다.
학생 정보, 도서 정보 등 현실 세계의 객체를 프로그래밍으로 표현할 때 유용합니다.

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

### 설명

- struct Student → 학생 정보를 담는 구조체 정의

- s1.name, s1.age, s1.grade → 구조체 멤버 접근

- 구조체 배열 가능: struct Student class[30]; → 30명의 학생 정보를 저장

- 구조체 포인터: struct Student *sp = &s1; → sp->name 방식으로 접근

---

## 파일 입출력
C언어에서는 파일 입출력으로 데이터를 저장하거나 읽어올 수 있습니다.
파일을 열고(fopen), 읽거나 쓰고(fprintf, fscanf, fgets, fputs), 닫는(fclose) 순서로 사용합니다.

```
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) return 1;

    fprintf(fp, "Hello, File!\n");
    fclose(fp);
    return 0;
}
```

### 설명

- fopen("파일명", "모드")

- "r" 읽기, "w" 쓰기, "a" 이어쓰기

- fprintf → 파일 출력, fscanf → 파일 입력

- fgets → 문자열 한 줄 읽기, fputs → 문자열 출력

- 항상 사용 후 fclose로 파일 닫기 필수

### 팁

- 파일을 다룰 때는 에러 처리 꼭 하기

- 배열이나 구조체 데이터를 파일에 읽고 쓰면 프로그램 데이터 저장 가능

