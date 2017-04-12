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

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t1255294979;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3994942922;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t3527426713;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3859077982;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t634537510;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t3585347612;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t983274210;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3551839386;
// System.Object
struct Il2CppObject;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t1597064667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOv3994942922.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu3527426713.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeEv3859077982.h"
#include "System_Xml_System_Xml_Serialization_XmlElementEvent634537510.h"
#include "System_Xml_System_Xml_Serialization_XmlNodeEventAr3585347612.h"
#include "System_Xml_System_Xml_Serialization_UnreferencedObj983274210.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3551839386.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping1597064667.h"

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C"  void XmlSerializer__ctor_m3005890263 (XmlSerializer_t1255294979 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  void XmlSerializer__ctor_m4166692505 (XmlSerializer_t1255294979 * __this, Type_t * ___type0, XmlAttributeOverrides_t3994942922 * ___overrides1, TypeU5BU5D_t1664964607* ___extraTypes2, XmlRootAttribute_t3527426713 * ___root3, String_t* ___defaultNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
extern "C"  void XmlSerializer__cctor_m1220494619 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
extern "C"  void XmlSerializer_OnUnknownAttribute_m839813083 (XmlSerializer_t1255294979 * __this, XmlAttributeEventArgs_t3859077982 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
extern "C"  void XmlSerializer_OnUnknownElement_m1838293243 (XmlSerializer_t1255294979 * __this, XmlElementEventArgs_t634537510 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
extern "C"  void XmlSerializer_OnUnknownNode_m77536263 (XmlSerializer_t1255294979 * __this, XmlNodeEventArgs_t3585347612 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C"  void XmlSerializer_OnUnreferencedObject_m200270558 (XmlSerializer_t1255294979 * __this, UnreferencedObjectEventArgs_t983274210 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
extern "C"  XmlSerializationReader_t3551839386 * XmlSerializer_CreateReader_m1282440978 (XmlSerializer_t1255294979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m267896705 (XmlSerializer_t1255294979 * __this, TextReader_t1561828458 * ___textReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m39043436 (XmlSerializer_t1255294979 * __this, XmlReader_t3675626668 * ___xmlReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m1941587922 (XmlSerializer_t1255294979 * __this, XmlSerializationReader_t3551839386 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
extern "C"  XmlSerializationReader_t3551839386 * XmlSerializer_CreateReader_m3337323397 (XmlSerializer_t1255294979 * __this, XmlMapping_t1597064667 * ___typeMapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializer_CheckGeneratedTypes_m4253112155 (XmlSerializer_t1255294979 * __this, XmlMapping_t1597064667 * ___typeMapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
