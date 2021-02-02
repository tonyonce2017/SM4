# SM4
C++封装的国密SM4加解密, 支持ECB和CBC模式, PKCS7Padding补全
## 使用方法
直接包含进项目
## 使用举例
```c++
#include <iostream>
#include "sm4.h"

int main() {
    sm4 s;
    s.setType(sm4::CBC);
    s.setKey("1234567890123456");
    s.setIv("asdfghjklzxcvbnm");

    //加密之后再解密
    std::cout << s.decrypt(s.encrypt("hello sm4!")) << std::endl;

    //ECB模式同上, 只是不需要设置IV

    return 0;
}
```

