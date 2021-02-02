//
// Created by LiuCheng on 2021/1/29.
//

#ifndef LIB_SM4_H
#define LIB_SM4_H

#include <string>

class sm4 {
public:
    enum Type{
        ECB,
        CBC
    };
public:
    explicit sm4();
    ~sm4();
    void setKey(const std::string &k);
    void setIv(const std::string &i);
    void setType(Type t = Type::ECB);

    std::string encrypt(const std::string& data);
    std::string decrypt(const std::string& data);

private:
    std::string key;
    std::string iv;
    Type type;
};

#endif //LIB_SM4_H
