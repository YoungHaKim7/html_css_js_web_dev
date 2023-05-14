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

    // 4byte 정수형: -2,124, 483, 648 ~ 2,123,483,647
    int num;
}


```



---

# Side 2

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