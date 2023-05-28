# ESlint & Prettier 설치 VSCode에서 저장하면 자동 설정됨 ..최고 👍❤️✈️

- npx eslint --init

  - ```npx eslint --init```
  
  ```
  npx eslint --init
  ```

- Anb

```
$ npm i eslint eslint-config-airbnb-base eslint-plugin-import prettier -D
```


- google style
```
npm i eslint-config-google -D
```

- standard

```
npm i eslint-config-standard eslint-plugin-import eslint-plugin-n eslint-plugin-promise
```

# ESLint(공식 설명서DOC)

https://eslint.org/docs/latest/use/command-line-interface


# ESlint-Prettier 설정 하기 
 
https://velog.io/@jhyeom1545/Nest-ESLint-Prettier-%EC%A4%84%EB%B0%94%EA%BF%88-%EC%84%A4%EC%A0%95%ED%95%98%EA%B8%B0


# Eslint-Prettier 설정하기 2(여기가 더 좋다.)

https://velog.io/@dvisign/%EB%B8%94%EB%A1%9C%EA%B7%B8-%ED%98%95%EC%8B%9D-%ED%8F%AC%ED%8A%B8%ED%8F%B4%EB%A6%AC%EC%98%A4-%EA%B0%9C%EB%B0%9C%EA%B8%B0-2-%EC%B4%88%EA%B8%B0-%EC%85%8B%ED%8C%852

<hr>

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
