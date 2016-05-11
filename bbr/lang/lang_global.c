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
	EB_LANG_ADD("save", 	"保 存", 	"Save", "保存"),
	EB_LANG_ADD("login", 	"登录", 	"Login", "登録"),
	EB_LANG_ADD("logout", 	"退出", 	"Logout", "退出"),
	EB_LANG_ADD("goback", 	"返回", 	"Return", "戻る"),
	EB_LANG_ADD("submit",   "提 交", "Submit", "提出する"),
	EB_LANG_ADD("refresh",  "刷 新", "Refresh", "更新する"),
	EB_LANG_ADD("option", 	"可选", "option", "オプション"),
	EB_LANG_ADD("title",    "宽带路由器", "Broadband Router", "ブロードバンドのルータ"),
	EB_LANG_ADD("address", 	"地址", 		" Addr", "アドレス"),
	EB_LANG_ADD("mac", 	    "MAC地址", "MAC Address", "MACアドレス"),
	EB_LANG_ADD("protocol", "协议", "Protocol", "プロトコル"),
	EB_LANG_ADD("gateway",  "网关", "Gateway", "ゲートウェイ"),
	EB_LANG_ADD("mask",     "子网掩码", "Mask Address", "マスクアドレス"),
	EB_LANG_ADD("dns",      "DNS服务器", "DNS Server", "DNS サーバ"),
	EB_LANG_ADD("connect",  "连 接", 	"Connect", "接続"),
	EB_LANG_ADD("disconnect",   "断 线", 	"Disconnect", "分離"),
	EB_LANG_ADD("pre_page", "上一页", 	"Pre Page", "前ページ"),
	EB_LANG_ADD("next_page","下一页", 	"Next Page", "次のページ"),
	EB_LANG_ADD("clear", 	"清 空", 	"Clear", "一掃する"),
	EB_LANG_ADD("update", 	"更新", 	"Update", "アップデート"),
	EB_LANG_ADD("release", 	"释放",		"Release", "釈放"), 
	EB_LANG_ADD("clean", 	"清 空", 	"Clean", "一掃する"),
	EB_LANG_ADD("release", 	"释放",		"Release", "釈放"), 
	EB_LANG_ADD("enable", 	"启用",		"Enable", "可能にします"), 
	EB_LANG_ADD("close", 	"关闭",		"Close", "閉鎖する"), 
	EB_LANG_ADD("option", 	"选项", "Option", "オプション"),
	EB_LANG_ADD("stat", 	"状态", "Status", "状態"),
	EB_LANG_ADD("modify2", 	"修改", "Modify", "改正"),
	EB_LANG_ADD("delete", 	"删除", "Delete", "削除する"),
	EB_LANG_ADD("prepage", 	"上一页",	"Previous Page", "前ページ"), 
	EB_LANG_ADD("nextpage", "下一页",	"Next Page", "次のページ"), 
	EB_LANG_ADD("sec", 		"秒",		"seconds", "秒"), 
	EB_LANG_ADD("err_ip", 	"无效IP地址，请重新输入！",		
			"Invalid IP address, please input again!", 
			"無効なIPアドレス、再び入力して下さい！"), 
	EB_LANG_ADD("err_mac", 			
			"无效MAC地址，请重新输入！",		
			"Invalid MAC address, please input again!", 
			"無効なMAC住所、再び入力して下さい！"), 
	EB_LANG_ADD("restart_router", 	
			"此功能需重启后才能生效，确定现在重启路由器？",		
			"This should restart the router, restart it now?", 
			"この機能が再起動しなければならない後にようやく発効することができて、今ルータを再起動することを確定するか？"), 
	
	EB_LANG_ADD(NULL, NULL, NULL, NULL)
};
	
