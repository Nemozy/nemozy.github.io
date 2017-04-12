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

// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t2205849959;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t3585347612;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Xml_System_Xml_Serialization_XmlNodeEventAr3585347612.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Xml.Serialization.XmlNodeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeEventHandler__ctor_m317957040 (XmlNodeEventHandler_t2205849959 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs)
extern "C"  void XmlNodeEventHandler_Invoke_m2709624726 (XmlNodeEventHandler_t2205849959 * __this, Il2CppObject * ___sender0, XmlNodeEventArgs_t3585347612 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlNodeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlNodeEventHandler_BeginInvoke_m3478949747 (XmlNodeEventHandler_t2205849959 * __this, Il2CppObject * ___sender0, XmlNodeEventArgs_t3585347612 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeEventHandler_EndInvoke_m247110394 (XmlNodeEventHandler_t2205849959 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
