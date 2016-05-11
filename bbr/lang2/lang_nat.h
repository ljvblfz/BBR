
/* nat */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {
	/* log */
	//	EB_LANG_ADD("inputipleft", "请输入IP地址（", "Please input IP address ("),
	//	EB_LANG_ADD("inputipright", "）！", 	")!"),
	//	EB_LANG_ADD("reinput", "IP地址输入错误，请重新输入（", "Please input gateway"),
		EB_LANG_ADD("retryinput", "IP地址输入错误，请重新输入！", "IP address invalid, please reinput."),
		EB_LANG_ADD("dmz", "DMZ主机", "DMZ Host"),
		EB_LANG_ADD("dmzdesc", 
				"在正常情况下，NAT路由器是禁止广域网直接访问局域网里的计算机的。但是，有些时候我们又需要将局域网内的某台计算机开放给广域网，以实现双向通信，此时只要把该计算机设置为DMZ主机就可以实现了。", 
				"You can configure the static route in this page"),
		EB_LANG_ADD("dmznote", 
				"( 注意:设置DMZ主机之后，与该IP相关的防火墙设置将不起作用。)", 
				"( Notice: After setup DMZ, firewall will be affet for this IP.)"),
		EB_LANG_ADD("dmzip", "DMZ主机IP地址", "DMZ host IP"),
  	
	/* upnp */
		EB_LANG_ADD("upnp", "UPnP设置", "UPnP Setting"),
		EB_LANG_ADD("upnpdesc", 
				"本页设置/显示UPnP的设置以及工作状态。", 
				"You can configure the UPnP in this page"),
		EB_LANG_ADD("upnpstat", "当前UPnP状态：", "UPnP STATUS"),
		EB_LANG_ADD("upnplist", "当前UPnP设置列表", "Current UPnP List"),
		EB_LANG_ADD("appdesc", "应用描述", "APP Desc"),
		EB_LANG_ADD("externport", "外部端口", "Extern Port"),
		EB_LANG_ADD("protocoltype", "协议类型", "protocol type"),
		EB_LANG_ADD("internalport", "内部端口", "internal port"),
		EB_LANG_ADD("delall", "删除所有", "Delete All"),
	
	/* special app */
		EB_LANG_ADD("limitports", "只能输入5个开放端口号段！", "You can input at most 5 port"),
		EB_LANG_ADD("inputtrigerport", "请输入触发端口号！", "Please input triger port"),
		EB_LANG_ADD("inputport", "请输入开放端口号！", "Please input open port"),
		EB_LANG_ADD("illegalinput", 
				"端口输入中含有非法字符，请重新输入！", 
				"Include illegal character, please input again"),
		EB_LANG_ADD("spapp", "特殊应用程序", "UPnP STATUS"),
		EB_LANG_ADD("spdesc", 
				"某些特殊的应用，比如视频会议，Internet游戏，网络电话等，可能无法在简单的NAT路由器下正常工作。但是，通过本页的正确设置之后，就可以弥补以上的这些缺憾，使得这些应用能够正常工作。", 
				"For some special application, such as video conference, internet game, ...."),
		EB_LANG_ADD("trigerport", "触发端口", "Triger Port"),
		EB_LANG_ADD("trigerprotocol", "触发协议", "Triger Protocol"),
		EB_LANG_ADD("openport", "开放端口", "Open Port"),
		EB_LANG_ADD("openprotocol", "开放协议", "Open Protocol"),
		EB_LANG_ADD("genaralapp", "常用应用程序：", "General Application"),
		EB_LANG_ADD("fillto", "填空到", "Fill to"),
	
	/* special app */
		EB_LANG_ADD("noport", "端口号不能为空或为零!", "Protocol port can not be blank or zero!"),
		EB_LANG_ADD("porterr", "端口号含有非法字符，请重新输入！", "Port include illegal character, please input again"),
		EB_LANG_ADD("iperr", "IP地址错误！请重新输入！", "IP include illegal character, please input again"),
		EB_LANG_ADD("virtualserver", "虚拟服务器", "UPnP STATUS"),
		EB_LANG_ADD("vsdesc", 
				"虚拟服务器，简单地说，您可以做这么样的指定：对路由器任何一个或一段协议端口的访问（从WAN口进来的访问），都可以重定位到局域网内某一台指定的网络服务器。", 
				"Virtual Server, in one words, it can hep you map a range of protocol port (from WAN) to a specifical host in LAN."),
		EB_LANG_ADD("serviceport", "服务端口", "Service Port"),
	
		EB_LANG_ADD(NULL, NULL, NULL)
	};
