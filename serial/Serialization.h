//
// Created by Wenxin Zheng on 2020/3/26.
//

#ifndef SERIALIZATION_SERIALIZATION_H
#define SERIALIZATION_SERIALIZATION_H

#include <map>
#include <set>
#include <string>
#include <vector>

typedef char Byte;

class Serialization {
private:
  std::string _file_path;
  Byte *_content = nullptr;
  size_t _length = 0;

public:
  Serialization();
  Serialization(const std::string &rhs);
  void serialize(const std::set<float> &r);
};

#endif // SERIALIZATION_SERIALIZATION_H
