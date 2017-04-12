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

// WebSocket
struct WebSocket_t1213274227;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocket::.ctor(System.Uri)
extern "C"  void WebSocket__ctor_m2447929677 (WebSocket_t1213274227 * __this, Uri_t19570940 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SendString(System.String)
extern "C"  void WebSocket_SendString_m4293857515 (WebSocket_t1213274227 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::RecvString()
extern "C"  String_t* WebSocket_RecvString_m716708100 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketCreate(System.String)
extern "C"  int32_t WebSocket_SocketCreate_m4170512625 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketState(System.Int32)
extern "C"  int32_t WebSocket_SocketState_m2287817149 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketSend_m2715413356 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t3397334013* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketRecv_m3432083282 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t3397334013* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
extern "C"  int32_t WebSocket_SocketRecvLength_m3766772832 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketClose(System.Int32)
extern "C"  void WebSocket_SocketClose_m4206234618 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t WebSocket_SocketError_m3740416782 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t3397334013* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m2905861795 (WebSocket_t1213274227 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocket::Recv()
extern "C"  ByteU5BU5D_t3397334013* WebSocket_Recv_m3676309770 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Connect()
extern "C"  void WebSocket_Connect_m477610862 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Close()
extern "C"  void WebSocket_Close_m13439692 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocket::get_Connected()
extern "C"  bool WebSocket_get_Connected_m1018762534 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::get_Error()
extern "C"  String_t* WebSocket_get_Error_m2795227660 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
