
/* nat */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {
	/* log */
	//	EB_LANG_ADD("inputipleft", "������IP��ַ��", "Please input IP address ("),
	//	EB_LANG_ADD("inputipright", "����", 	")!"),
	//	EB_LANG_ADD("reinput", "IP��ַ����������������루", "Please input gateway"),
		EB_LANG_ADD("retryinput", "IP��ַ����������������룡", "IP address invalid, please reinput."),
		EB_LANG_ADD("dmz", "DMZ����", "DMZ Host"),
		EB_LANG_ADD("dmzdesc", 
				"����������£�NAT·�����ǽ�ֹ������ֱ�ӷ��ʾ�������ļ�����ġ����ǣ���Щʱ����������Ҫ���������ڵ�ĳ̨��������Ÿ�����������ʵ��˫��ͨ�ţ���ʱֻҪ�Ѹü��������ΪDMZ�����Ϳ���ʵ���ˡ�", 
				"You can configure the static route in this page"),
		EB_LANG_ADD("dmznote", 
				"( ע��:����DMZ����֮�����IP��صķ���ǽ���ý��������á�)", 
				"( Notice: After setup DMZ, firewall will be affet for this IP.)"),
		EB_LANG_ADD("dmzip", "DMZ����IP��ַ", "DMZ host IP"),
  	
	/* upnp */
		EB_LANG_ADD("upnp", "UPnP����", "UPnP Setting"),
		EB_LANG_ADD("upnpdesc", 
				"��ҳ����/��ʾUPnP�������Լ�����״̬��", 
				"You can configure the UPnP in this page"),
		EB_LANG_ADD("upnpstat", "��ǰUPnP״̬��", "UPnP STATUS"),
		EB_LANG_ADD("upnplist", "��ǰUPnP�����б�", "Current UPnP List"),
		EB_LANG_ADD("appdesc", "Ӧ������", "APP Desc"),
		EB_LANG_ADD("externport", "�ⲿ�˿�", "Extern Port"),
		EB_LANG_ADD("protocoltype", "Э������", "protocol type"),
		EB_LANG_ADD("internalport", "�ڲ��˿�", "internal port"),
		EB_LANG_ADD("delall", "ɾ������", "Delete All"),
	
	/* special app */
		EB_LANG_ADD("limitports", "ֻ������5�����Ŷ˿ںŶΣ�", "You can input at most 5 port"),
		EB_LANG_ADD("inputtrigerport", "�����봥���˿ںţ�", "Please input triger port"),
		EB_LANG_ADD("inputport", "�����뿪�Ŷ˿ںţ�", "Please input open port"),
		EB_LANG_ADD("illegalinput", 
				"�˿������к��зǷ��ַ������������룡", 
				"Include illegal character, please input again"),
		EB_LANG_ADD("spapp", "����Ӧ�ó���", "UPnP STATUS"),
		EB_LANG_ADD("spdesc", 
				"ĳЩ�����Ӧ�ã�������Ƶ���飬Internet��Ϸ������绰�ȣ������޷��ڼ򵥵�NAT·�������������������ǣ�ͨ����ҳ����ȷ����֮�󣬾Ϳ����ֲ����ϵ���Щȱ����ʹ����ЩӦ���ܹ�����������", 
				"For some special application, such as video conference, internet game, ...."),
		EB_LANG_ADD("trigerport", "�����˿�", "Triger Port"),
		EB_LANG_ADD("trigerprotocol", "����Э��", "Triger Protocol"),
		EB_LANG_ADD("openport", "���Ŷ˿�", "Open Port"),
		EB_LANG_ADD("openprotocol", "����Э��", "Open Protocol"),
		EB_LANG_ADD("genaralapp", "����Ӧ�ó���", "General Application"),
		EB_LANG_ADD("fillto", "��յ�", "Fill to"),
	
	/* special app */
		EB_LANG_ADD("noport", "�˿ںŲ���Ϊ�ջ�Ϊ��!", "Protocol port can not be blank or zero!"),
		EB_LANG_ADD("porterr", "�˿ںź��зǷ��ַ������������룡", "Port include illegal character, please input again"),
		EB_LANG_ADD("iperr", "IP��ַ�������������룡", "IP include illegal character, please input again"),
		EB_LANG_ADD("virtualserver", "���������", "UPnP STATUS"),
		EB_LANG_ADD("vsdesc", 
				"������������򵥵�˵������������ô����ָ������·�����κ�һ����һ��Э��˿ڵķ��ʣ���WAN�ڽ����ķ��ʣ����������ض�λ����������ĳһָ̨���������������", 
				"Virtual Server, in one words, it can hep you map a range of protocol port (from WAN) to a specifical host in LAN."),
		EB_LANG_ADD("serviceport", "����˿�", "Service Port"),
	
		EB_LANG_ADD(NULL, NULL, NULL)
	};
