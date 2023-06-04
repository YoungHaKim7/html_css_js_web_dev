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

# 이해할 용어 Shallow Copy & Deep Copy

![Screenshot 2023-06-04 at 5 31 05 PM](https://github.com/YoungHaKim7/html_css_js_web_dev/assets/67513038/31d00087-74b5-4d3c-8134-69af3167278b)

---

![Screenshot 2023-06-04 at 5 31 55 PM](https://github.com/YoungHaKim7/html_css_js_web_dev/assets/67513038/b83210eb-f884-4f09-a91e-4488dc95b14a)


![deep_copy](https://github.com/YoungHaKim7/html_css_js_web_dev/assets/67513038/41552ead-24bd-42fe-aad6-860628234c2e)

---

# What is the difference between a deep copy and a shallow copy?

https://stackoverflow.com/questions/184710/what-is-the-difference-between-a-deep-copy-and-a-shallow-copy

---

# Shallow_copy(JavaScript) 

https://developer.mozilla.org/en-US/docs/Glossary/Shallow_copy

In JavaScript, all standard built-in object-copy operations (
  - spread syntax, 
  - Array.prototype.concat(), 
  - Array.prototype.slice(), 
  - Array.from(), Object.assign(), and 
  - Object.create()
  ) 
  
  create shallow copies rather than deep copies.

---

# Shallow_copy(JavaScript) 2


```javascript
let ingredients_list = ["noodles", { list: ["eggs", "flour", "water"] }];

let ingredients_list_copy = Array.from(ingredients_list);
console.log(JSON.stringify(ingredients_list_copy));

// ["noodles",{"list":["eggs","flour","water"]}]

```

---

# Shallow_copy(JavaScript) 3

```javascript
let ingredients_list = ["noodles", { list: ["eggs", "flour", "water"] }];
//                      index[0],  index[1]
```
ingredients_list에서 index[1]

```javascript
ingredients_list_copy[1].list = ["rice flour", "water"];
console.log(ingredients_list[1].list);
// Array [ "rice flour", "water" ]
console.log(JSON.stringify(ingredients_list));
// ["noodles",{"list":["rice flour","water"]}]
```

---


# Shallow_copy(JavaScript) 4

```javascript
ingredients_list_copy[0] = "rice noodles";
console.log(ingredients_list[0]);
// noodles
console.log(JSON.stringify(ingredients_list_copy));
// ["rice noodles",{"list":["rice flour","water"]}]
console.log(JSON.stringify(ingredients_list));
// ["noodles",{"list":["rice flour","water"]}]
```

---

Deep Copy(JavaScript)

- One way to make a deep copy of a JavaScript object, if it can be serialized, is to use JSON.stringify() to convert the object to a JSON string, and then JSON.parse() to convert the string back into a (completely new) JavaScript object:

```javascript
let ingredients_list = ["noodles", { list: ["eggs", "flour", "water"] }];
let ingredients_list_deepcopy = JSON.parse(JSON.stringify(ingredients_list));

// Change the value of the 'list' property in ingredients_list_deepcopy.
ingredients_list_deepcopy[1].list = ["rice flour", "water"];
// The 'list' property does not change in ingredients_list.
console.log(ingredients_list[1].list);
// Array(3) [ "eggs", "flour", "water" ]

```


---

# Instance 인스턴스

```javascript
function Car(make, model, year) {
  this.make = make;
  this.model = model;
  this.year = year;
}
const auto = new Car('Honda', 'Accord', 1998);

console.log(auto instanceof Car);
// Expected output: true

console.log(auto instanceof Object);
// Expected output: true

console.log(auto);
// Car {make: 'Honda', model: 'Accord', year: 1998}
```


https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/instanceof

---


# Instance 인스턴스 (auto가 인스턴스 되었다고 생각하면 됨)

- Instance 는 뭔가 기능이 들어간 변수 같은거

```javascript
function Car(make, model, year) {
  this.make = make;
  this.model = model;
  this.year = year;
}
const auto = new Car('Honda', 'Accord', 1998);


console.log(auto);
// Car {make: 'Honda', model: 'Accord', year: 1998}
```


https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/instanceof

---

# Property, method(JavaScript)

```javascript
let counter = {
  num:0,   // Property(한글로 속성)
  increase: function() {     // 여기부터 method
    this.num++;              //    ||
  }                          //   여기까지 method
}
```

- Property : 객체(Object) 의 상태를 나타내는 값(data)
- method : Property(상태 데이터)를 참조하고 조작할 수 있는 동작(behavior)

https://developer.mozilla.org/en-US/docs/Glossary/Property/JavaScript

---

# Object(obj)

```javascript
const person = {
  name: ["Bob", "Smith"],
  age: 32,
  bio: function () {
    console.log(`${this.name[0]} ${this.name[1]} is ${this.age} years old.`);
  },
  introduceSelf: function () {
    console.log(`Hi! I'm ${this.name[0]}.`);
  },
};
```

https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/Basics

---

# Object 2

```javascript
const person = {
  name: ["Bob", "Smith"],
  age: 32,
  bio: function () {
    console.log(`${this.name[0]} ${this.name[1]} is ${this.age} years old.`);
  },
  introduceSelf: function () {
    console.log(`Hi! I'm ${this.name[0]}.`);
  },
};
person.name;
person.name[0];
person.age;
person.bio();
// "Bob Smith is 32 years old."
person.introduceSelf();
// "Hi! I'm Bob."

```

---

