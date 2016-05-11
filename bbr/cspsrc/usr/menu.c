/* menu.c - GUI menu control */

/* Copyright(C) eyBuild Group, 2005, 2006. All Rights Reserved. */

/*
modification history
--------------------
01a, 2005-12-3, newzy author
*/

/*
DESCRIPTION
GUI menu control
*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <ebrequest.h>
#include <ebrespond.h>
#include <eberror.h>
#include <eblang.h>
#include <menu.h>


/* net */
MENU_NODE menu_net[] = {
	{"/network/lan_setting.csp", "lansetting"}, 
    {"/network/wan_setting.csp", "wansetting"}, 
	{"/network/mac_setting.csp", "macclone"}, 
    };

/* dhcp */
MENU_NODE menu_dhcp[] = {
    {"/dhcp/server.csp", "dhcpserver"}, 
    {"/dhcp/clients.csp", "dhcpclients"}, 
	{"/dhcp/fixmap.csp", "dhcpfixmap"}, 
    };

/* nat */   
MENU_NODE menu_nat[] = {
    {"/nat/virtualserver.csp", "natvirtualserver"}, 
    {"/nat/special_app.csp", "natspecial_app"}, 
	{"/nat/dmz.csp", "natdmz"}, 
	{"/nat/upnp.csp", "natupnp"}, 
	};

/* security */
MENU_NODE menu_security[] = {
    {"/security/firewall.csp", "securityfirewall"}, 
//    {"/security/ipfilter.csp", "securityipfilter"}, 
	{"/security/domainfilter.csp", "securitydomainfilter"}, 
	{"/security/macfilter.csp", "securitymacfilter"}, 
	{"/security/remoteweb.csp", "securityremoteweb"}, 
	{"/security/ping.csp", "securityping"}, 
	};

/* static route */
MENU_NODE menu_route[] = 
    {{"/route/static.csp", "routestatic"}, };

/* system */
MENU_NODE menu_system[] = {
    {"/system/upgrade.csp", "systemupgrade"}, 
    {"/system/restore.csp", "systemrestore"}, 
	{"/system/reboot.csp", "systemreboot"}, 
	{"/system/account.csp", "systemaccount"}, 
	{"/system/log.csp", "systemlog"} };

#define NV(name)  ARRAYNUM(name), &name[0]
MENU_MANI_NODE  menu_list[] = 
{ 
    {{"/basic/status.csp", 			"basicstatus"},    	0, NULL}, 
    {{"/basic/guide.csp", 			"basicguide"},    	0, NULL}, 
    {{"/network/lan_setting.csp", 	"network"},    	NV(menu_net)}, 
    {{"/dhcp/server.csp", 			"dhcpserver"},  NV(menu_dhcp)}, 
    {{"/nat/virtualserver.csp", 	"nat"},    		NV(menu_nat)}, 
    {{"/security/firewall.csp", 	"security"},    NV(menu_security)}, 
    {{"/route/static", 				"route"},    	NV(menu_route)}, 
    {{"/system/upgrade.csp", 		"systetool"},  	NV(menu_system)},
};
#undef NV


int check_id (unsigned  mid, unsigned  sid)
{
    /* invalid main id */
    if (mid >= sizeof(menu_list)/sizeof(menu_list[0]))
    {
        ebSendError(400, "main_id %d is too big.", mid);           
        return -1;
    }
    
    /* no such sub node */
    if (sid >= menu_list[mid].sub_num && 0 != sid)
    {
        ebSendError(400, "sub_id %d is too big.", sid);
        return -1;
    }
    
	return 0;
}

/* return the URL of the main-frame-page
 * if "" = MainID or "" == "SubID" then output default page.
 * result must as following format:
 * /cgi-bin/bbr.cgi?cgi=Status
 */

int menu_get_page(void * fp, char * MainID, char * SubID)
{
    unsigned        mid = 0;		// main ID
    unsigned        sid = 0;		// sub ID
	//char			cginame[256] = "";
	char *			prefix;

	prefix = cgiPrefix(NULL);

    /* output the default page */    
    if ('\0' == MainID[0] || '\0' == SubID[0])
    {
        print("%s/network/lan_setting.csp", prefix);
        return OK;
    }
    
    /* get mainId and subId */
    mid = MainID[0] - 'A';
    sid =  SubID[0] - '0';
	if (-1 == check_id(mid, sid))
		return ERROR;
    
    if (NULL == menu_list[mid].subnode)
    {
		print("%s%s", prefix,
				menu_list[mid].node.pagename);
    }
    else
	{
		/* all right */    
		print("%s%s", prefix,
				menu_list[mid].subnode[sid].pagename);
	}
	
	return OK;
}


/* update menu and sub menu
*
*/
int menu_update(void * fp, char * MainID, char * SubID)
{
	//char			rom_base[256] = "";
	char *			rom_base = NULL;
    unsigned        mid = 0;		// main ID
    unsigned        sid = 0;		// sub ID
	unsigned		i;
	int				j;
	USE_LANG_SET(menu);

    /* get mainId and subId */
    mid = MainID[0] - 'A';
    sid =  SubID[0] - '0';

	/* out of range,
	 * set to default to : network/lansetting
	 */
	if ( mid >= 8) 
	    mid = 2, sid = 0;

	rom_base = romPrefix(NULL);

	for (i=0; i<ARRAYNUM(menu_list); i++)
	{
		/* expand sub node */
		print(
		"  <TR>\n"
		"	<TD class=onelevelsp width=10><IMG height=10 src=\"%s/rom/%s.gif\"\n" 
		"	  width=10></TD>\n"
		"	<TD class=onelevelsp colSpan=2 width=130><A class=tp1 href=\"\"\n"
		"	  onclick=\"return OnHrefClick('%c', '0');\"\n" 
		"	  onmouseover=\"return ResetStatus('%s');\">%s%s%s</A></TD></TR>\n",
		rom_base,
		menu_list[i].subnode ? (mid==i ? "minus": "plus"): "pw",	// has sub node or not
		'A'+i, 
		lang(menu_list[i].node.descripion), 
		((int)mid == i) ? "<FONT color=#ff0000>": "",
		lang(menu_list[i].node.descripion),
		((int)mid == i) ? "</FONT>": ""
		);

		if (mid != i)
			continue;
		
		for (j=0; j<(int)menu_list[i].sub_num; j++)
		{
			print(
			"  <TR>\n"
			"	<TD class=twolevel width=10><IMG height=10 src=\"%s/rom/sp.gif\"\n" 
			"	  width=10></TD>\n"
			"   <TD class=twolevel vAlign=center width=10><IMG height=10\n"
			"     src=\"%s/rom/pw.gif\" width=10></TD>\n"
			"	<TD class=twolevel width=120><A class=tp2 href=\"\"\n"
			"	  onclick=\"return OnHrefClick('%c', '%d');\"\n" 
			"	  onmouseover=\"return ResetStatus('%s');\">"
			"%s%s%s</A></TD></TR>\n",
			rom_base,
			rom_base,
			'A'+i, 
			j, 
			lang(menu_list[i].subnode[j].descripion), 
				((int)sid == j) ? "<FONT color=#ff0000>": "",
			lang(menu_list[i].subnode[j].descripion),
				((int)sid == j) ? "</FONT>": ""
			);
		}
	}

	return OK;
}



