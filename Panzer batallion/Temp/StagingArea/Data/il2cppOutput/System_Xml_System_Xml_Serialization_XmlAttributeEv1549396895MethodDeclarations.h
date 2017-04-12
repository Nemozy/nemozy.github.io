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

// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t1549396895;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3859077982;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeEv3859077982.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlAttributeEventHandler__ctor_m2484766270 (XmlAttributeEventHandler_t1549396895 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
extern "C"  void XmlAttributeEventHandler_Invoke_m707139732 (XmlAttributeEventHandler_t1549396895 * __this, Il2CppObject * ___sender0, XmlAttributeEventArgs_t3859077982 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlAttributeEventHandler_BeginInvoke_m3226800051 (XmlAttributeEventHandler_t1549396895 * __this, Il2CppObject * ___sender0, XmlAttributeEventArgs_t3859077982 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlAttributeEventHandler_EndInvoke_m20131588 (XmlAttributeEventHandler_t1549396895 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
