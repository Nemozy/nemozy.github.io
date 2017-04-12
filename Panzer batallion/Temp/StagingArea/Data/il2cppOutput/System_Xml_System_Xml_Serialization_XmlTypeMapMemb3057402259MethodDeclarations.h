#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3057402259;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Xml_System_Xml_Serialization_TypeData3979356678.h"

// System.Void System.Xml.Serialization.XmlTypeMapMember::.ctor()
extern "C"  void XmlTypeMapMember__ctor_m1316177970 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapMember::get_Name()
extern "C"  String_t* XmlTypeMapMember_get_Name_m967451763 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_Name(System.String)
extern "C"  void XmlTypeMapMember_set_Name_m3492137816 (XmlTypeMapMember_t3057402259 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::get_DefaultValue()
extern "C"  Il2CppObject * XmlTypeMapMember_get_DefaultValue_m2124292470 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_DefaultValue(System.Object)
extern "C"  void XmlTypeMapMember_set_DefaultValue_m634073131 (XmlTypeMapMember_t3057402259 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::IsReadOnly(System.Type)
extern "C"  bool XmlTypeMapMember_IsReadOnly_m582991803 (XmlTypeMapMember_t3057402259 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::GetValue(System.Object)
extern "C"  Il2CppObject * XmlTypeMapMember_GetValue_m4162620048 (XmlTypeMapMember_t3057402259 * __this, Il2CppObject * ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValue(System.Object,System.Object)
extern "C"  void XmlTypeMapMember_SetValue_m512759949 (XmlTypeMapMember_t3057402259 * __this, Il2CppObject * ___ob0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValue(System.Object,System.String,System.Object)
extern "C"  void XmlTypeMapMember_SetValue_m3368274743 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ob0, String_t* ___name1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::InitMember(System.Type)
extern "C"  void XmlTypeMapMember_InitMember_m1684799645 (XmlTypeMapMember_t3057402259 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMember::get_TypeData()
extern "C"  TypeData_t3979356678 * XmlTypeMapMember_get_TypeData_m209815656 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_TypeData(System.Xml.Serialization.TypeData)
extern "C"  void XmlTypeMapMember_set_TypeData_m584371753 (XmlTypeMapMember_t3057402259 * __this, TypeData_t3979356678 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapMember::get_Index()
extern "C"  int32_t XmlTypeMapMember_get_Index_m3502084053 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_Index(System.Int32)
extern "C"  void XmlTypeMapMember_set_Index_m1472403104 (XmlTypeMapMember_t3057402259 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapMember::get_GlobalIndex()
extern "C"  int32_t XmlTypeMapMember_get_GlobalIndex_m1288585482 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_GlobalIndex(System.Int32)
extern "C"  void XmlTypeMapMember_set_GlobalIndex_m1478708765 (XmlTypeMapMember_t3057402259 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::get_IsOptionalValueType()
extern "C"  bool XmlTypeMapMember_get_IsOptionalValueType_m1460037286 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_IsOptionalValueType(System.Boolean)
extern "C"  void XmlTypeMapMember_set_IsOptionalValueType_m732710657 (XmlTypeMapMember_t3057402259 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::get_IsReturnValue()
extern "C"  bool XmlTypeMapMember_get_IsReturnValue_m18060200 (XmlTypeMapMember_t3057402259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_IsReturnValue(System.Boolean)
extern "C"  void XmlTypeMapMember_set_IsReturnValue_m2964982481 (XmlTypeMapMember_t3057402259 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::CheckOptionalValueType(System.Type)
extern "C"  void XmlTypeMapMember_CheckOptionalValueType_m552324058 (XmlTypeMapMember_t3057402259 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValueSpecified(System.Object,System.Boolean)
extern "C"  void XmlTypeMapMember_SetValueSpecified_m2231075948 (XmlTypeMapMember_t3057402259 * __this, Il2CppObject * ___ob0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
