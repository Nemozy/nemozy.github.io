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

// System.Xml.Serialization.ClassMap
struct ClassMap_t1647926812;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3057402259;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t755220835;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t3329971455;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3381496463;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t1726696875;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t151515769;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t999867419;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb3057402259.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe755220835.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.Serialization.ClassMap::.ctor()
extern "C"  void ClassMap__ctor_m4147146363 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
extern "C"  void ClassMap_AddMember_m1679256411 (ClassMap_t1647926812 * __this, XmlTypeMapMember_t3057402259 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
extern "C"  void ClassMap_RegisterFlatList_m116421780 (ClassMap_t1647926812 * __this, XmlTypeMapMemberExpandable_t755220835 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
extern "C"  XmlTypeMapMemberAttribute_t3329971455 * ClassMap_GetAttribute_m1832457827 (ClassMap_t1647926812 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
extern "C"  XmlTypeMapElementInfo_t3381496463 * ClassMap_GetElement_m1683572201 (ClassMap_t1647926812 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
extern "C"  XmlTypeMapElementInfo_t3381496463 * ClassMap_GetElement_m3912475176 (ClassMap_t1647926812 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
extern "C"  String_t* ClassMap_BuildKey_m1557792403 (ClassMap_t1647926812 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
extern "C"  XmlTypeMapMemberAnyElement_t1726696875 * ClassMap_get_DefaultAnyElementMember_m3428105615 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
extern "C"  XmlTypeMapMemberAnyAttribute_t151515769 * ClassMap_get_DefaultAnyAttributeMember_m743587687 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
extern "C"  XmlTypeMapMemberNamespaces_t999867419 * ClassMap_get_NamespaceDeclarations_m4101014678 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
extern "C"  Il2CppObject * ClassMap_get_ElementMembers_m2159013755 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
extern "C"  ArrayList_t4252133567 * ClassMap_get_AllMembers_m3277421270 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
extern "C"  ArrayList_t4252133567 * ClassMap_get_FlatLists_m1776954262 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
extern "C"  ArrayList_t4252133567 * ClassMap_get_ListMembers_m676266871 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
extern "C"  XmlTypeMapMember_t3057402259 * ClassMap_get_XmlTextCollector_m414523903 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
extern "C"  XmlTypeMapMember_t3057402259 * ClassMap_get_ReturnMember_m809700842 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
extern "C"  XmlQualifiedName_t1944712516 * ClassMap_get_SimpleContentBaseType_m1187631275 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
extern "C"  void ClassMap_SetCanBeSimpleType_m2789197955 (ClassMap_t1647926812 * __this, bool ___can0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
extern "C"  bool ClassMap_get_HasSimpleContent_m3833960835 (ClassMap_t1647926812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
