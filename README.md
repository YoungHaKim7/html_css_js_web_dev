# Vim(Surround)

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

# Semantic HTML

https://developer.mozilla.org/en-US/docs/Glossary/Semantics

# MDN Document

https://developer.mozilla.org/en-US/

<hr>

<br>

# Front-End

https://github.com/thedaviddias/Front-End-Checklist

<br>

<hr>

<br>

# CSS - protips

https://github.com/AllThingsSmitty/css-protips

<br>

<hr>

# JavaScript style guide

https://github.com/tipjs/javascript-style-guide

원문:https://github.com/airbnb/javascript
