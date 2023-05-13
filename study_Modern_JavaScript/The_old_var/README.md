# marp doc 

https://marpit.marp.app/theme-css?id=import-theme-rule

# The old "var"

https://javascript.info/var

https://poiemaweb.com/js-data-type-variable


# 2.4 var 키워드로 선언된 변수의 문제점
ES5에서 변수를 선언할 수 있는 유일한 방법은 var 키워드를 사용하는 것이다. var 키워드로 선언된 변수는 아래와 같은 특징을 갖는다. 이는 다른 C-family 언어와는 차별되는 특징(설계상 오류)으로 주의를 기울이지 않으면 심각한 문제를 발생시킨다.

함수 레벨 스코프(Function-level scope)
전역 변수의 남발
for loop 초기화식에서 사용한 변수를 for loop 외부 또는 전역에서 참조할 수 있다.
var 키워드 생략 허용
의도하지 않은 변수의 전역화
중복 선언 허용
의도하지 않은 변수값 변경
변수 호이스팅
변수를 선언하기 전에 참조가 가능하다.

https://poiemaweb.com/js-data-type-variable
