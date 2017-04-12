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

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3551839386;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t1255294979;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t3886809155;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t36825869;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t3196984506;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3162327146;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Array
struct Il2CppArray;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t825234753;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t2623090263;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlElement
struct XmlElement_t2877111883;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializer1255294979.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3886809155.h"
#include "System_Xml_System_Xml_Serialization_XmlSerialization36825869.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3196984506.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3162327146.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_Xml_System_Xml_XmlAttribute175731005.h"
#include "System_Xml_System_Xml_XmlElement2877111883.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
extern "C"  void XmlSerializationReader__ctor_m3998741431 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
extern "C"  void XmlSerializationReader_Initialize_m2808791690 (XmlSerializationReader_t3551839386 * __this, XmlReader_t3675626668 * ___reader0, XmlSerializer_t1255294979 * ___eventSource1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
extern "C"  ArrayList_t4252133567 * XmlSerializationReader_EnsureArrayList_m1357435501 (XmlSerializationReader_t3551839386 * __this, ArrayList_t4252133567 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
extern "C"  Hashtable_t909839986 * XmlSerializationReader_EnsureHashtable_m89501558 (XmlSerializationReader_t3551839386 * __this, Hashtable_t909839986 * ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
extern "C"  XmlDocument_t3649534162 * XmlSerializationReader_get_Document_m2666960474 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
extern "C"  XmlReader_t3675626668 * XmlSerializationReader_get_Reader_m485185114 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
extern "C"  void XmlSerializationReader_AddFixup_m3567046309 (XmlSerializationReader_t3551839386 * __this, CollectionFixup_t3886809155 * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
extern "C"  void XmlSerializationReader_AddFixup_m1103482995 (XmlSerializationReader_t3551839386 * __this, Fixup_t36825869 * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
extern "C"  void XmlSerializationReader_AddFixup_m1663837456 (XmlSerializationReader_t3551839386 * __this, CollectionItemFixup_t3196984506 * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
extern "C"  void XmlSerializationReader_AddReadCallback_m3628669922 (XmlSerializationReader_t3551839386 * __this, String_t* ___name0, String_t* ___ns1, Type_t * ___type2, XmlSerializationReadCallback_t3162327146 * ___read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
extern "C"  void XmlSerializationReader_AddTarget_m2198124619 (XmlSerializationReader_t3551839386 * __this, String_t* ___id0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
extern "C"  String_t* XmlSerializationReader_CurrentTag_m688508749 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
extern "C"  Exception_t1927440687 * XmlSerializationReader_CreateReadOnlyCollectionException_m3840186565 (XmlSerializationReader_t3551839386 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
extern "C"  Exception_t1927440687 * XmlSerializationReader_CreateUnknownConstantException_m2398408316 (XmlSerializationReader_t3551839386 * __this, String_t* ___value0, Type_t * ___enumType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
extern "C"  Exception_t1927440687 * XmlSerializationReader_CreateUnknownNodeException_m307510187 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
extern "C"  Exception_t1927440687 * XmlSerializationReader_CreateUnknownTypeException_m4117810175 (XmlSerializationReader_t3551839386 * __this, XmlQualifiedName_t1944712516 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
extern "C"  Il2CppArray * XmlSerializationReader_EnsureArrayIndex_m309052747 (XmlSerializationReader_t3551839386 * __this, Il2CppArray * ___a0, int32_t ___index1, Type_t * ___elementType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
extern "C"  bool XmlSerializationReader_GetNullAttr_m2179495937 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
extern "C"  Il2CppObject * XmlSerializationReader_GetTarget_m3558587843 (XmlSerializationReader_t3551839386 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
extern "C"  bool XmlSerializationReader_TargetReady_m2355927675 (XmlSerializationReader_t3551839386 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
extern "C"  XmlQualifiedName_t1944712516 * XmlSerializationReader_GetXsiType_m2022310510 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
extern "C"  bool XmlSerializationReader_IsXmlnsAttribute_m2471398563 (XmlSerializationReader_t3551839386 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
extern "C"  void XmlSerializationReader_ParseWsdlArrayType_m1280836276 (XmlSerializationReader_t3551839386 * __this, XmlAttribute_t175731005 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSerializationReader_ReadElementQualifiedName_m4085442569 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
extern "C"  void XmlSerializationReader_ReadEndElement_m2849553088 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
extern "C"  bool XmlSerializationReader_ReadNull_m1133043772 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSerializationReader_ReadNullableQualifiedName_m3865328582 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
extern "C"  String_t* XmlSerializationReader_ReadNullableString_m1734080624 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencedElement_m54600073 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
extern "C"  WriteCallbackInfo_t825234753 * XmlSerializationReader_GetCallbackInfo_m1955796118 (XmlSerializationReader_t3551839386 * __this, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencedElement_m3650198129 (XmlSerializationReader_t3551839386 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
extern "C"  bool XmlSerializationReader_ReadList_m299076487 (XmlSerializationReader_t3551839386 * __this, Il2CppObject ** ___resultList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
extern "C"  void XmlSerializationReader_ReadReferencedElements_m244390419 (XmlSerializationReader_t3551839386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m3449951426 (XmlSerializationReader_t3551839386 * __this, String_t** ___fixupReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m2426558402 (XmlSerializationReader_t3551839386 * __this, String_t* ___name0, String_t* ___ns1, String_t** ___fixupReference2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m3535487059 (XmlSerializationReader_t3551839386 * __this, String_t* ___name0, String_t* ___ns1, bool ___elementCanBeType2, String_t** ___fixupReference3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
extern "C"  Il2CppObject * XmlSerializationReader_ReadSerializable_m3488908855 (XmlSerializationReader_t3551839386 * __this, Il2CppObject * ___serializable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
extern "C"  String_t* XmlSerializationReader_ReadString_m629225863 (XmlSerializationReader_t3551839386 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
extern "C"  Il2CppObject * XmlSerializationReader_ReadTypedPrimitive_m821798985 (XmlSerializationReader_t3551839386 * __this, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReader_ReadTypedPrimitive_m2699919916 (XmlSerializationReader_t3551839386 * __this, XmlQualifiedName_t1944712516 * ___qname0, bool ___reportUnknown1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlSerializationReader_ReadXmlNode_m285058221 (XmlSerializationReader_t3551839386 * __this, bool ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
extern "C"  XmlDocument_t3649534162 * XmlSerializationReader_ReadXmlDocument_m3111896973 (XmlSerializationReader_t3551839386 * __this, bool ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
extern "C"  Il2CppArray * XmlSerializationReader_ShrinkArray_m3604085961 (XmlSerializationReader_t3551839386 * __this, Il2CppArray * ___a0, int32_t ___length1, Type_t * ___elementType2, bool ___isNullable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
extern "C"  XmlQualifiedName_t1944712516 * XmlSerializationReader_ToXmlQualifiedName_m160191745 (XmlSerializationReader_t3551839386 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
extern "C"  void XmlSerializationReader_UnknownAttribute_m3203643322 (XmlSerializationReader_t3551839386 * __this, Il2CppObject * ___o0, XmlAttribute_t175731005 * ___attr1, String_t* ___qnames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
extern "C"  void XmlSerializationReader_UnknownElement_m1337811610 (XmlSerializationReader_t3551839386 * __this, Il2CppObject * ___o0, XmlElement_t2877111883 * ___elem1, String_t* ___qnames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
extern "C"  void XmlSerializationReader_UnknownNode_m1311162329 (XmlSerializationReader_t3551839386 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
extern "C"  void XmlSerializationReader_UnknownNode_m565603419 (XmlSerializationReader_t3551839386 * __this, Il2CppObject * ___o0, String_t* ___qnames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
extern "C"  void XmlSerializationReader_OnUnknownNode_m2910576407 (XmlSerializationReader_t3551839386 * __this, XmlNode_t616554813 * ___node0, Il2CppObject * ___o1, String_t* ___qnames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
extern "C"  void XmlSerializationReader_UnreferencedObject_m3355694536 (XmlSerializationReader_t3551839386 * __this, String_t* ___id0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
