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

// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t1680966409;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t634537510;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Xml_System_Xml_Serialization_XmlElementEvent634537510.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Xml.Serialization.XmlElementEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlElementEventHandler__ctor_m2329367878 (XmlElementEventHandler_t1680966409 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlElementEventArgs)
extern "C"  void XmlElementEventHandler_Invoke_m2993031860 (XmlElementEventHandler_t1680966409 * __this, Il2CppObject * ___sender0, XmlElementEventArgs_t634537510 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlElementEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlElementEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlElementEventHandler_BeginInvoke_m2990674315 (XmlElementEventHandler_t1680966409 * __this, Il2CppObject * ___sender0, XmlElementEventArgs_t634537510 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlElementEventHandler_EndInvoke_m1149367744 (XmlElementEventHandler_t1680966409 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
