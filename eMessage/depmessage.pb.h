// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: depmessage.proto

#ifndef PROTOBUF_depmessage_2eproto__INCLUDED
#define PROTOBUF_depmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "cmmmessage.pb.h"
// @@protoc_insertion_point(includes)

namespace isafetec {

// Internal implementation detail -- do not call these.
void LIBPROTOBUF_EXPORT protobuf_AddDesc_depmessage_2eproto();
void protobuf_AssignDesc_depmessage_2eproto();
void protobuf_ShutdownFile_depmessage_2eproto();

class UserInfo;
class UserInfoList;
class DepartmentInfo;
class DepartmentInfoList;
class ManagerInfo;

// ===================================================================

class LIBPROTOBUF_EXPORT UserInfo : public ::google::protobuf::Message {
 public:
  UserInfo();
  virtual ~UserInfo();
  
  UserInfo(const UserInfo& from);
  
  inline UserInfo& operator=(const UserInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const UserInfo& default_instance();
  
  void Swap(UserInfo* other);
  
  // implements Message ----------------------------------------------
  
  UserInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserInfo& from);
  void MergeFrom(const UserInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // optional string username = 2;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 2;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  
  // optional double birthDay = 3;
  inline bool has_birthday() const;
  inline void clear_birthday();
  static const int kBirthDayFieldNumber = 3;
  inline double birthday() const;
  inline void set_birthday(double value);
  
  // optional int32 sex = 4;
  inline bool has_sex() const;
  inline void clear_sex();
  static const int kSexFieldNumber = 4;
  inline ::google::protobuf::int32 sex() const;
  inline void set_sex(::google::protobuf::int32 value);
  
  // optional string nation = 5;
  inline bool has_nation() const;
  inline void clear_nation();
  static const int kNationFieldNumber = 5;
  inline const ::std::string& nation() const;
  inline void set_nation(const ::std::string& value);
  inline void set_nation(const char* value);
  inline void set_nation(const char* value, size_t size);
  inline ::std::string* mutable_nation();
  inline ::std::string* release_nation();
  
  // optional string record = 6;
  inline bool has_record() const;
  inline void clear_record();
  static const int kRecordFieldNumber = 6;
  inline const ::std::string& record() const;
  inline void set_record(const ::std::string& value);
  inline void set_record(const char* value);
  inline void set_record(const char* value, size_t size);
  inline ::std::string* mutable_record();
  inline ::std::string* release_record();
  
  // optional string polity = 7;
  inline bool has_polity() const;
  inline void clear_polity();
  static const int kPolityFieldNumber = 7;
  inline const ::std::string& polity() const;
  inline void set_polity(const ::std::string& value);
  inline void set_polity(const char* value);
  inline void set_polity(const char* value, size_t size);
  inline ::std::string* mutable_polity();
  inline ::std::string* release_polity();
  
  // optional string telephone = 8;
  inline bool has_telephone() const;
  inline void clear_telephone();
  static const int kTelephoneFieldNumber = 8;
  inline const ::std::string& telephone() const;
  inline void set_telephone(const ::std::string& value);
  inline void set_telephone(const char* value);
  inline void set_telephone(const char* value, size_t size);
  inline ::std::string* mutable_telephone();
  inline ::std::string* release_telephone();
  
  // optional string emailaddr = 9;
  inline bool has_emailaddr() const;
  inline void clear_emailaddr();
  static const int kEmailaddrFieldNumber = 9;
  inline const ::std::string& emailaddr() const;
  inline void set_emailaddr(const ::std::string& value);
  inline void set_emailaddr(const char* value);
  inline void set_emailaddr(const char* value, size_t size);
  inline ::std::string* mutable_emailaddr();
  inline ::std::string* release_emailaddr();
  
  // optional int32 depid = 10;
  inline bool has_depid() const;
  inline void clear_depid();
  static const int kDepidFieldNumber = 10;
  inline ::google::protobuf::int32 depid() const;
  inline void set_depid(::google::protobuf::int32 value);
  
  // optional int32 state = 15;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 15;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);
  
  // optional string AccountName = 11;
  inline bool has_accountname() const;
  inline void clear_accountname();
  static const int kAccountNameFieldNumber = 11;
  inline const ::std::string& accountname() const;
  inline void set_accountname(const ::std::string& value);
  inline void set_accountname(const char* value);
  inline void set_accountname(const char* value, size_t size);
  inline ::std::string* mutable_accountname();
  inline ::std::string* release_accountname();
  
  // optional string password = 12;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 12;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  
  // optional int32 is_system_user = 14;
  inline bool has_is_system_user() const;
  inline void clear_is_system_user();
  static const int kIsSystemUserFieldNumber = 14;
  inline ::google::protobuf::int32 is_system_user() const;
  inline void set_is_system_user(::google::protobuf::int32 value);
  
  // optional int32 accountid = 13;
  inline bool has_accountid() const;
  inline void clear_accountid();
  static const int kAccountidFieldNumber = 13;
  inline ::google::protobuf::int32 accountid() const;
  inline void set_accountid(::google::protobuf::int32 value);
  
  // optional int32 BindEquipID = 16;
  inline bool has_bindequipid() const;
  inline void clear_bindequipid();
  static const int kBindEquipIDFieldNumber = 16;
  inline ::google::protobuf::int32 bindequipid() const;
  inline void set_bindequipid(::google::protobuf::int32 value);
  
  // optional int32 IsOnline = 17;
  inline bool has_isonline() const;
  inline void clear_isonline();
  static const int kIsOnlineFieldNumber = 17;
  inline ::google::protobuf::int32 isonline() const;
  inline void set_isonline(::google::protobuf::int32 value);
  
  // optional int32 domainId = 18;
  inline bool has_domainid() const;
  inline void clear_domainid();
  static const int kDomainIdFieldNumber = 18;
  inline ::google::protobuf::int32 domainid() const;
  inline void set_domainid(::google::protobuf::int32 value);
  
  // optional string card_no = 19;
  inline bool has_card_no() const;
  inline void clear_card_no();
  static const int kCardNoFieldNumber = 19;
  inline const ::std::string& card_no() const;
  inline void set_card_no(const ::std::string& value);
  inline void set_card_no(const char* value);
  inline void set_card_no(const char* value, size_t size);
  inline ::std::string* mutable_card_no();
  inline ::std::string* release_card_no();
  
  // optional string id_card_no = 20;
  inline bool has_id_card_no() const;
  inline void clear_id_card_no();
  static const int kIdCardNoFieldNumber = 20;
  inline const ::std::string& id_card_no() const;
  inline void set_id_card_no(const ::std::string& value);
  inline void set_id_card_no(const char* value);
  inline void set_id_card_no(const char* value, size_t size);
  inline ::std::string* mutable_id_card_no();
  inline ::std::string* release_id_card_no();
  
  // optional string citizen_card_no = 21;
  inline bool has_citizen_card_no() const;
  inline void clear_citizen_card_no();
  static const int kCitizenCardNoFieldNumber = 21;
  inline const ::std::string& citizen_card_no() const;
  inline void set_citizen_card_no(const ::std::string& value);
  inline void set_citizen_card_no(const char* value);
  inline void set_citizen_card_no(const char* value, size_t size);
  inline ::std::string* mutable_citizen_card_no();
  inline ::std::string* release_citizen_card_no();
  
  // optional string mobile_no = 22;
  inline bool has_mobile_no() const;
  inline void clear_mobile_no();
  static const int kMobileNoFieldNumber = 22;
  inline const ::std::string& mobile_no() const;
  inline void set_mobile_no(const ::std::string& value);
  inline void set_mobile_no(const char* value);
  inline void set_mobile_no(const char* value, size_t size);
  inline ::std::string* mutable_mobile_no();
  inline ::std::string* release_mobile_no();
  
  // optional string host_name = 23;
  inline bool has_host_name() const;
  inline void clear_host_name();
  static const int kHostNameFieldNumber = 23;
  inline const ::std::string& host_name() const;
  inline void set_host_name(const ::std::string& value);
  inline void set_host_name(const char* value);
  inline void set_host_name(const char* value, size_t size);
  inline ::std::string* mutable_host_name();
  inline ::std::string* release_host_name();
  
  // optional string host_ip = 24;
  inline bool has_host_ip() const;
  inline void clear_host_ip();
  static const int kHostIpFieldNumber = 24;
  inline const ::std::string& host_ip() const;
  inline void set_host_ip(const ::std::string& value);
  inline void set_host_ip(const char* value);
  inline void set_host_ip(const char* value, size_t size);
  inline ::std::string* mutable_host_ip();
  inline ::std::string* release_host_ip();
  
  // @@protoc_insertion_point(class_scope:isafetec.UserInfo)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_birthday();
  inline void clear_has_birthday();
  inline void set_has_sex();
  inline void clear_has_sex();
  inline void set_has_nation();
  inline void clear_has_nation();
  inline void set_has_record();
  inline void clear_has_record();
  inline void set_has_polity();
  inline void clear_has_polity();
  inline void set_has_telephone();
  inline void clear_has_telephone();
  inline void set_has_emailaddr();
  inline void clear_has_emailaddr();
  inline void set_has_depid();
  inline void clear_has_depid();
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_accountname();
  inline void clear_has_accountname();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_is_system_user();
  inline void clear_has_is_system_user();
  inline void set_has_accountid();
  inline void clear_has_accountid();
  inline void set_has_bindequipid();
  inline void clear_has_bindequipid();
  inline void set_has_isonline();
  inline void clear_has_isonline();
  inline void set_has_domainid();
  inline void clear_has_domainid();
  inline void set_has_card_no();
  inline void clear_has_card_no();
  inline void set_has_id_card_no();
  inline void clear_has_id_card_no();
  inline void set_has_citizen_card_no();
  inline void clear_has_citizen_card_no();
  inline void set_has_mobile_no();
  inline void clear_has_mobile_no();
  inline void set_has_host_name();
  inline void clear_has_host_name();
  inline void set_has_host_ip();
  inline void clear_has_host_ip();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* username_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 sex_;
  double birthday_;
  ::std::string* nation_;
  ::std::string* record_;
  ::std::string* polity_;
  ::std::string* telephone_;
  ::std::string* emailaddr_;
  ::google::protobuf::int32 depid_;
  ::google::protobuf::int32 state_;
  ::std::string* accountname_;
  ::std::string* password_;
  ::google::protobuf::int32 is_system_user_;
  ::google::protobuf::int32 accountid_;
  ::google::protobuf::int32 bindequipid_;
  ::google::protobuf::int32 isonline_;
  ::std::string* card_no_;
  ::std::string* id_card_no_;
  ::std::string* citizen_card_no_;
  ::std::string* mobile_no_;
  ::std::string* host_name_;
  ::std::string* host_ip_;
  ::google::protobuf::int32 domainid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(24 + 31) / 32];
  
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_depmessage_2eproto();
  friend void protobuf_AssignDesc_depmessage_2eproto();
  friend void protobuf_ShutdownFile_depmessage_2eproto();
  
