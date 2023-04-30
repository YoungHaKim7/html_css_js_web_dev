# Contents

- [VScode_Emmet](https://github.com/YoungHaKim7/html_css_js_web_dev#emmet-in-visual-studio-code)

- [FrontEnd guide](https://github.com/YoungHaKim7/html_css_js_web_dev#front-end)

- [semantic HTML](https://github.com/YoungHaKim7/html_css_js_web_dev#semantic-html)

- [CSS](https://github.com/YoungHaKim7/html_css_js_web_dev#css---protips)

- [JavaScritpt](https://github.com/YoungHaKim7/html_css_js_web_dev#javascript-style-guide)

- [코코아 클론 노마드 🚀 10주 스터디(4기)-웹 프론트엔드 개발자 스터디](https://github.com/YoungHaKim7/html_css_js_web_dev/blob/main/README.md#nomad-coders-%EC%BD%94%EC%BD%94%EC%95%84-%ED%81%B4%EB%A1%A0-%EB%85%B8%EB%A7%88%EB%93%9C--10%EC%A3%BC-%EC%8A%A4%ED%84%B0%EB%94%944%EA%B8%B0-%EC%9B%B9-%ED%94%84%EB%A1%A0%ED%8A%B8%EC%97%94%EB%93%9C-%EA%B0%9C%EB%B0%9C%EC%9E%90-%EC%8A%A4%ED%84%B0%EB%94%94--%EB%8F%99%EA%B8%B0%EB%93%A4%EC%9E%90%EB%A3%8C-%EB%AA%A8%EC%9D%8C)

- [CSS 작업시 필요 사이트 모음(AwesomeFont, GoogleFont, etc](https://github.com/YoungHaKim7/html_css_js_web_dev#css-%EC%9E%91%EC%97%85%EC%8B%9C-%ED%95%84%EC%88%98-%EC%82%AC%EC%9D%B4%ED%8A%B8-%EB%AA%A8%EC%9D%8C)

- [Publishing your website](https://github.com/YoungHaKim7/html_css_js_web_dev#%EB%B0%B0%ED%8F%AC-%EA%B4%80%EB%A0%A8-publishing-your-website)

# Vim(Surround)


- 교체 change ```cst<h1>```

```
 in normal mode, type cst<div> (change surrounding tag to <div>).

 cst 하고<h1>

 감싸고 있는 태그 교체됨
 <li>test</li>
 cst<h1>
 하면
<h1>test</h1>

변신 !!!
```
<hr>

- 태그 삭제delete ```dst```

```
<h1>test<h1>

dst
```

<hr>

- ysiw&lt;h1&gt;  Add 태그 추가 +  ```ysiw<h1>```

```
test

ysiw<h1>

<h1>test</h1>
```

- yss&lt;h1&gt; Add 태그 추가 +```yss<h1>```

```
test

yss<h1>

<h1>test</h1>
```

<hr>

https://unix.stackexchange.com/questions/168169/how-to-change-the-pair-of-a-changed-html-tag-in-vim

https://github.com/tpope/vim-surround

```
surround.vim
Surround.vim is all about "surroundings": parentheses, brackets, quotes, XML tags, and more. The plugin provides mappings to easily delete, change and add such surroundings in pairs.

It's easiest to explain with examples. Press cs"' inside

"Hello world!"
to change it to

'Hello world!'
Now press cs'<q> to change it to

<q>Hello world!</q>
To go full circle, press cst" to get

"Hello world!"
To remove the delimiters entirely, press ds".

Hello world!
Now with the cursor on "Hello", press ysiw] (iw is a text object).

[Hello] world!
Let's make that braces and add some space (use } instead of { for no space): cs]{

{ Hello } world!
Now wrap the entire line in parentheses with yssb or yss).

({ Hello } world!)
Revert to the original text: ds{ds)

Hello world!
Emphasize hello: ysiw<em>

<em>Hello</em> world!
Finally, let's try out visual mode. Press a capital V (for linewise visual mode) followed by S<p class="important">.

<p class="important">
  <em>Hello</em> world!
</p>
This plugin is very powerful for HTML and XML editing, a niche which currently seems underfilled in Vim land. (As opposed to HTML/XML inserting, for which many plugins are available). Adding, changing, and removing pairs of tags simultaneously is a breeze.
```

# NeoVim-Surround

https://github.com/kylechui/nvim-surround

```
    Old text                    Command         New text
--------------------------------------------------------------------------------
    surr*ound_words             ysiw)           (surround_words)
    *make strings               ys$"            "make strings"
    [delete ar*ound me!]        ds]             delete around me!
    remove <b>HTML t*ags</b>    dst             remove HTML tags
    'change quot*es'            cs'"            "change quotes"
    <b>or tag* types</b>        csth1<CR>       <h1>or tag types</h1>
    delete(functi*on calls)     dsf             function calls
```

# NeoVim Plug-in(emmet)

https://github.com/neoclide/coc-emmet

<br>


<hr>

# Emmet in Visual Studio Code

- https://code.visualstudio.com/docs/editor/emmet

```
(div.status-bar__column>span)*3 
```

```
ul>li*3>span.hello$
```

# emmet


<p>
  <a href="https://code.visualstudio.com/docs/editor/emmet"><img align="left" alt="emmet" width="830px" src="https://code.visualstudio.com/assets/docs/editor/emmet/emmet.gif"></a>

</p>

<br>



- settings.JSON

```
"emmet.triggerExpansionOnTab": true
```
<br>

<br>

<hr>

# Semantic HTML<img align="left" alt="html" width="26px" src="https://user-images.githubusercontent.com/67513038/229953435-3d20ff2f-672e-4baa-a13b-da2b74cbbe67.png" /><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://developer.mozilla.org/en-US/docs/Glossary/Semantics

출처 : Nomad Coders https://nomadcoders.co/

# MDN Document

https://developer.mozilla.org/en-US/docs/Web/HTML

  - https://developer.mozilla.org/en-US/

<hr>

<br>

# Front-End<img align="left" alt="frontend" width="36px" src="https://user-images.githubusercontent.com/67513038/146179458-5e587820-a037-41ee-bf02-2366b3e5aad7.jpg" /><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://github.com/thedaviddias/Front-End-Checklist

<br>

<hr>

<br>

# CSS - protips<img align="left" alt="css" width="26px" src="https://user-images.githubusercontent.com/67513038/229954543-d69fef0e-b636-4384-a069-3c98ec282b9c.png" /><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://github.com/AllThingsSmitty/css-protips

```css
selector {
  background:red;
}

/* Using a <background-color> */
background: green;

/* Using a <bg-image> and <repeat-style> */
background: url("test.jpg") repeat-y;

/* Using a <box> and <background-color> */
background: border-box red;

/* A single image, centered and scaled */
background: no-repeat center/80% url("../img/image.png");

/* Global values */
background: inherit;
background: initial;
background: revert;
background: revert-layer;
background: unset;
```

출처 : https://nomadcoders.co/

https://developer.mozilla.org/en-US/docs/Web/CSS/background

- Block(CSS)
![boxinline](https://user-images.githubusercontent.com/67513038/230394761-65e3e0de-d323-434a-ae87-a9682ff246ee.jpg)

- main axis vs cross axis(Flexbox)
![axes](https://user-images.githubusercontent.com/67513038/230603102-9ea38e53-b7e1-4fec-a395-310358d225b8.png)

## BEM

- The <em>Block, Element, Modifier</em> methodology (commonly referred to as BEM) is a popular naming convention for classes in HTML and CSS.

  - https://css-tricks.com/bem-101/

  - https://getbem.com/introduction/

출처: https://nomadcoders.co/  


# CSS MDN 정리

- part1

  https://ccomrung-programming.tistory.com/m/37
  
- part2

  https://ccomrung-programming.tistory.com/m/38


- part3

  https://ccomrung-programming.tistory.com/m/36

<br>

<hr>

# JavaScript style guide<img align="left" alt="js" width="26px" src="https://user-images.githubusercontent.com/67513038/215448983-97327d43-4c12-4e83-b529-e994d7614a21.png" /><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://github.com/tipjs/javascript-style-guide

원문:https://github.com/airbnb/javascript

# Angle bracket (<) without triggering html code [duplicate]

https://stackoverflow.com/questions/14659240/angle-bracket-without-triggering-html-code


# Nomad Coders 코코아 클론 노마드 🚀 10주 스터디(4기)-웹 프론트엔드 개발자 스터디- 동기들자료 모음<img align="left" alt="js" width="26px" src="https://user-images.githubusercontent.com/67513038/215448983-97327d43-4c12-4e83-b529-e994d7614a21.png" /><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

- BEM정리 잘된 사이트

  https://naradesign.github.io/bem-by-example.html

- Frontend 자료 정리한 동기(총 정리 잘됨. 웹 구동원리까지 👍😍)

  https://frosted-manchego-ca2.notion.site/45302f0dea7c4a7ab54b23670f5ca832
  
- CSS Diner - Full Game - All Levels (1-32) - Explanation

  https://youtu.be/ff5-CQuDoow
  
- Flex Box Froggy (1-24) Solved

  https://youtu.be/g0G0BiYm3lE

# 다른 사람의 &lt;CSS&gt; MDN 정리1

- [CSS] MDN 정리 part1

  http://ccomrung-programming.tistory.com/37

- [CSS] MDN 정리 prat2

  http://ccomrung-programming.tistory.com/38
  
  <br>
  
  <hr>
  
# CSS 작업시 필수 사이트 모음<img align="left" alt="css" width="26px" src="https://user-images.githubusercontent.com/67513038/229954543-d69fef0e-b636-4384-a069-3c98ec282b9c.png" /><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

# Audio CSS

https://blog.shahednasser.com/how-to-style-an-audio-element/

# Google Font

https://fonts.google.com/


# fontAwesome

https://fontawesome.com/search?o=r&m=free

# 배포 관련 Publishing your Website<img align="left" alt="js" width="26px" src="https://www.freecodecamp.org/news/content/images/size/w2000/2020/01/how-to-deploy-a-static-website-for-free-in-only-3-minutes-with-google-drive-1.png" /></a><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

- Dev. Mozilla

  - https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/Publishing_your_website
  
- How to deploy a static website for free in just 3 minutes straight from your Google Drive, using Fast.io

  - https://www.freecodecamp.org/news/how-to-deploy-a-static-website-for-free-in-only-3-minutes-with-google-drive/
