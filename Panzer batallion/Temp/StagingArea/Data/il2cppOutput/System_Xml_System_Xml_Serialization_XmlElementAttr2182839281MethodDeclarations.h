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

// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t2182839281;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm1143227640.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String)
extern "C"  void XmlElementAttribute__ctor_m1437011658 (XmlElementAttribute_t2182839281 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String,System.Type)
extern "C"  void XmlElementAttribute__ctor_m18315227 (XmlElementAttribute_t2182839281 * __this, String_t* ___elementName0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_DataType()
extern "C"  String_t* XmlElementAttribute_get_DataType_m1184751574 (XmlElementAttribute_t2182839281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_ElementName()
extern "C"  String_t* XmlElementAttribute_get_ElementName_m3630972359 (XmlElementAttribute_t2182839281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlElementAttribute::get_Form()
extern "C"  int32_t XmlElementAttribute_get_Form_m3982132151 (XmlElementAttribute_t2182839281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_Namespace()
extern "C"  String_t* XmlElementAttribute_get_Namespace_m3551694709 (XmlElementAttribute_t2182839281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlElementAttribute::get_IsNullable()
extern "C"  bool XmlElementAttribute_get_IsNullable_m1919562380 (XmlElementAttribute_t2182839281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.XmlElementAttribute::get_Type()
extern "C"  Type_t * XmlElementAttribute_get_Type_m3497748803 (XmlElementAttribute_t2182839281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::set_Type(System.Type)
extern "C"  void XmlElementAttribute_set_Type_m23177420 (XmlElementAttribute_t2182839281 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::AddKeyHash(System.Text.StringBuilder)
extern "C"  void XmlElementAttribute_AddKeyHash_m4278704142 (XmlElementAttribute_t2182839281 * __this, StringBuilder_t1221177846 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
