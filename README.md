# Contents

- [FrontEnd guide](https://github.com/YoungHaKim7/html_css_js_web_dev#front-end)

- [semantic HTML](https://github.com/YoungHaKim7/html_css_js_web_dev#semantic-html)

- [CSS](https://github.com/YoungHaKim7/html_css_js_web_dev#css---protips)

- [JavaScritpt](https://github.com/YoungHaKim7/html_css_js_web_dev#javascript-style-guide)

# Vim(Surround)


- 교체 change

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

- dst태그 삭제delete

```
<h1>test<h1>

dst
```

<hr>

- ysiw  / yss<h1>

```
test

ysiw<h1>

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

<br>

<hr>

# Semantic HTML<a href="https://github.com/rust-ml/linfa"><img align="left" alt="html" width="26px" src="https://user-images.githubusercontent.com/67513038/229953435-3d20ff2f-672e-4baa-a13b-da2b74cbbe67.png" /></a><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://developer.mozilla.org/en-US/docs/Glossary/Semantics

출처 : Nomad Coders https://nomadcoders.co/

# MDN Document

https://developer.mozilla.org/en-US/docs/Web/HTML

  - https://developer.mozilla.org/en-US/

<hr>

<br>

# Front-End<a href="https://github.com/rust-ml/linfa"><img align="left" alt="frontend" width="36px" src="https://user-images.githubusercontent.com/67513038/146179458-5e587820-a037-41ee-bf02-2366b3e5aad7.jpg" /></a><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://github.com/thedaviddias/Front-End-Checklist

<br>

<hr>

<br>

# CSS - protips<a href="https://github.com/rust-ml/linfa"><img align="left" alt="css" width="26px" src="https://user-images.githubusercontent.com/67513038/229954543-d69fef0e-b636-4384-a069-3c98ec282b9c.png" /></a><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

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

![boxinline](https://user-images.githubusercontent.com/67513038/230394761-65e3e0de-d323-434a-ae87-a9682ff246ee.jpg)

<br>

<hr>

# JavaScript style guide<a href="https://github.com/rust-ml/linfa"><img align="left" alt="js" width="26px" src="https://user-images.githubusercontent.com/67513038/215448983-97327d43-4c12-4e83-b529-e994d7614a21.png" /></a><a href="https://github.com/YoungHaKim7/html_css_js_web_dev#contents">[🔝]</a>

https://github.com/tipjs/javascript-style-guide

원문:https://github.com/airbnb/javascript
