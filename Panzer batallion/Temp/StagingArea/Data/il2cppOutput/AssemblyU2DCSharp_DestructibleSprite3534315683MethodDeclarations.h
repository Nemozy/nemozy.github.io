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

// DestructibleSprite
struct DestructibleSprite_t3534315683;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t981949843;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BinaryImage1602720598.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void DestructibleSprite::.ctor()
extern "C"  void DestructibleSprite__ctor_m3965099674 (DestructibleSprite_t3534315683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::Start()
extern "C"  void DestructibleSprite_Start_m2099746894 (DestructibleSprite_t3534315683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::FixedUpdate()
extern "C"  void DestructibleSprite_FixedUpdate_m2680303625 (DestructibleSprite_t3534315683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::split(BinaryImage)
extern "C"  void DestructibleSprite_split_m1430680010 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::floodFill(BinaryImage&,System.Collections.Generic.List`1<System.Int32>&,System.Int32)
extern "C"  void DestructibleSprite_floodFill_m1022918033 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, List_1_t1440998580 ** ___i1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::ApplyDamage(UnityEngine.Vector2,System.Int32)
extern "C"  void DestructibleSprite_ApplyDamage_m3996840576 (DestructibleSprite_t3534315683 * __this, Vector2_t2243707579  ___point0, int32_t ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::updateCollider()
extern "C"  void DestructibleSprite_updateCollider_m183173605 (DestructibleSprite_t3534315683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestructibleSprite::setCollider(System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>&)
extern "C"  void DestructibleSprite_setCollider_m949000610 (DestructibleSprite_t3534315683 * __this, List_1_t981949843 ** ___paths0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DestructibleSprite::findStartPos(BinaryImage&,System.Int32&)
extern "C"  bool DestructibleSprite_findStartPos_m364378306 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, int32_t* ___startPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>> DestructibleSprite::getPaths(BinaryImage&)
extern "C"  List_1_t981949843 * DestructibleSprite_getPaths_m380358739 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> DestructibleSprite::getPath(BinaryImage&,System.Int32)
extern "C"  List_1_t1612828711 * DestructibleSprite_getPath_m3191301659 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, int32_t ___startPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DestructibleSprite::backTrack(BinaryImage&,System.Collections.Generic.List`1<UnityEngine.Vector2>&,System.Int32)
extern "C"  int32_t DestructibleSprite_backTrack_m2727458967 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, List_1_t1612828711 ** ___path1, int32_t ___start2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DestructibleSprite::nextPos(BinaryImage&,System.Int32&,System.Int32)
extern "C"  bool DestructibleSprite_nextPos_m765111853 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, int32_t* ___pos1, int32_t ___prevPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DestructibleSprite::nextPos(BinaryImage&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  bool DestructibleSprite_nextPos_m1620345188 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, int32_t* ___pos1, int32_t* ___currPos2, int32_t* ___prevPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> DestructibleSprite::simplify(BinaryImage&,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  List_1_t1612828711 * DestructibleSprite_simplify_m2716416358 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598 * ___b0, List_1_t1612828711 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BinaryImage DestructibleSprite::subtraction(BinaryImage,BinaryImage)
extern "C"  BinaryImage_t1602720598  DestructibleSprite_subtraction_m2292042521 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b10, BinaryImage_t1602720598  ___b21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BinaryImage DestructibleSprite::erosion(BinaryImage)
extern "C"  BinaryImage_t1602720598  DestructibleSprite_erosion_m282683242 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BinaryImage DestructibleSprite::dilation(BinaryImage)
extern "C"  BinaryImage_t1602720598  DestructibleSprite_dilation_m3385462441 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BinaryImage DestructibleSprite::BinaryImageFromTex(UnityEngine.Texture2D&)
extern "C"  BinaryImage_t1602720598  DestructibleSprite_BinaryImageFromTex_m2643290406 (DestructibleSprite_t3534315683 * __this, Texture2D_t3542995729 ** ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DestructibleSprite::ApplyBinaryImage2Texture(UnityEngine.Texture2D&,BinaryImage&)
extern "C"  Texture2D_t3542995729 * DestructibleSprite_ApplyBinaryImage2Texture_m3091419306 (DestructibleSprite_t3534315683 * __this, Texture2D_t3542995729 ** ___tex0, BinaryImage_t1602720598 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DestructibleSprite::BinaryImage2Texture(BinaryImage)
extern "C"  Texture2D_t3542995729 * DestructibleSprite_BinaryImage2Texture_m494373906 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DestructibleSprite::BinaryImage2TextureUsingPaths(BinaryImage,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>)
extern "C"  Texture2D_t3542995729 * DestructibleSprite_BinaryImage2TextureUsingPaths_m2225208192 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b0, List_1_t981949843 * ___paths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BinaryImage DestructibleSprite::tidyBinaryImage(BinaryImage)
extern "C"  BinaryImage_t1602720598  DestructibleSprite_tidyBinaryImage_m2816323377 (DestructibleSprite_t3534315683 * __this, BinaryImage_t1602720598  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
