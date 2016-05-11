
/* security */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {
	/* firewall */
		EB_LANG_ADD("firewallsetting", "防火墙设置", "Firewall Setting"),
		EB_LANG_ADD("filterdesc", 
				"本页对防火墙的各个过滤功能的开启与关闭进行设置。只有防火墙的总开关是开启的时候，后续的“IP地址过滤”、“域名过滤”、“MAC地址过滤”、“WAN口Ping”才能够生效，反之，则失效。",
				"You can setting firewall fiter in this page, ..."),
		EB_LANG_ADD("enablefirewall", "开启防火墙（防火墙的总开关）", "Enable Firewall"),
		EB_LANG_ADD("enableipfilter", "开启IP地址过滤", "Enable IP filter"),
		EB_LANG_ADD("defrule", "缺省过滤规则", "Default Rule"),
		EB_LANG_ADD("forwarding", 
				"凡是不符合已设IP地址过滤规则的数据包，<FONT color=#ff0000>允许</FONT>通过本路由器", 
				"Forwarding</FONT> all packes NOT mached with IP address filter."),
		EB_LANG_ADD("discard", 
				"凡是不符合已设IP地址过滤规则的数据包，<FONT color=#ff0000>禁止</FONT>通过本路由器", 
				"Discard</FONT> all packes NOT mached with IP address filter."),
		EB_LANG_ADD("enabledsnfilter", "开启域名过滤", "Enable DSN filter"),
		EB_LANG_ADD("enablemacfilter", "开启MAC地址过滤", "Enable MAC filter"),
		EB_LANG_ADD("forbiddenmac", 
				"仅允许</FONT>已设MAC地址列表中已启用的MAC地址访问Internet", 
				"Only Allow</FONT> enabled in MAC list to access Internet"),
		EB_LANG_ADD("allowother", 
				"禁止</FONT>已设MAC地址列表中已启用的MAC地址访问Internet，允许其他MAC地址访问", 
				"Forbidden</FONT> enabled in MAC list to access Internet, allow others"),

	/* ping */
		EB_LANG_ADD("wanping", "WAN口Ping", "WAN Port Ping"),
		EB_LANG_ADD("discardping", "忽略来自WAN口的Ping：", "Disable WAN port ping"),

	/* webmanage */
		EB_LANG_ADD("promptreboot", 
				"注意：只有在您重启路由器后，WEB管理端口的更改才能生效！", 
				"Notice: This web management configration will avaiable after you restart router."),
		EB_LANG_ADD("remotemanage", "远端WEB管理", "Remote Web management"),

		EB_LANG_ADD("rmdesc", 
				"本页设置路由器的WEB管理端口，同时也设置允许从广域网中执行远端WEB管理的计算机的IP地址。", 
				"You can configure the web mangement port in this page, ..."),
		EB_LANG_ADD("notice", "注意:", "Notice:"),
		EB_LANG_ADD("notice1", 
				"1、本路由器默认的WEB管理端口为80，如果您改变了该默认值（例如改为8080），则您必须用“IP地址:端口”的方式（例如http://192.168.1.1:8080）才可以登录路由器执行WEB界面管理。这项功能需要重启路由器之后才能生效。", 
				"1. The default remote-mangemnt port is 80, ..."),
		EB_LANG_ADD("notice2", 
				"2、本路由器默认的远端WEB管理IP地址为0.0.0.0，在此默认状态下，来自广域网的任何一台计算机都不能登录路由器执行远端WEB管理，如果您改变了默认的远端WEB管理IP地址（例如改为61.88.88.88），那么广域网中只有具有该指定IP地址（例如61.88.88.88）的计算机才能登录路由器执行远端WEB管理。如果将远端WEB管理IP地址设为255.255.255.255，那么，广域网中所有的计算机都可以登录路由器执行远端WEB管理。", 
				"2. The default remote-mangemnt IP is 0.0.0.0, ..."),
		EB_LANG_ADD("webport", "WEB管理端口：", "WAN manage port:"),
		EB_LANG_ADD("webip", "远端WEB管理IP地址：", "Remote Web management IP:"),

	/* webmanage */
		EB_LANG_ADD("sureremove", "您确认要删除当前所有的条目吗？", "Remove all items, are you sure?"),
		EB_LANG_ADD("macfilter", "MAC地址过滤", "MAC filter"),
		EB_LANG_ADD("macfitlerdesc", 
				"本页通过MAC地址过滤来控制局域网中计算机对广域网的访问。", 
				"You can setting MAC filter in this page."),
		EB_LANG_ADD("otherfilter", 
				"防火墙相关设置（如需更改，请到“安全设置”－“防火墙设置”）", 
				"Reference Fireware setting."),
		EB_LANG_ADD("firewallstat", "防火墙功能：", "Firewall Status"),
		EB_LANG_ADD("macstat", "MAC地址过滤功能：", "MAC Filter Status"),
		EB_LANG_ADD("defrule", "缺省过滤规则：", "Default Filter Rule"),
		EB_LANG_ADD("desc", "描 述", "Description"),
		EB_LANG_ADD("stat", "状 态", "Status"),
		EB_LANG_ADD("modify", "修 改", "Modify"),
		EB_LANG_ADD("additem", "添加新条目", "Add New"),
		EB_LANG_ADD("allenable", "使所有条目生效", "Enable All"),
		EB_LANG_ADD("alldisable", "使所有条目失效", "Disable All"),
		EB_LANG_ADD("removeall", "删除所有条目", "Remove all"),

	/* domainfilter */
		EB_LANG_ADD("dmfilter", "域名过滤", "Domain filter"),
		EB_LANG_ADD("dmfitlerdesc", 
				"本页通过域名过滤来限制局域网中计算机对指定的广域网网站的访问。", 
				"You can setting domain filter in this page."),
		EB_LANG_ADD("dmfilterstat", "域名过滤功能：", "MAC Filter Status"),
		EB_LANG_ADD("domain", "域 名", "Firewall Status"),
		EB_LANG_ADD("effective", "生效", "Effective"),

  	
		EB_LANG_ADD(NULL, NULL, NULL)
	};
