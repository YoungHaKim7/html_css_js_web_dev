---
marp: true
title : Marp
paginate: true
theme : aqua

class:
- invert

---

# Var 의  문제점(JavaScript)

- Value 개념 잡기

- 리터럴의 종류Literal

출처: 
https://poiemaweb.com/js-syntax-basics


---

# Value (JavaScript) 

- ㄱ. Data Type(데이터 타입)

  -  프로그래밍 언어에서 사용할 수 있는 값의 종류

- ㄴ. Variable(변수)

  - 값이 저장된 메모리 공간의 주소를 가리키는 식별자(identifier)

- ㄷ. Literal (리터럴)

  - 소스코드 안에서 직접 만들어 낸 상수 값 자체를 말하며 값을 구성하는 최소 단위


---

# ㄱ. Data Type(데이터 타입)JavaScript에서만 적용

- Primitive data type
  - number
  - string
  - boolean
  - null
  - undefined
  - symbol(New in ECMASctipt 6)

- Object data type
  - object 



---

# ㄱ. Data Type(데이터 타입)

```javascript
const num1 = 10;

const string = 'hello';
const string2 = "world";

// Boolean
const bool = true;

// null
let foo = null;

// undefined
let bar;

// Object
let obj = { name: 'Lee', gender: 'male' };

// Array
const array = [1, 2, 3, 4];
```

---
# ㄴ. Variable(변수)

- 값이 저장된 메모리 공간의 주소를 가리키는 식별자(identifier)


- 할당 연산자

  - https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Assignment

```javascript
// 할당 연산자 
const str = 'Hello World';
```
---

# ㄷ. Literal

https://developer.mozilla.org/en-US/docs/Glossary/Literal

```javascript
// number literal
10.50
1001

// String literal
'Hello'
"World"


// Boolean literal
true
false

// null literal
null
// undefined literal
undefined
```

---

# 연산자

- 연산자(Operator)는 하나 이상의 표현식을 대상으로 산술, 할당, 비교, 논리, 타입 연산 등을 수행해 하나의 값을 만든다. 이때 연산의 대상을 피연산자(Operand)라 한다.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators

```javascript
// 산술 연산자 
const area = 5 * 4 ; //20
```
- Assignment operators ____________ - Comparison operators
- Arithmetic operators _____________ - Bitwise operators
- Logical operators _______________ - BigInt operators
- String operators ________________ - Conditional (ternary) operator
- Comma operator _______________ - Unary operators
- Relational operators
---

# Operators

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#assignment_operators


- Arithmetic Operators https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_operators#arithmetic_operators

---

# 키워드(Keyword or JavaScript Reserved Words)

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#reserved_words

- 키워드(keyword)는 수행할 동작을 규정한 것이다. 예를 들어 var 키워드는 새로운 변수를 생성할 것을 지시한다. These keywords cannot be used as identifiers for variables, functions, classes, etc. anywhere in JavaScript source.

```

break _____ case ___ catch ____ class const _____ continue debugger _ default delete ____ do _____ else _____ export

extends false finally for function if import in instanceof new null return super switch this throw true try typeof

var void while with 
```
- The following are only reserved when they are found in strict mode code:
```

let (also reserved in const, let, and class declarations)

static , yield (also reserved in generator function bodies)

```
---

# Keyword 2 _ The following are only reserved when they are found in module code or async function bodies:

https://www.w3schools.com/js/js_reserved.asp

```
await
```


--- 

# var 키워드로 선언된 변수의 문제점

https://poiemaweb.com/js-data-type-variable

- ES6는 이러한 var의 단점을 보완하기 위해 
  - let
  - const 키워드 도입

--- 

# var 문제점 2

1. 함수 레벨 스코프(Function-level scope)
전역 변수의 남발
for loop 초기화식에서 사용한 변수를 for loop 외부 또는 전역에서 참조할 수 있다.

2. var 키워드 생략 허용
의도하지 않은 변수의 전역화

3. 중복 선언 허용
의도하지 않은 변수값 변경

4. 변수 호이스팅
변수를 선언하기 전에 참조가 가능하다.

---
# var 문제점 2

1. 함수 레벨 스코프(Function-level scope)

- Local scope
https://www.programiz.com/javascript/variable-scope

```javascript
// program showing local scope of a variable
let a = "hello";

function greet() {
    let b = "World"
    console.log(a + b);
}

greet();
console.log(a + b); // error
// ~~~~~~~Result
// helloWorld
// ERROR !

```
---

# var 문제점 2(var ex)..

1. 함수 레벨 스코프(Function-level scope)

- Var   Global Scope???

```Javascript
// program showing global scope of a variable
var a = 2;
for(var a = 0; a < 3; a++) {
    console.log('hello');
}
console.log(a); // 3
```
https://www.programiz.com/javascript/let-vs-var

- Result (2가 나올걸 기대했는데 3이 나온다. -- 욕나옴xxxxxx)

```
hello
hello
hello
3
```

---

# JavaScript에서 호이스팅은 선언 전에 함수나 변수를 사용할 수 있는 동작입니다. 예를 들어,
- Hoisting
Hoisting in JavaScript is a behavior in which a function or a variable can be used before declaration. For example,

```
// using test before declaring
console.log(test);   // undefined
var test;
```

---

# 코딩에서 변수 사용 순서

1. Initializing a variable

2. Declare & Allocation

3. Use

https://en.cppreference.com/w/cpp/language/value_initialization

https://www.inf.unibz.it/~calvanese/teaching/06-07-ip/lecture-notes/uni02/node18.html

---

# let Doesn't Allow Hoisting

https://www.programiz.com/javascript/let-vs-var

- The variables declared with var are hoisted to the top of the scope of the program. For example,

---

# var 는 error 가 나지 않는다.   욕 xxx

```javascript
console.log(a);
var a; // undefined (not an error)
```


# let 맘이 편해지고 좋아진다.

- The keyword let does not allow hoisting. For example,

```javascript
console.log(a);
let a; // Uncaught ReferenceError: a is not defined
```