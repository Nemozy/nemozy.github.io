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

// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t3651715031;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t983274210;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Xml_System_Xml_Serialization_UnreferencedObj983274210.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnreferencedObjectEventHandler__ctor_m3379040454 (UnreferencedObjectEventHandler_t3651715031 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C"  void UnreferencedObjectEventHandler_Invoke_m883705012 (UnreferencedObjectEventHandler_t3651715031 * __this, Il2CppObject * ___sender0, UnreferencedObjectEventArgs_t983274210 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnreferencedObjectEventHandler_BeginInvoke_m2120830731 (UnreferencedObjectEventHandler_t3651715031 * __this, Il2CppObject * ___sender0, UnreferencedObjectEventArgs_t983274210 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnreferencedObjectEventHandler_EndInvoke_m2828555128 (UnreferencedObjectEventHandler_t3651715031 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
