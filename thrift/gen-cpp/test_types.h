/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef test_TYPES_H
#define test_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace test {


class Record {
 public:

  static const char* ascii_fingerprint; // = "D64A208A8BCFCE146F4E2CB2176A807C";
  static const uint8_t binary_fingerprint[16]; // = {0xD6,0x4A,0x20,0x8A,0x8B,0xCF,0xCE,0x14,0x6F,0x4E,0x2C,0xB2,0x17,0x6A,0x80,0x7C};

  Record() {
  }

  virtual ~Record() throw() {}

  std::vector<int64_t>  ids;
  std::vector<std::string>  strings;

  void __set_ids(const std::vector<int64_t> & val) {
    ids = val;
  }

  void __set_strings(const std::vector<std::string> & val) {
    strings = val;
  }

  bool operator == (const Record & rhs) const
  {
    if (!(ids == rhs.ids))
      return false;
    if (!(strings == rhs.strings))
      return false;
    return true;
  }
  bool operator != (const Record &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Record & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Record &a, Record &b);

} // namespace

#endif
