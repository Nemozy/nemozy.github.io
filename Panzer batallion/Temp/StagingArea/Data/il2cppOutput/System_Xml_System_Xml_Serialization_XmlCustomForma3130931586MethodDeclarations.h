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

// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_TypeData3979356678.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.String System.Xml.Serialization.XmlCustomFormatter::ToXmlString(System.Xml.Serialization.TypeData,System.Object)
extern "C"  String_t* XmlCustomFormatter_ToXmlString_m4086075379 (Il2CppObject * __this /* static, unused */, TypeData_t3979356678 * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlCustomFormatter::FromXmlString(System.Xml.Serialization.TypeData,System.String)
extern "C"  Il2CppObject * XmlCustomFormatter_FromXmlString_m4185517408 (Il2CppObject * __this /* static, unused */, TypeData_t3979356678 * ___type0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
