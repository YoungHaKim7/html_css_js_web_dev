# npx eslint --init

```


npx eslint --init
Need to install the following packages:
  eslint@8.41.0
Ok to proceed? (y) y
You can also run this command directly using 'npm init @eslint/config'.
Need to install the following packages:
  @eslint/create-config@0.4.3
Ok to proceed? (y) y
√ How would you like to use ESLint? · style
√ What type of modules does your project use? · esm
√ Which framework does your project use? · none
√ Does your project use TypeScript? · No / Yes
√ Where does your code run? · browser
√ How would you like to define a style for your project? · guide
√ Which style guide do you want to follow? · airbnb
√ What format do you want your config file to be in? · JSON
Checking peerDependencies of eslint-config-airbnb-base@latest
Local ESLint installation not found.
The config that you've selected requires the following dependencies:

eslint-config-airbnb-base@latest eslint@^7.32.0 || ^8.2.0 eslint-plugin-import@^2.25.
2
√ Would you like to install them now? · No / Yes
√ Which package manager do you want to use? · npm
Installing eslint-config-airbnb-base@latest, eslint@^7.32.0 || ^8.2.0, eslint-plugin-
import@^2.25.2  
  
```

# Pretter

- 개발자 D에 추가

```
npm i -D prettier
```


- Prettier 이쁘게 적용된거 파일에 적용됨. 너무 좋다.

```
npx prettier --write .\src\index.js
```


```

"devDependencies": {
  "eslint": "^8.41.0",
  "eslint-config-airbnb-base": "^15.0.0",
  "eslint-plugin-import": "^2.27.5",
  "prettier": "^2.8.8"
}
  
```