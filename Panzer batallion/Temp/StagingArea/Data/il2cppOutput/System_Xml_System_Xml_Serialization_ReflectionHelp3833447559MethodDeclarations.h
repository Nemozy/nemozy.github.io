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

// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t3833447559;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t315595419;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping315595419.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Xml.Serialization.ReflectionHelper::.ctor()
extern "C"  void ReflectionHelper__ctor_m745522076 (ReflectionHelper_t3833447559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::.cctor()
extern "C"  void ReflectionHelper__cctor_m2345495467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterSchemaType(System.Xml.Serialization.XmlTypeMapping,System.String,System.String)
extern "C"  void ReflectionHelper_RegisterSchemaType_m1486393985 (ReflectionHelper_t3833447559 * __this, XmlTypeMapping_t315595419 * ___map0, String_t* ___xmlType1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredSchemaType(System.String,System.String)
extern "C"  XmlTypeMapping_t315595419 * ReflectionHelper_GetRegisteredSchemaType_m3873422121 (ReflectionHelper_t3833447559 * __this, String_t* ___xmlType0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterClrType(System.Xml.Serialization.XmlTypeMapping,System.Type,System.String)
extern "C"  void ReflectionHelper_RegisterClrType_m3093094000 (ReflectionHelper_t3833447559 * __this, XmlTypeMapping_t315595419 * ___map0, Type_t * ___type1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredClrType(System.Type,System.String)
extern "C"  XmlTypeMapping_t315595419 * ReflectionHelper_GetRegisteredClrType_m630699698 (ReflectionHelper_t3833447559 * __this, Type_t * ___type0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::CheckSerializableType(System.Type,System.Boolean)
extern "C"  void ReflectionHelper_CheckSerializableType_m3353169983 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___allowPrivateConstructors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
