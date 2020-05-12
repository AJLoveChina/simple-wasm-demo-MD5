



```bash
emcc md5-wrap.c -O1 -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]' -s ASSERTIONS=1
```