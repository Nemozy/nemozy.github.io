#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Serialization.XmlTypeMapElementInfo[]
struct XmlTypeMapElementInfoU5BU5D_t4050257494;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t1726696875;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t151515769;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t999867419;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t3057402259;

#include "System_Xml_System_Xml_Serialization_ObjectMap1719332799.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.ClassMap
struct  ClassMap_t1647926812  : public ObjectMap_t1719332799
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_elements
	Hashtable_t909839986 * ____elements_0;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_elementMembers
	ArrayList_t4252133567 * ____elementMembers_1;
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_attributeMembers
	Hashtable_t909839986 * ____attributeMembers_2;
	// System.Xml.Serialization.XmlTypeMapElementInfo[] System.Xml.Serialization.ClassMap::_elementsByIndex
	XmlTypeMapElementInfoU5BU5D_t4050257494* ____elementsByIndex_3;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_flatLists
	ArrayList_t4252133567 * ____flatLists_4;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_allMembers
	ArrayList_t4252133567 * ____allMembers_5;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_membersWithDefault
	ArrayList_t4252133567 * ____membersWithDefault_6;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_listMembers
	ArrayList_t4252133567 * ____listMembers_7;
	// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::_defaultAnyElement
	XmlTypeMapMemberAnyElement_t1726696875 * ____defaultAnyElement_8;
	// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::_defaultAnyAttribute
	XmlTypeMapMemberAnyAttribute_t151515769 * ____defaultAnyAttribute_9;
	// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::_namespaceDeclarations
	XmlTypeMapMemberNamespaces_t999867419 * ____namespaceDeclarations_10;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_xmlTextCollector
	XmlTypeMapMember_t3057402259 * ____xmlTextCollector_11;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_returnMember
	XmlTypeMapMember_t3057402259 * ____returnMember_12;
	// System.Boolean System.Xml.Serialization.ClassMap::_ignoreMemberNamespace
	bool ____ignoreMemberNamespace_13;
	// System.Boolean System.Xml.Serialization.ClassMap::_canBeSimpleType
	bool ____canBeSimpleType_14;

