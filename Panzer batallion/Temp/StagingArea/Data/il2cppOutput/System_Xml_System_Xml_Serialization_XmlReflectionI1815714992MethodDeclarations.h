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

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t1815714992;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3994942922;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t315595419;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t3527426713;
// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t1176289510;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3057402259;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t3763194608;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t1987994689;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t1864082097;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOv3994942922.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu3527426713.h"
#include "System_Xml_System_Xml_Serialization_TypeData3979356678.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping315595419.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributes1176289510.h"
#include "System_Xml_System_Xml_Serialization_XmlReflectionM3763194608.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb1864082097.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem1987994689.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
extern "C"  void XmlReflectionImporter__ctor_m3139670653 (XmlReflectionImporter_t1815714992 * __this, XmlAttributeOverrides_t3994942922 * ___attributeOverrides0, String_t* ___defaultNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
extern "C"  void XmlReflectionImporter__cctor_m3348473364 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportTypeMapping_m1504179685 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportTypeMapping_m1389419535 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, String_t* ___defaultNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportTypeMapping_m319963914 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportTypeMapping_m2144639791 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_CreateTypeMapping_m4071344262 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultXmlType2, String_t* ___defaultNamespace3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportClassMapping_m3229659760 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportClassMapping_m1864999285 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
extern "C"  void XmlReflectionImporter_RegisterDerivedMap_m3720593953 (XmlReflectionImporter_t1815714992 * __this, XmlTypeMapping_t315595419 * ___map0, XmlTypeMapping_t315595419 * ___derivedMap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  String_t* XmlReflectionImporter_GetTypeNamespace_m1830165358 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportListMapping_m2202562381 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, XmlAttributes_t1176289510 * ___atts3, int32_t ___nestingLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportListMapping_m1508001016 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, XmlAttributes_t1176289510 * ___atts3, int32_t ___nestingLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportXmlNodeMapping_m2309545688 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportPrimitiveMapping_m2252655448 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportEnumMapping_m1135438990 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t315595419 * XmlReflectionImporter_ImportXmlSerializableMapping_m2706931387 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, XmlRootAttribute_t3527426713 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
extern "C"  void XmlReflectionImporter_ImportIncludedTypes_m3032390036 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, String_t* ___defaultNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
extern "C"  Il2CppObject * XmlReflectionImporter_GetReflectionMembers_m2600948256 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
extern "C"  XmlTypeMapMember_t3057402259 * XmlReflectionImporter_CreateMapMember_m609954798 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___declaringType0, XmlReflectionMember_t3763194608 * ___rmember1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C"  XmlTypeMapElementInfoList_t1987994689 * XmlReflectionImporter_ImportElementInfo_m451837085 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___cls0, String_t* ___defaultName1, String_t* ___defaultNamespace2, Type_t * ___defaultType3, XmlTypeMapMemberElement_t1864082097 * ___member4, XmlAttributes_t1176289510 * ___atts5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C"  XmlTypeMapElementInfoList_t1987994689 * XmlReflectionImporter_ImportAnyElementInfo_m1226164099 (XmlReflectionImporter_t1815714992 * __this, String_t* ___defaultNamespace0, XmlReflectionMember_t3763194608 * ___rmember1, XmlTypeMapMemberElement_t1864082097 * ___member2, XmlAttributes_t1176289510 * ___atts3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
extern "C"  void XmlReflectionImporter_ImportTextElementInfo_m2108365274 (XmlReflectionImporter_t1815714992 * __this, XmlTypeMapElementInfoList_t1987994689 * ___list0, Type_t * ___defaultType1, XmlTypeMapMemberElement_t1864082097 * ___member2, XmlAttributes_t1176289510 * ___atts3, String_t* ___defaultNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
extern "C"  bool XmlReflectionImporter_CanBeNull_m3251854165 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
extern "C"  void XmlReflectionImporter_IncludeType_m4024160934 (XmlReflectionImporter_t1815714992 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
extern "C"  Il2CppObject * XmlReflectionImporter_GetDefaultValue_m1037264908 (XmlReflectionImporter_t1815714992 * __this, TypeData_t3979356678 * ___typeData0, Il2CppObject * ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