  void InitAsDefaultInstance();
  static UserInfo* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOBUF_EXPORT UserInfoList : public ::google::protobuf::Message {
 public:
  UserInfoList();
  virtual ~UserInfoList();
  
  UserInfoList(const UserInfoList& from);
  
  inline UserInfoList& operator=(const UserInfoList& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const UserInfoList& default_instance();
  
  void Swap(UserInfoList* other);
  
  // implements Message ----------------------------------------------
  
  UserInfoList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserInfoList& from);
  void MergeFrom(const UserInfoList& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .isafetec.UserInfo list = 1;
  inline int list_size() const;
  inline void clear_list();
  static const int kListFieldNumber = 1;
  inline const ::isafetec::UserInfo& list(int index) const;
  inline ::isafetec::UserInfo* mutable_list(int index);
  inline ::isafetec::UserInfo* UserInfoList::list_ReleaseAt(int index); 
  inline void UserInfoList::list_RemoveAt(int index); 
  inline ::isafetec::UserInfo* add_list();
  inline const ::google::protobuf::RepeatedPtrField< ::isafetec::UserInfo >&
      list() const;
  inline ::google::protobuf::RepeatedPtrField< ::isafetec::UserInfo >*
      mutable_list();
  
  // @@protoc_insertion_point(class_scope:isafetec.UserInfoList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::isafetec::UserInfo > list_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_depmessage_2eproto();
  friend void protobuf_AssignDesc_depmessage_2eproto();
  friend void protobuf_ShutdownFile_depmessage_2eproto();
  
  void InitAsDefaultInstance();
  static UserInfoList* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOBUF_EXPORT DepartmentInfo : public ::google::protobuf::Message {
 public:
  DepartmentInfo();
  virtual ~DepartmentInfo();
  
  DepartmentInfo(const DepartmentInfo& from);
  
  inline DepartmentInfo& operator=(const DepartmentInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DepartmentInfo& default_instance();
  
  void Swap(DepartmentInfo* other);
  
  // implements Message ----------------------------------------------
  
  DepartmentInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DepartmentInfo& from);
  void MergeFrom(const DepartmentInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // optional int32 pid = 2;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 2;
  inline ::google::protobuf::int32 pid() const;
  inline void set_pid(::google::protobuf::int32 value);
  
  // optional string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional double createby = 4;
  inline bool has_createby() const;
  inline void clear_createby();
  static const int kCreatebyFieldNumber = 4;
  inline double createby() const;
  inline void set_createby(double value);
  
  // optional string comment = 5;
  inline bool has_comment() const;
  inline void clear_comment();
  static const int kCommentFieldNumber = 5;
  inline const ::std::string& comment() const;
  inline void set_comment(const ::std::string& value);
  inline void set_comment(const char* value);
  inline void set_comment(const char* value, size_t size);
  inline ::std::string* mutable_comment();
  inline ::std::string* release_comment();
  
  // optional int32 leaderid = 6;
  inline bool has_leaderid() const;
  inline void clear_leaderid();
  static const int kLeaderidFieldNumber = 6;
  inline ::google::protobuf::int32 leaderid() const;
  inline void set_leaderid(::google::protobuf::int32 value);
  
  // optional .isafetec.UserInfoList userlist = 7;
  inline bool has_userlist() const;
  inline void clear_userlist();
  static const int kUserlistFieldNumber = 7;
  inline const ::isafetec::UserInfoList& userlist() const;
  inline ::isafetec::UserInfoList* mutable_userlist();
  inline ::isafetec::UserInfoList* release_userlist();
  
  // optional .isafetec.BaseEquipInfoList devicelist = 8;
  inline bool has_devicelist() const;
  inline void clear_devicelist();
  static const int kDevicelistFieldNumber = 8;
  inline const ::isafetec::BaseEquipInfoList& devicelist() const;
  inline ::isafetec::BaseEquipInfoList* mutable_devicelist();
  inline ::isafetec::BaseEquipInfoList* release_devicelist();
  
  // optional .isafetec.DepartmentInfoList subdeplist = 9;
  inline bool has_subdeplist() const;
  inline void clear_subdeplist();
  static const int kSubdeplistFieldNumber = 9;
  inline const ::isafetec::DepartmentInfoList& subdeplist() const;
  inline ::isafetec::DepartmentInfoList* mutable_subdeplist();
  inline ::isafetec::DepartmentInfoList* release_subdeplist();
  
  // optional int32 usercount = 10;
  inline bool has_usercount() const;
  inline void clear_usercount();
  static const int kUsercountFieldNumber = 10;
  inline ::google::protobuf::int32 usercount() const;
  inline void set_usercount(::google::protobuf::int32 value);
  
  // optional int32 devicecount = 11;
  inline bool has_devicecount() const;
  inline void clear_devicecount();
  static const int kDevicecountFieldNumber = 11;
  inline ::google::protobuf::int32 devicecount() const;
  inline void set_devicecount(::google::protobuf::int32 value);
  
  // optional int32 state = 12;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 12;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);
  
  // optional int32 isdefaultDep = 13;
  inline bool has_isdefaultdep() const;
  inline void clear_isdefaultdep();
  static const int kIsdefaultDepFieldNumber = 13;
  inline ::google::protobuf::int32 isdefaultdep() const;
  inline void set_isdefaultdep(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:isafetec.DepartmentInfo)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_pid();
  inline void clear_has_pid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_createby();
  inline void clear_has_createby();
  inline void set_has_comment();
  inline void clear_has_comment();
  inline void set_has_leaderid();
  inline void clear_has_leaderid();
  inline void set_has_userlist();
  inline void clear_has_userlist();
  inline void set_has_devicelist();
  inline void clear_has_devicelist();
  inline void set_has_subdeplist();
  inline void clear_has_subdeplist();
  inline void set_has_usercount();
  inline void clear_has_usercount();
  inline void set_has_devicecount();
  inline void clear_has_devicecount();
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_isdefaultdep();
  inline void clear_has_isdefaultdep();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 pid_;
  ::std::string* name_;
  double createby_;
  ::std::string* comment_;
  ::isafetec::UserInfoList* userlist_;
  ::isafetec::BaseEquipInfoList* devicelist_;
  ::google::protobuf::int32 leaderid_;
  ::google::protobuf::int32 usercount_;
  ::isafetec::DepartmentInfoList* subdeplist_;
  ::google::protobuf::int32 devicecount_;
  ::google::protobuf::int32 state_;
  ::google::protobuf::int32 isdefaultdep_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(13 + 31) / 32];
  
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_depmessage_2eproto();
  friend void protobuf_AssignDesc_depmessage_2eproto();
  friend void protobuf_ShutdownFile_depmessage_2eproto();
  
  void InitAsDefaultInstance();
  static DepartmentInfo* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOBUF_EXPORT DepartmentInfoList : public ::google::protobuf::Message {
 public:
  DepartmentInfoList();
  virtual ~DepartmentInfoList();
  
  DepartmentInfoList(const DepartmentInfoList& from);
  
  inline DepartmentInfoList& operator=(const DepartmentInfoList& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DepartmentInfoList& default_instance();
  
  void Swap(DepartmentInfoList* other);
  
  // implements Message ----------------------------------------------
  
  DepartmentInfoList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DepartmentInfoList& from);
  void MergeFrom(const DepartmentInfoList& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .isafetec.DepartmentInfo list = 1;
  inline int list_size() const;
  inline void clear_list();
  static const int kListFieldNumber = 1;
  inline const ::isafetec::DepartmentInfo& list(int index) const;
  inline ::isafetec::DepartmentInfo* mutable_list(int index);
  inline ::isafetec::DepartmentInfo* DepartmentInfoList::list_ReleaseAt(int index); 
  inline void DepartmentInfoList::list_RemoveAt(int index); 
  inline ::isafetec::DepartmentInfo* add_list();
  inline const ::google::protobuf::RepeatedPtrField< ::isafetec::DepartmentInfo >&
      list() const;
  inline ::google::protobuf::RepeatedPtrField< ::isafetec::DepartmentInfo >*
      mutable_list();
  
  // @@protoc_insertion_point(class_scope:isafetec.DepartmentInfoList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::isafetec::DepartmentInfo > list_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_depmessage_2eproto();
  friend void protobuf_AssignDesc_depmessage_2eproto();
  friend void protobuf_ShutdownFile_depmessage_2eproto();
  
  void InitAsDefaultInstance();
  static DepartmentInfoList* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOBUF_EXPORT ManagerInfo : public ::google::protobuf::Message {
 public:
  ManagerInfo();
  virtual ~ManagerInfo();
  
  ManagerInfo(const ManagerInfo& from);
  
  inline ManagerInfo& operator=(const ManagerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ManagerInfo& default_instance();
  
  void Swap(ManagerInfo* other);
  
  // implements Message ----------------------------------------------
  
  ManagerInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ManagerInfo& from);
  void MergeFrom(const ManagerInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .isafetec.UserInfoList user_list = 1;
  inline bool has_user_list() const;
  inline void clear_user_list();
  static const int kUserListFieldNumber = 1;
  inline const ::isafetec::UserInfoList& user_list() const;
  inline ::isafetec::UserInfoList* mutable_user_list();
  inline ::isafetec::UserInfoList* release_user_list();
  
  // optional bool on_server = 2;
  inline bool has_on_server() const;
  inline void clear_on_server();
  static const int kOnServerFieldNumber = 2;
  inline bool on_server() const;
  inline void set_on_server(bool value);
  
  // @@protoc_insertion_point(class_scope:isafetec.ManagerInfo)
 private:
  inline void set_has_user_list();
  inline void clear_has_user_list();
  inline void set_has_on_server();
  inline void clear_has_on_server();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::isafetec::UserInfoList* user_list_;
  bool on_server_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_depmessage_2eproto();
  friend void protobuf_AssignDesc_depmessage_2eproto();
  friend void protobuf_ShutdownFile_depmessage_2eproto();
  
  void InitAsDefaultInstance();
  static ManagerInfo* default_instance_;
};
// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace isafetec

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_depmessage_2eproto__INCLUDED
