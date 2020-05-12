## md5 by webassemly

> 一个很简单的使用webassemly的md5算法实现例子

> 浏览器环境调用已有的C/C++代码来实现功能 


### 编译C代码
```bash
emcc md5-wrap.c md5.c -O1 -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]' -s ASSERTIONS=1
```
编译之后的产物就是
* a.out.js
* a.out.wasm

Tip:该项目中已经提前生成好产物

### 创建http容器
```bash
npm install
npm run dev

```
然后打开 [http://127.0.0.1:9090](http://127.0.0.1:9090) 查看运行结果


### link
md5 lib is from [https://github.com/pod32g/MD5](https://github.com/pod32g/MD5)