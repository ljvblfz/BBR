/* glangset.c - global lange set */

/* Copyright(C) eyBuild Group, 2005, 2006. All Rights Reserved. */

/*
modification history
--------------------
01a, 2006-10-14,	newzy author
*/

#define GLOBAL_LANG_SET
#include <eblang.h>

/* import other languge set */
#include <lang_basic.h>
#include <lang_js_common.h>
#include <lang_nat.h>
#include <lang_security.h>
#include <lang_dhcp.h>
#include <lang_login.h>
#include <lang_network.h>
#include <lang_system.h>
#include <lang_menu.h>
#include <lang_route.h>

EB_MULTI_LANG_BEGIN(NULL, NULL) {
	EB_LANG_ADD("save", 	"�� ��", 	"Save", "����"),
	EB_LANG_ADD("login", 	"��¼", 	"Login", "���h"),
	EB_LANG_ADD("logout", 	"�˳�", 	"Logout", "�˳�"),
	EB_LANG_ADD("goback", 	"����", 	"Return", "����"),
	EB_LANG_ADD("submit",   "�� ��", "Submit", "�������"),
	EB_LANG_ADD("refresh",  "ˢ ��", "Refresh", "���¤���"),
	EB_LANG_ADD("option", 	"��ѡ", "option", "���ץ����"),
	EB_LANG_ADD("title",    "���·����", "Broadband Router", "�֥�`�ɥХ�ɤΥ�`��"),
	EB_LANG_ADD("address", 	"��ַ", 		" Addr", "���ɥ쥹"),
	EB_LANG_ADD("mac", 	    "MAC��ַ", "MAC Address", "MAC���ɥ쥹"),
	EB_LANG_ADD("protocol", "Э��", "Protocol", "�ץ�ȥ���"),
	EB_LANG_ADD("gateway",  "����", "Gateway", "���`�ȥ�����"),
	EB_LANG_ADD("mask",     "��������", "Mask Address", "�ޥ������ɥ쥹"),
	EB_LANG_ADD("dns",      "DNS������", "DNS Server", "DNS ���`��"),
	EB_LANG_ADD("connect",  "�� ��", 	"Connect", "�ӾA"),
	EB_LANG_ADD("disconnect",   "�� ��", 	"Disconnect", "���x"),
	EB_LANG_ADD("pre_page", "��һҳ", 	"Pre Page", "ǰ�ک`��"),
	EB_LANG_ADD("next_page","��һҳ", 	"Next Page", "�ΤΥک`��"),
	EB_LANG_ADD("clear", 	"�� ��", 	"Clear", "һ�ߤ���"),
	EB_LANG_ADD("update", 	"����", 	"Update", "���åץǩ`��"),
	EB_LANG_ADD("release", 	"�ͷ�",		"Release", "ዷ�"), 
	EB_LANG_ADD("clean", 	"�� ��", 	"Clean", "һ�ߤ���"),
	EB_LANG_ADD("release", 	"�ͷ�",		"Release", "ዷ�"), 
	EB_LANG_ADD("enable", 	"����",		"Enable", "���ܤˤ��ޤ�"), 
	EB_LANG_ADD("close", 	"�ر�",		"Close", "�]�i����"), 
	EB_LANG_ADD("option", 	"ѡ��", "Option", "���ץ����"),
	EB_LANG_ADD("stat", 	"״̬", "Status", "״�B"),
	EB_LANG_ADD("modify2", 	"�޸�", "Modify", "����"),
	EB_LANG_ADD("delete", 	"ɾ��", "Delete", "��������"),
	EB_LANG_ADD("prepage", 	"��һҳ",	"Previous Page", "ǰ�ک`��"), 
	EB_LANG_ADD("nextpage", "��һҳ",	"Next Page", "�ΤΥک`��"), 
	EB_LANG_ADD("sec", 		"��",		"seconds", "��"), 
	EB_LANG_ADD("err_ip", 	"��ЧIP��ַ�����������룡",		
			"Invalid IP address, please input again!", 
			"�o����IP���ɥ쥹���٤����������¤�����"), 
	EB_LANG_ADD("err_mac", 			
			"��ЧMAC��ַ�����������룡",		
			"Invalid MAC address, please input again!", 
			"�o����MACס�����٤����������¤�����"), 
	EB_LANG_ADD("restart_router", 	
			"�˹����������������Ч��ȷ����������·������",		
			"This should restart the router, restart it now?", 
			"���ΙC�ܤ������Ӥ��ʤ���Фʤ�ʤ���ˤ褦�䤯�k�����뤳�Ȥ��Ǥ��ơ����`���������Ӥ��뤳�Ȥ�_�����뤫��"), 
	
	EB_LANG_ADD(NULL, NULL, NULL, NULL)
};
	
