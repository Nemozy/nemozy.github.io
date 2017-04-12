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

// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t4074028506;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase822653733.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke3428191965.h"

// System.Void ExitGames.Client.Photon.SocketWebTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketWebTcp__ctor_m3500233912 (SocketWebTcp_t4074028506 * __this, PeerBase_t822653733 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketWebTcp::Dispose()
extern "C"  void SocketWebTcp_Dispose_m622237452 (SocketWebTcp_t4074028506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Connect()
extern "C"  bool SocketWebTcp_Connect_m153352275 (SocketWebTcp_t4074028506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Disconnect()
extern "C"  bool SocketWebTcp_Disconnect_m2180577753 (SocketWebTcp_t4074028506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketWebTcp_Send_m1883102383 (SocketWebTcp_t4074028506 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Receive(System.Byte[]&)
extern "C"  int32_t SocketWebTcp_Receive_m1312043959 (SocketWebTcp_t4074028506 * __this, ByteU5BU5D_t3397334013** ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
extern "C"  Il2CppObject * SocketWebTcp_ReceiveLoop_m3575659302 (SocketWebTcp_t4074028506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
