---
marp: true
title : Marp
paginate: true
theme : aqua

class:
- invert

---

# 개념정리

- 출처

  - 모던자바스크립트(책은 유료)
    - https://poiemaweb.com/js-syntax-basics

  - C포자를 위한 본격 C 언어 프로그래밍 [ PDF ](ebook은 무료)
    - http://www.yes24.com/Product/Goods/99423651 


---

# 이해할 용어

## statement > expression > token 

- expression 은  무조건 evaluation 을 한다.

```
expression
: 값이라는 게 결과로 나오는 형태

evaluation
: 표현식으로부터 값을 뽑아내는 과정
```

https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=hse05105&logNo=221691484360

---

# expression 의 구성

- simple object(피연산자)

- operator of funtion (연산자 or 함수)

## 여러언어에서의 연산자 표현 방식

- prefix(전위 표기법prefix notation) 연산자가 피연산자 앞에 위치
  - op a b / op(a,b) / (pp a b)

- infix(중위 표기법infix notation) 연산자가 피연산자 사이에 위치
  - a op b

- postfix(후위posfix notation) 연산자가 피연산자 뒤에 위치
  - a b op

https://opentutorials.org/course/1717/9704


---

# Lisp (모든 함수에서 prefix notation을 사용)

- 해킹언어로 유명한 Lisp Language 1960년도에 나옴

```lisp
(defun result()
  (princ (* (+ 1 3) 2)))

(result)
```

```
$ clisp main.lisp
8
```

https://en.wikipedia.org/wiki/Lisp_(programming_language)

---

# JavaScript (infix)

- infix(중위 표기법infix notation) 연산자가 피연산자 사이에 위치
  - a op b

```javascript
let x = x + 1;
```

---

# Statement 이해(C 언어)

C statements consist of tokens, expressions, and other statements. A statement that forms a component of another statement is called the "body" of the enclosing statement. Each statement type given by the following syntax is discussed in this section.



https://learn.microsoft.com/en-us/cpp/c-language/overview-of-c-statements?view=msvc-170

---

# Statement 이해 part 2(C 언어)

Frequently the statement body is a "compound statement." A compound statement consists of other statements that can include keywords. The compound statement is delimited by braces ({ }). All other C statements end with a semicolon (;). The semicolon is a statement terminator.

- Curly Brackets {} --- The Compound Statement
- Parenthesis () -----  tuple에 쓰임

```c
#include <stdio.h>
int main () {
  int a = 5;
  int b = 10;
  int sum;
  sum = a + b; // Expression & Evaluation
  printf("this is a compound statement\n");
  printf("sum a + b = %d\n", sum);
  return 0;
}
```


---
# Expression Statement (C)

```
x = ( y + 3 );            /* x is assigned the value of y + 3  */
x++;                      /* x is incremented                  */
x = y = 0;                /* Both x and y are initialized to 0 */
proc( arg1, arg2 );       /* Function call returning void      */
y = z = ( f( x ) + 3 );   /* A function-call expression        */
```

https://learn.microsoft.com/en-us/cpp/c-language/expression-statement-c?view=msvc-170

---

# Operator & Operand (JavaScript)

- Operator -> 하나 이상의 표현식으로 대상으로 산술, 등등 수행해 하나의 값을 만든다.

- Operand -> 연산의 대상


```javascript
let x = 10 * 20    // Expression & Evalutaion
//      ^  ^         
//      | Operator
//   Operand
```

---

# Indentation(코딩의 필수 개념 들여쓰기)

- Indent

- 언어에 따라 스페이스 2번이냐 4번이냐 다 틀림

- JavaScript는 2번인듯



---

# Indent (JavaScript) Express Js 일부 코드

- 탭 한번은 코드 양쪽에 띄어 쓰기가 들어간다고 봐야함 스페이스2번 이라면

```javascript
function createApplication() {
  var app = function(req, res, next) {
    app.handle(req, res, next);
  };

  mixin(app, EventEmitter.prototype, false);
  mixin(app, proto, false);

  // expose the prototype that will get set on requests
  app.request = Object.create(req, {
    app: { configurable: true, enumerable: true, writable: true, value: app }
  })

  // expose the prototype that will get set on responses
  app.response = Object.create(res, {
    app: { configurable: true, enumerable: true, writable: true, value: app }
  })

  app.init();
  return app;
}




```

--- 

# Indent (JavaScript)

- 컴퓨터가 인식한 코드(탭은 Space 2번으로 인식한 모습)
- Space 2번 띄운게 코드 양쪽 옆으로 들어간 모습

