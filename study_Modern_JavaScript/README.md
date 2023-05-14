# Modern JavaScript(Deep Dive)

https://poiemaweb.com/

# Marpit(ppt ) marp tutorial - Never use PowerPoint again

https://youtu.be/EzQ-p41wNEE

- Marpit /mɑːrpɪt/ is the skinny framework for creating slide deck from Markdown. It can transform Markdown and CSS theme(s) to slide deck composed of static HTML and CSS and create a web page convertible into slide PDF by printing

https://marpit.marp.app/

https://github.com/YoungHaKim7/marp_project

# 모던 자바스크립트 저자 유튜브 강의 변수 시리즈

https://youtube.com/playlist?list=PLkNVwwEe58DjmO5kTUkfm-8NEDUKG2No5


# JS_ 변수는 선언하면

- 선언 Declare -> undefined 로 메모리 주소로 할당
  - undefined 는 primitive type 이다.
    - https://developer.mozilla.org/en-US/docs/Glossary/Primitive
    - https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/undefined 

- 할당 allocation 하면 새로운 주소값 할당

```javascript
function test(t) {
  if (t === undefined) {
    return 'Undefined value!';
  }
  return t;
}

let x; // Delare

console.log(test(x)); 
// Expected output: "Undefined value!"

x = 10; // allocation
```
