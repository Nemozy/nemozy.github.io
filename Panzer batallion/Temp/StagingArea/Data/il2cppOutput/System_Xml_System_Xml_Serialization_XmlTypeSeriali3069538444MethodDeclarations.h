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

// System.Xml.Serialization.XmlTypeSerializationSource
struct XmlTypeSerializationSource_t3069538444;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t3527426713;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3994942922;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu3527426713.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOv3994942922.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Serialization.XmlTypeSerializationSource::.ctor(System.Type,System.Xml.Serialization.XmlRootAttribute,System.Xml.Serialization.XmlAttributeOverrides,System.String,System.Type[])
extern "C"  void XmlTypeSerializationSource__ctor_m3400024680 (XmlTypeSerializationSource_t3069538444 * __this, Type_t * ___type0, XmlRootAttribute_t3527426713 * ___root1, XmlAttributeOverrides_t3994942922 * ___attributeOverrides2, String_t* ___namspace3, TypeU5BU5D_t1664964607* ___includedTypes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeSerializationSource::Equals(System.Object)
extern "C"  bool XmlTypeSerializationSource_Equals_m855266782 (XmlTypeSerializationSource_t3069538444 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeSerializationSource::GetHashCode()
extern "C"  int32_t XmlTypeSerializationSource_GetHashCode_m1358929066 (XmlTypeSerializationSource_t3069538444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
