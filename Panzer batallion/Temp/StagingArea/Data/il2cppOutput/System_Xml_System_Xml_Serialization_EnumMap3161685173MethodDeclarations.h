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

// System.Xml.Serialization.EnumMap
struct EnumMap_t3161685173;
// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t3014518580;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.Serialization.EnumMap::.ctor(System.Xml.Serialization.EnumMap/EnumMapMember[],System.Boolean)
extern "C"  void EnumMap__ctor_m3552440948 (EnumMap_t3161685173 * __this, EnumMapMemberU5BU5D_t3014518580* ___members0, bool ___isFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_EnumNames()
extern "C"  StringU5BU5D_t1642385972* EnumMap_get_EnumNames_m1375347683 (EnumMap_t3161685173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_XmlNames()
extern "C"  StringU5BU5D_t1642385972* EnumMap_get_XmlNames_m453623405 (EnumMap_t3161685173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetEnumName(System.String,System.String)
extern "C"  String_t* EnumMap_GetEnumName_m2298613301 (EnumMap_t3161685173 * __this, String_t* ___typeName0, String_t* ___xmlName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
