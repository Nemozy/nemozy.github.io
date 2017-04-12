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

// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t315595419;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Serialization_TypeData3979356678.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping315595419.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"

// System.Void System.Xml.Serialization.XmlTypeMapping::.ctor(System.String,System.String,System.Xml.Serialization.TypeData,System.String,System.String)
extern "C"  void XmlTypeMapping__ctor_m1100800880 (XmlTypeMapping_t315595419 * __this, String_t* ___elementName0, String_t* ___ns1, TypeData_t3979356678 * ___typeData2, String_t* ___xmlType3, String_t* ___xmlTypeNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_TypeFullName()
extern "C"  String_t* XmlTypeMapping_get_TypeFullName_m3524839170 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::get_TypeData()
extern "C"  TypeData_t3979356678 * XmlTypeMapping_get_TypeData_m4160655162 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlType()
extern "C"  String_t* XmlTypeMapping_get_XmlType_m2402628473 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlType(System.String)
extern "C"  void XmlTypeMapping_set_XmlType_m4124391736 (XmlTypeMapping_t315595419 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlTypeNamespace()
extern "C"  String_t* XmlTypeMapping_get_XmlTypeNamespace_m3611061288 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlTypeNamespace(System.String)
extern "C"  void XmlTypeMapping_set_XmlTypeNamespace_m3744771081 (XmlTypeMapping_t315595419 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::get_DerivedTypes()
extern "C"  ArrayList_t4252133567 * XmlTypeMapping_get_DerivedTypes_m3290393515 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_MultiReferenceType()
extern "C"  bool XmlTypeMapping_get_MultiReferenceType_m2202034319 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::get_BaseMap()
extern "C"  XmlTypeMapping_t315595419 * XmlTypeMapping_get_BaseMap_m3450225590 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_BaseMap(System.Xml.Serialization.XmlTypeMapping)
extern "C"  void XmlTypeMapping_set_BaseMap_m4250560477 (XmlTypeMapping_t315595419 * __this, XmlTypeMapping_t315595419 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IncludeInSchema(System.Boolean)
extern "C"  void XmlTypeMapping_set_IncludeInSchema_m4277454434 (XmlTypeMapping_t315595419 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_IsNullable()
extern "C"  bool XmlTypeMapping_get_IsNullable_m525046248 (XmlTypeMapping_t315595419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IsNullable(System.Boolean)
extern "C"  void XmlTypeMapping_set_IsNullable_m703437701 (XmlTypeMapping_t315595419 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealElementMap(System.String,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlTypeMapping_GetRealElementMap_m101753140 (XmlTypeMapping_t315595419 * __this, String_t* ___name0, String_t* ___ens1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::UpdateRoot(System.Xml.XmlQualifiedName)
extern "C"  void XmlTypeMapping_UpdateRoot_m813424491 (XmlTypeMapping_t315595419 * __this, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
