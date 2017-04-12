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

// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3994942922;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t1176289510;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeMember
struct TypeMember_t1615994940;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void System.Xml.Serialization.XmlAttributeOverrides::.ctor()
extern "C"  void XmlAttributeOverrides__ctor_m530467371 (XmlAttributeOverrides_t3994942922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type)
extern "C"  XmlAttributes_t1176289510 * XmlAttributeOverrides_get_Item_m4104001217 (XmlAttributeOverrides_t3994942922 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type,System.String)
extern "C"  XmlAttributes_t1176289510 * XmlAttributeOverrides_get_Item_m1868166031 (XmlAttributeOverrides_t3994942922 * __this, Type_t * ___type0, String_t* ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeMember System.Xml.Serialization.XmlAttributeOverrides::GetKey(System.Type,System.String)
extern "C"  TypeMember_t1615994940 * XmlAttributeOverrides_GetKey_m1167077630 (XmlAttributeOverrides_t3994942922 * __this, Type_t * ___type0, String_t* ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeOverrides::AddKeyHash(System.Text.StringBuilder)
extern "C"  void XmlAttributeOverrides_AddKeyHash_m1707727643 (XmlAttributeOverrides_t3994942922 * __this, StringBuilder_t1221177846 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
