﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Object[]
struct ObjectU5BU5D_t4217747464;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t1021602117;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
extern "C"  ObjectU5BU5D_t4217747464* Resources_FindObjectsOfTypeAll_m3365744935 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t1021602117 * Resources_Load_m2041782325 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t1021602117 * Resources_Load_m243305716 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C"  Object_t1021602117 * Resources_GetBuiltinResource_m582410469 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
