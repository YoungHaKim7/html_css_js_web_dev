---
marp: true
title : Marp
paginate: true
theme : aqua

class:
- invert

---

# Slide 1

- C 에서 정수형 변수를 선언하는 예

```c
#include <stdio.h>

int main () {
    // 1byte 정수형: -128 ~ 127
    char c;

    // 4byte 정수형: -2,124,483,648 ~ 2,123,483,647
    int num;
}


```



---

# Side 2(C Lang)

![imagetest](https://poiemaweb.com/img/int_num.png)
<style>
    img {
        background: white;
        width: 650px

    }
</style>


```c
int main(void) {
    int num  = 46;
    char * str = "String";

    num = "String"; // warning : incompatible pointer to integer conversion assigning to 'int' form 'char[7]'
    return 0;
}

```

---

# Side 3 - C언어 

- 선언과 할당  메모리 주소가 같다.

  - declare == allocation // address 가 같다.

```c
#include <stdio.h>

int main () {
  int x;
  printf("The address of x of is : %p\n", &x);
  x = 10;
  printf("The address of x of is : %p\n", &x);
  return 0;
}

```


---


# Side 4 (C언어)

- Result

```bash

$ clang main.c  

$ ./a.out

The address of x of is : 0x16af42f88
The address of x of is : 0x16af42f88

```

---

# Side 5 (JavaScript)

- var = x ==! x = 10 주소가 다르다. 대박 사건!

```
var = x; // declare => defined 라고 하고 메모리할당됨

x = 10; // x라는 변수에 할당됨(allocation)

console.log(x);

```

- 1번 줄 var 로 선언declare 주소와
- 2 번 x = 10; 의 x 의 메모리 주소가 다르다.-- 신박하구만


---

# Side 6 (JavaScript)

```
var = x;  // defined
```

- defined = primative type 이다. 그래서 바꿀 수 없다. immutable

- 보통 자바스크립트에서는 선언과 할당을 같이 하는 코드를 작성한다.(declare & allocation)

```
const x = 10;
```

![var](https://poiemaweb.com/img/var-lifecycle.png)


<style>
    img {
        background: white;
        width: 650px

    }
</style>


---

# Side 7 (JavaScript)

- javascript declare & allocation 개념 완전 다르다. 외워야한다.!!


![Screenshot 2023-05-14 at 5 58 57 PM](https://github.com/YoungHaKim7/Cpp_Training/assets/67513038/508d83ca-9cd9-4de0-810b-b75213bf0a71)

---

# Side 8 인터프리터 언어 (JavaScript)

- 인터프리터 언어(Interpreter Language) vs 컴파일 언어(Compiled Language)

Interpreter  |   Compiled
JavaScript   |   C, C++ 

- JavaScript 변수 선언 declare (Interpreter 라 그런가 아주 특이하다)
  - RunTime 에서 변수 할당됨Alocation

---

# Side 9  (JavaScript)

- var 의 문제점

