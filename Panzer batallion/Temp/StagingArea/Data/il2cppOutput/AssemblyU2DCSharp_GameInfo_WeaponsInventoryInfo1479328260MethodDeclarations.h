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

// GameInfo/WeaponsInventoryInfo
struct WeaponsInventoryInfo_t1479328260;
// System.Collections.Generic.Dictionary`2<System.String,GameInfo/Weapon>
struct Dictionary_2_t1716731161;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GameInfo/WeaponsInventoryInfo::.ctor()
extern "C"  void WeaponsInventoryInfo__ctor_m3793456849 (WeaponsInventoryInfo_t1479328260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GameInfo/Weapon> GameInfo/WeaponsInventoryInfo::DeXml(System.String)
extern "C"  Dictionary_2_t1716731161 * WeaponsInventoryInfo_DeXml_m2116609908 (WeaponsInventoryInfo_t1479328260 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameInfo/WeaponsInventoryInfo::EncryptString(System.String,System.String)
extern "C"  String_t* WeaponsInventoryInfo_EncryptString_m2714475324 (WeaponsInventoryInfo_t1479328260 * __this, String_t* ___plainText0, String_t* ___passPhrase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameInfo/WeaponsInventoryInfo::DecryptString(System.String,System.String)
extern "C"  String_t* WeaponsInventoryInfo_DecryptString_m3710613724 (WeaponsInventoryInfo_t1479328260 * __this, String_t* ___cipherText0, String_t* ___passPhrase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
