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

// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_t2014015959;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase822653733.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke3428191965.h"

// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketUdp__ctor_m3165413364 (SocketUdp_t2014015959 * __this, PeerBase_t822653733 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
extern "C"  void SocketUdp_Dispose_m2835647408 (SocketUdp_t2014015959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
extern "C"  bool SocketUdp_Connect_m3274297641 (SocketUdp_t2014015959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
extern "C"  bool SocketUdp_Disconnect_m774988035 (SocketUdp_t2014015959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketUdp_Send_m1861466733 (SocketUdp_t2014015959 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Receive(System.Byte[]&)
extern "C"  int32_t SocketUdp_Receive_m2992891325 (SocketUdp_t2014015959 * __this, ByteU5BU5D_t3397334013** ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
extern "C"  void SocketUdp_DnsAndConnect_m1163717051 (SocketUdp_t2014015959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
extern "C"  void SocketUdp_ReceiveLoop_m4269371786 (SocketUdp_t2014015959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