![Screenshot 2023-05-28 at 5 18 50 PM](https://github.com/YoungHaKim7/Cpp_Training/assets/67513038/cbeecd2e-898c-468e-8c13-05013f43d5c4)

---

# JavaScript 에서 사람 미치게 만드는 SideEffect(부수효과?)

- 예상치 못한 결과가 나온다. 조심 또 조심(한글 표현은 참 온화하다....)

```javascript
1 + true; // -> 2 가 나온다.
// JavaScript 에서 가장 이해 안되는 부분인데
// true가 불이 켜진 상태니깐 완전 말이 안되는건 아니다. 불이 켜지면 1 on
// 불이 꺼지면 0 off
```

- JavaScript 엔진은 암묵적으로 불리언 타입의 값인 true 를 강제로 변환한 후 연산을 수행한다.
- 암묵적 타입 변환Implicit coercion 또는 or  타입 강제 변환Type coercion
- coercion은 강간할 때 쓰는 표현이다. 상대방 의사 따윈 물어보지 않는다. --

---

# 문자열 연결 연산자(JavaScript)

```javascript
1+ null; // -> 1 null은 0으로 변환된다.

1 + undefined; // -> NaN __undefined는 숫자로 타입 변환되지 않는다.

```

---

# 할당 연산자 Assignment perator(JavaScript)

```javascript
let str = "My name is ";

// 문자열 연결 연산자
str += "Kim";
console.log(str); // "My name is Kim"
```

---

# 비교 연산자Comparison operator(JavaScript)

- JavaScript는 특이 하게 == 이것보다 === 3개를 쓴다.
- 이유는 결과를 예측하기 어려운 SideEffect가 있다. 
- 무조건 === 이걸로 비교하자 

## 일치 비교(===) 연산자를 사용한다.(JavaScript)

---
# 내 삶을 편하게 해줄 삼항조건 연산자(Conditional(ternary Operator))
```
condition ? exprIfTrue : exprIfFalse
```

```javascript
const age = 26;
const beverage = age >= 21 ? "Beer" : "Juice";
//                   ^          ^        ^
//              Condition    IFTrue   IfFalse
console.log(beverage); // "Beer"
```

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Conditional_operator


---

# typeof 연산자

- 디버깅 지옥에서 구원해줄 typeof 타입을 맞춰서 잘 비교하자
- 오늘 잠을 못자고 싶으면 몰라도 되는 typeof 별 100만개 중요!!
- "string", "number", "boolean", "undefined", "symbol", "object", "function" 중 7개 중 한개를 반환한다.

```
typeof ''               // -> "string"
typeof 1                // -> "number"
typeof Symbol()         // -> "symbol"
typeof []               // -> "object"
typeof function () {}   // -> "function"
```


---

# 연산자 우선순위(JavaScript)

```
1   ()
2   new(매개변수 존재), ., [](프로퍼티 접근), ()(함수호출), ?.(옵셔널 체이닝 연산자)
3   new(매개변수 미존재)
4    x++
5   !x
6   **(이항 연산자 중에 우선순위가 가장 높다.)
7   *, /, %
8   +, -
9   <, <=, >, >=, in , instanceof
10  ==, !=, ===, !==
11 ??
12 &&
13 ||
14 ? ... : ...
15 할당 연산자(=, +=, -=)
16 ,
```
- 할당 연산자가 의외로 참 낮다. 15네 -- 

---

# 연산자 결합 순서(JavaScript)
- 연산자 결합 순서란 연산자의 어느쪽 (좌항 또는 우항) 부터 수행할 것인지를 나타내는 순서를 말한다.

```
좌항 -> 우항
+, - ,/, %, <= ,> in, (), []
```

```
좌항 <- 우항
++, --, 할당 연산자(=, +=, -=)
```

- C포자를 위한 본격 C언어... p.153참고 비슷하긴 하다 (밑에 표 참고)

https://en.cppreference.com/w/c/language/operator_precedence

---

# C Operator Precedence

![Screenshot 2023-05-28 at 6 08 47 PM](https://github.com/YoungHaKim7/Cpp_Training/assets/67513038/83f35767-15f0-48d4-b692-fbaba62a015c)

---


# Operator Precedence 연습

```javascript
let x = 3;
// 3 을 x 에 결합
// <- 이 방향으로 해석해야함 Right to left 
// 연산자 결합 __ 해석 방향(우항 -> 좌항)
```

---