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

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t2056927484;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t1597064667;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t315595419;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t1818148568;
// System.Xml.Serialization.ClassMap
struct ClassMap_t1647926812;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3057402259;
// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3381496463;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping1597064667.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping315595419.h"
#include "System_Xml_System_Xml_Serialization_XmlMembersMapp1818148568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Serialization_ClassMap1647926812.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb3057402259.h"
#include "System_Xml_System_Xml_Serialization_TypeData3979356678.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem3381496463.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializationReaderInterpreter__ctor_m3295639168 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlMapping_t1597064667 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.cctor()
extern "C"  void XmlSerializationReaderInterpreter__cctor_m2302332040 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitCallbacks()
extern "C"  void XmlSerializationReaderInterpreter_InitCallbacks_m2532393359 (XmlSerializationReaderInterpreter_t2056927484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitIDs()
extern "C"  void XmlSerializationReaderInterpreter_InitIDs_m3639560607 (XmlSerializationReaderInterpreter_t2056927484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot()
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadRoot_m2436515714 (XmlSerializationReaderInterpreter_t2056927484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEncodedObject(System.Xml.Serialization.XmlTypeMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadEncodedObject_m1182253232 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMessage(System.Xml.Serialization.XmlMembersMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadMessage_m2213118201 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlMembersMapping_t1818148568 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot(System.Xml.Serialization.XmlTypeMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadRoot_m2829164015 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___rootMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObject(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadObject_m2407695502 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, bool ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstance(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadClassInstance_m3247100624 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, bool ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstanceMembers(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  void XmlSerializationReaderInterpreter_ReadClassInstanceMembers_m3960001816 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, Il2CppObject * ___ob1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_ReadAttributeMembers_m2802309637 (XmlSerializationReaderInterpreter_t2056927484 * __this, ClassMap_t1647926812 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_ReadMembers_m1416414520 (XmlSerializationReaderInterpreter_t2056927484 * __this, ClassMap_t1647926812 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, bool ___readByOrder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetListMembersDefaults(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_SetListMembersDefaults_m4199641495 (XmlSerializationReaderInterpreter_t2056927484 * __this, ClassMap_t1647926812 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FixupMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_FixupMembers_m5870781 (XmlSerializationReaderInterpreter_t2056927484 * __this, ClassMap_t1647926812 * ___map0, Il2CppObject * ___obfixup1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownAttribute(System.Object)
extern "C"  void XmlSerializationReaderInterpreter_ProcessUnknownAttribute_m3948327078 (XmlSerializationReaderInterpreter_t2056927484 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownElement(System.Object)
extern "C"  void XmlSerializationReaderInterpreter_ProcessUnknownElement_m2199014762 (XmlSerializationReaderInterpreter_t2056927484 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter::IsReadOnly(System.Xml.Serialization.XmlTypeMapMember,System.Xml.Serialization.TypeData,System.Object,System.Boolean)
extern "C"  bool XmlSerializationReaderInterpreter_IsReadOnly_m570015543 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapMember_t3057402259 * ___member0, TypeData_t3979356678 * ___memType1, Il2CppObject * ___ob2, bool ___isValueList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_SetMemberValue_m1010438802 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapMember_t3057402259 * ___member0, Il2CppObject * ___ob1, Il2CppObject * ___value2, bool ___isValueList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValueFromAttr(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_SetMemberValueFromAttr_m3320270877 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapMember_t3057402259 * ___member0, Il2CppObject * ___ob1, Il2CppObject * ___value2, bool ___isValueList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_GetMemberValue_m3860528135 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapMember_t3057402259 * ___member0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObjectElement(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadObjectElement_m1484966142 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapElementInfo_t3381496463 * ___elem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveValue(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadPrimitiveValue_m899430683 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapElementInfo_t3381496463 * ___elem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetValueFromXmlString(System.String,System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlTypeMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_GetValueFromXmlString_m3237113264 (XmlSerializationReaderInterpreter_t2056927484 * __this, String_t* ___value0, TypeData_t3979356678 * ___typeData1, XmlTypeMapping_t315595419 * ___typeMap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Object,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadListElement_m4185722591 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, Il2CppObject * ___list2, bool ___canCreateInstance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListString(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadListString_m3098553746 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, String_t* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::AddListValue(System.Xml.Serialization.TypeData,System.Object&,System.Int32,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_AddListValue_m1553480447 (XmlSerializationReaderInterpreter_t2056927484 * __this, TypeData_t3979356678 * ___listType0, Il2CppObject ** ___list1, int32_t ___index2, Il2CppObject * ___value3, bool ___canCreateInstance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateInstance(System.Type)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_CreateInstance_m2790355022 (XmlSerializationReaderInterpreter_t2056927484 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateList(System.Type)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_CreateList_m1933684307 (XmlSerializationReaderInterpreter_t2056927484 * __this, Type_t * ___listType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::InitializeList(System.Xml.Serialization.TypeData)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_InitializeList_m1067879528 (XmlSerializationReaderInterpreter_t2056927484 * __this, TypeData_t3979356678 * ___listType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FillList(System.Object,System.Object)
extern "C"  void XmlSerializationReaderInterpreter_FillList_m743640462 (XmlSerializationReaderInterpreter_t2056927484 * __this, Il2CppObject * ___list0, Il2CppObject * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::CopyEnumerableList(System.Object,System.Object)
extern "C"  void XmlSerializationReaderInterpreter_CopyEnumerableList_m3553209688 (XmlSerializationReaderInterpreter_t2056927484 * __this, Il2CppObject * ___source0, Il2CppObject * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNodeElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadXmlNodeElement_m2100370349 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNode(System.Xml.Serialization.TypeData,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadXmlNode_m3358153962 (XmlSerializationReaderInterpreter_t2056927484 * __this, TypeData_t3979356678 * ___type0, bool ___wrapped1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadPrimitiveElement_m3390409225 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadEnumElement_m1377723519 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetEnumValue(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_GetEnumValue_m1510424435 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlSerializableElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadXmlSerializableElement_m1603100102 (XmlSerializationReaderInterpreter_t2056927484 * __this, XmlTypeMapping_t315595419 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
