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

// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1548133672;
// System.String
struct String_t;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.Xml.XmlException
struct XmlException_t4188277960;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2906609633 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C"  void XmlReader_System_IDisposable_Dispose_m1699080386 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C"  XmlReaderBinarySupport_t1548133672 * XmlReader_get_Binary_m4267712960 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C"  bool XmlReader_get_CanResolveEntity_m2249999087 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C"  bool XmlReader_get_HasAttributes_m2349560689 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C"  bool XmlReader_get_IsDefault_m1510950801 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C"  String_t* XmlReader_get_Item_m262748378 (XmlReader_t3675626668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Name()
extern "C"  String_t* XmlReader_get_Name_m2814912812 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlReader_get_SchemaInfo_m2886262078 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t1578612233 * XmlReader_get_Settings_m72227715 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C"  int32_t XmlReader_get_XmlSpace_m4205984803 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C"  void XmlReader_Dispose_m1559080013 (XmlReader_t3675626668 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsStartElement()
extern "C"  bool XmlReader_IsStartElement_m1507039293 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsStartElement(System.String,System.String)
extern "C"  bool XmlReader_IsStartElement_m3215271885 (XmlReader_t3675626668 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C"  void XmlReader_MoveToAttribute_m92945686 (XmlReader_t3675626668 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C"  bool XmlReader_IsContent_m1996106507 (XmlReader_t3675626668 * __this, int32_t ___nodeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C"  int32_t XmlReader_MoveToContent_m1469314666 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadElementString()
extern "C"  String_t* XmlReader_ReadElementString_m1037752001 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C"  void XmlReader_ReadEndElement_m2186922488 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C"  String_t* XmlReader_ReadOuterXml_m3008583754 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C"  void XmlReader_ReadStartElement_m2262733889 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C"  String_t* XmlReader_ReadString_m1231088435 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m1833707716 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C"  XmlException_t4188277960 * XmlReader_XmlError_m2086844343 (XmlReader_t3675626668 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