public:
	inline static int32_t get_offset_of__elements_0() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____elements_0)); }
	inline Hashtable_t909839986 * get__elements_0() const { return ____elements_0; }
	inline Hashtable_t909839986 ** get_address_of__elements_0() { return &____elements_0; }
	inline void set__elements_0(Hashtable_t909839986 * value)
	{
		____elements_0 = value;
		Il2CppCodeGenWriteBarrier(&____elements_0, value);
	}

	inline static int32_t get_offset_of__elementMembers_1() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____elementMembers_1)); }
	inline ArrayList_t4252133567 * get__elementMembers_1() const { return ____elementMembers_1; }
	inline ArrayList_t4252133567 ** get_address_of__elementMembers_1() { return &____elementMembers_1; }
	inline void set__elementMembers_1(ArrayList_t4252133567 * value)
	{
		____elementMembers_1 = value;
		Il2CppCodeGenWriteBarrier(&____elementMembers_1, value);
	}

	inline static int32_t get_offset_of__attributeMembers_2() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____attributeMembers_2)); }
	inline Hashtable_t909839986 * get__attributeMembers_2() const { return ____attributeMembers_2; }
	inline Hashtable_t909839986 ** get_address_of__attributeMembers_2() { return &____attributeMembers_2; }
	inline void set__attributeMembers_2(Hashtable_t909839986 * value)
	{
		____attributeMembers_2 = value;
		Il2CppCodeGenWriteBarrier(&____attributeMembers_2, value);
	}

	inline static int32_t get_offset_of__elementsByIndex_3() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____elementsByIndex_3)); }
	inline XmlTypeMapElementInfoU5BU5D_t4050257494* get__elementsByIndex_3() const { return ____elementsByIndex_3; }
	inline XmlTypeMapElementInfoU5BU5D_t4050257494** get_address_of__elementsByIndex_3() { return &____elementsByIndex_3; }
	inline void set__elementsByIndex_3(XmlTypeMapElementInfoU5BU5D_t4050257494* value)
	{
		____elementsByIndex_3 = value;
		Il2CppCodeGenWriteBarrier(&____elementsByIndex_3, value);
	}

	inline static int32_t get_offset_of__flatLists_4() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____flatLists_4)); }
	inline ArrayList_t4252133567 * get__flatLists_4() const { return ____flatLists_4; }
	inline ArrayList_t4252133567 ** get_address_of__flatLists_4() { return &____flatLists_4; }
	inline void set__flatLists_4(ArrayList_t4252133567 * value)
	{
		____flatLists_4 = value;
		Il2CppCodeGenWriteBarrier(&____flatLists_4, value);
	}

	inline static int32_t get_offset_of__allMembers_5() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____allMembers_5)); }
	inline ArrayList_t4252133567 * get__allMembers_5() const { return ____allMembers_5; }
	inline ArrayList_t4252133567 ** get_address_of__allMembers_5() { return &____allMembers_5; }
	inline void set__allMembers_5(ArrayList_t4252133567 * value)
	{
		____allMembers_5 = value;
		Il2CppCodeGenWriteBarrier(&____allMembers_5, value);
	}

	inline static int32_t get_offset_of__membersWithDefault_6() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____membersWithDefault_6)); }
	inline ArrayList_t4252133567 * get__membersWithDefault_6() const { return ____membersWithDefault_6; }
	inline ArrayList_t4252133567 ** get_address_of__membersWithDefault_6() { return &____membersWithDefault_6; }
	inline void set__membersWithDefault_6(ArrayList_t4252133567 * value)
	{
		____membersWithDefault_6 = value;
		Il2CppCodeGenWriteBarrier(&____membersWithDefault_6, value);
	}

	inline static int32_t get_offset_of__listMembers_7() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____listMembers_7)); }
	inline ArrayList_t4252133567 * get__listMembers_7() const { return ____listMembers_7; }
	inline ArrayList_t4252133567 ** get_address_of__listMembers_7() { return &____listMembers_7; }
	inline void set__listMembers_7(ArrayList_t4252133567 * value)
	{
		____listMembers_7 = value;
		Il2CppCodeGenWriteBarrier(&____listMembers_7, value);
	}

	inline static int32_t get_offset_of__defaultAnyElement_8() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____defaultAnyElement_8)); }
	inline XmlTypeMapMemberAnyElement_t1726696875 * get__defaultAnyElement_8() const { return ____defaultAnyElement_8; }
	inline XmlTypeMapMemberAnyElement_t1726696875 ** get_address_of__defaultAnyElement_8() { return &____defaultAnyElement_8; }
	inline void set__defaultAnyElement_8(XmlTypeMapMemberAnyElement_t1726696875 * value)
	{
		____defaultAnyElement_8 = value;
		Il2CppCodeGenWriteBarrier(&____defaultAnyElement_8, value);
	}

	inline static int32_t get_offset_of__defaultAnyAttribute_9() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____defaultAnyAttribute_9)); }
	inline XmlTypeMapMemberAnyAttribute_t151515769 * get__defaultAnyAttribute_9() const { return ____defaultAnyAttribute_9; }
	inline XmlTypeMapMemberAnyAttribute_t151515769 ** get_address_of__defaultAnyAttribute_9() { return &____defaultAnyAttribute_9; }
	inline void set__defaultAnyAttribute_9(XmlTypeMapMemberAnyAttribute_t151515769 * value)
	{
		____defaultAnyAttribute_9 = value;
		Il2CppCodeGenWriteBarrier(&____defaultAnyAttribute_9, value);
	}

	inline static int32_t get_offset_of__namespaceDeclarations_10() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____namespaceDeclarations_10)); }
	inline XmlTypeMapMemberNamespaces_t999867419 * get__namespaceDeclarations_10() const { return ____namespaceDeclarations_10; }
	inline XmlTypeMapMemberNamespaces_t999867419 ** get_address_of__namespaceDeclarations_10() { return &____namespaceDeclarations_10; }
	inline void set__namespaceDeclarations_10(XmlTypeMapMemberNamespaces_t999867419 * value)
	{
		____namespaceDeclarations_10 = value;
		Il2CppCodeGenWriteBarrier(&____namespaceDeclarations_10, value);
	}

	inline static int32_t get_offset_of__xmlTextCollector_11() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____xmlTextCollector_11)); }
	inline XmlTypeMapMember_t3057402259 * get__xmlTextCollector_11() const { return ____xmlTextCollector_11; }
	inline XmlTypeMapMember_t3057402259 ** get_address_of__xmlTextCollector_11() { return &____xmlTextCollector_11; }
	inline void set__xmlTextCollector_11(XmlTypeMapMember_t3057402259 * value)
	{
		____xmlTextCollector_11 = value;
		Il2CppCodeGenWriteBarrier(&____xmlTextCollector_11, value);
	}

	inline static int32_t get_offset_of__returnMember_12() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____returnMember_12)); }
	inline XmlTypeMapMember_t3057402259 * get__returnMember_12() const { return ____returnMember_12; }
	inline XmlTypeMapMember_t3057402259 ** get_address_of__returnMember_12() { return &____returnMember_12; }
	inline void set__returnMember_12(XmlTypeMapMember_t3057402259 * value)
	{
		____returnMember_12 = value;
		Il2CppCodeGenWriteBarrier(&____returnMember_12, value);
	}

	inline static int32_t get_offset_of__ignoreMemberNamespace_13() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____ignoreMemberNamespace_13)); }
	inline bool get__ignoreMemberNamespace_13() const { return ____ignoreMemberNamespace_13; }
	inline bool* get_address_of__ignoreMemberNamespace_13() { return &____ignoreMemberNamespace_13; }
	inline void set__ignoreMemberNamespace_13(bool value)
	{
		____ignoreMemberNamespace_13 = value;
	}

	inline static int32_t get_offset_of__canBeSimpleType_14() { return static_cast<int32_t>(offsetof(ClassMap_t1647926812, ____canBeSimpleType_14)); }
	inline bool get__canBeSimpleType_14() const { return ____canBeSimpleType_14; }
	inline bool* get_address_of__canBeSimpleType_14() { return &____canBeSimpleType_14; }
	inline void set__canBeSimpleType_14(bool value)
	{
		____canBeSimpleType_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
