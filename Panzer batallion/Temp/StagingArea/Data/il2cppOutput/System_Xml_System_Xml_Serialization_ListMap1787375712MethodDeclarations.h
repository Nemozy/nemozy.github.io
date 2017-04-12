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

// System.Xml.Serialization.ListMap
struct ListMap_t1787375712;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t1987994689;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3381496463;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem1987994689.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Serialization.ListMap::.ctor()
extern "C"  void ListMap__ctor_m3654459875 (ListMap_t1787375712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ChoiceMember(System.String)
extern "C"  void ListMap_set_ChoiceMember_m419671679 (ListMap_t1787375712 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.ListMap::get_ItemInfo()
extern "C"  XmlTypeMapElementInfoList_t1987994689 * ListMap_get_ItemInfo_m1201082057 (ListMap_t1787375712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ItemInfo(System.Xml.Serialization.XmlTypeMapElementInfoList)
extern "C"  void ListMap_set_ItemInfo_m1260209660 (ListMap_t1787375712 * __this, XmlTypeMapElementInfoList_t1987994689 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.String,System.String)
extern "C"  XmlTypeMapElementInfo_t3381496463 * ListMap_FindElement_m2442110850 (ListMap_t1787375712 * __this, String_t* ___elementName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindTextElement()
extern "C"  XmlTypeMapElementInfo_t3381496463 * ListMap_FindTextElement_m1996845851 (ListMap_t1787375712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ListMap::Equals(System.Object)
extern "C"  bool ListMap_Equals_m3934415146 (ListMap_t1787375712 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.ListMap::GetHashCode()
extern "C"  int32_t ListMap_GetHashCode_m2025540122 (ListMap_t1787375712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
