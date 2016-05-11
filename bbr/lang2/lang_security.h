
/* security */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {
	/* firewall */
		EB_LANG_ADD("firewallsetting", "����ǽ����", "Firewall Setting"),
		EB_LANG_ADD("filterdesc", 
				"��ҳ�Է���ǽ�ĸ������˹��ܵĿ�����رս������á�ֻ�з���ǽ���ܿ����ǿ�����ʱ�򣬺����ġ�IP��ַ���ˡ������������ˡ�����MAC��ַ���ˡ�����WAN��Ping�����ܹ���Ч����֮����ʧЧ��",
				"You can setting firewall fiter in this page, ..."),
		EB_LANG_ADD("enablefirewall", "��������ǽ������ǽ���ܿ��أ�", "Enable Firewall"),
		EB_LANG_ADD("enableipfilter", "����IP��ַ����", "Enable IP filter"),
		EB_LANG_ADD("defrule", "ȱʡ���˹���", "Default Rule"),
		EB_LANG_ADD("forwarding", 
				"���ǲ���������IP��ַ���˹�������ݰ���<FONT color=#ff0000>����</FONT>ͨ����·����", 
				"Forwarding</FONT> all packes NOT mached with IP address filter."),
		EB_LANG_ADD("discard", 
				"���ǲ���������IP��ַ���˹�������ݰ���<FONT color=#ff0000>��ֹ</FONT>ͨ����·����", 
				"Discard</FONT> all packes NOT mached with IP address filter."),
		EB_LANG_ADD("enabledsnfilter", "������������", "Enable DSN filter"),
		EB_LANG_ADD("enablemacfilter", "����MAC��ַ����", "Enable MAC filter"),
		EB_LANG_ADD("forbiddenmac", 
				"������</FONT>����MAC��ַ�б��������õ�MAC��ַ����Internet", 
				"Only Allow</FONT> enabled in MAC list to access Internet"),
		EB_LANG_ADD("allowother", 
				"��ֹ</FONT>����MAC��ַ�б��������õ�MAC��ַ����Internet����������MAC��ַ����", 
				"Forbidden</FONT> enabled in MAC list to access Internet, allow others"),

	/* ping */
		EB_LANG_ADD("wanping", "WAN��Ping", "WAN Port Ping"),
		EB_LANG_ADD("discardping", "��������WAN�ڵ�Ping��", "Disable WAN port ping"),

	/* webmanage */
		EB_LANG_ADD("promptreboot", 
				"ע�⣺ֻ����������·������WEB����˿ڵĸ��Ĳ�����Ч��", 
				"Notice: This web management configration will avaiable after you restart router."),
		EB_LANG_ADD("remotemanage", "Զ��WEB����", "Remote Web management"),

		EB_LANG_ADD("rmdesc", 
				"��ҳ����·������WEB����˿ڣ�ͬʱҲ��������ӹ�������ִ��Զ��WEB����ļ������IP��ַ��", 
				"You can configure the web mangement port in this page, ..."),
		EB_LANG_ADD("notice", "ע��:", "Notice:"),
		EB_LANG_ADD("notice1", 
				"1����·����Ĭ�ϵ�WEB����˿�Ϊ80��������ı��˸�Ĭ��ֵ�������Ϊ8080�������������á�IP��ַ:�˿ڡ��ķ�ʽ������http://192.168.1.1:8080���ſ��Ե�¼·����ִ��WEB��������������Ҫ����·����֮�������Ч��", 
				"1. The default remote-mangemnt port is 80, ..."),
		EB_LANG_ADD("notice2", 
				"2����·����Ĭ�ϵ�Զ��WEB����IP��ַΪ0.0.0.0���ڴ�Ĭ��״̬�£����Թ��������κ�һ̨����������ܵ�¼·����ִ��Զ��WEB����������ı���Ĭ�ϵ�Զ��WEB����IP��ַ�������Ϊ61.88.88.88������ô��������ֻ�о��и�ָ��IP��ַ������61.88.88.88���ļ�������ܵ�¼·����ִ��Զ��WEB���������Զ��WEB����IP��ַ��Ϊ255.255.255.255����ô�������������еļ���������Ե�¼·����ִ��Զ��WEB����", 
				"2. The default remote-mangemnt IP is 0.0.0.0, ..."),
		EB_LANG_ADD("webport", "WEB����˿ڣ�", "WAN manage port:"),
		EB_LANG_ADD("webip", "Զ��WEB����IP��ַ��", "Remote Web management IP:"),

	/* webmanage */
		EB_LANG_ADD("sureremove", "��ȷ��Ҫɾ����ǰ���е���Ŀ��", "Remove all items, are you sure?"),
		EB_LANG_ADD("macfilter", "MAC��ַ����", "MAC filter"),
		EB_LANG_ADD("macfitlerdesc", 
				"��ҳͨ��MAC��ַ���������ƾ������м�����Թ������ķ��ʡ�", 
				"You can setting MAC filter in this page."),
		EB_LANG_ADD("otherfilter", 
				"����ǽ������ã�������ģ��뵽����ȫ���á���������ǽ���á���", 
				"Reference Fireware setting."),
		EB_LANG_ADD("firewallstat", "����ǽ���ܣ�", "Firewall Status"),
		EB_LANG_ADD("macstat", "MAC��ַ���˹��ܣ�", "MAC Filter Status"),
		EB_LANG_ADD("defrule", "ȱʡ���˹���", "Default Filter Rule"),
		EB_LANG_ADD("desc", "�� ��", "Description"),
		EB_LANG_ADD("stat", "״ ̬", "Status"),
		EB_LANG_ADD("modify", "�� ��", "Modify"),
		EB_LANG_ADD("additem", "�������Ŀ", "Add New"),
		EB_LANG_ADD("allenable", "ʹ������Ŀ��Ч", "Enable All"),
		EB_LANG_ADD("alldisable", "ʹ������ĿʧЧ", "Disable All"),
		EB_LANG_ADD("removeall", "ɾ��������Ŀ", "Remove all"),

	/* domainfilter */
		EB_LANG_ADD("dmfilter", "��������", "Domain filter"),
		EB_LANG_ADD("dmfitlerdesc", 
				"��ҳͨ���������������ƾ������м������ָ���Ĺ�������վ�ķ��ʡ�", 
				"You can setting domain filter in this page."),
		EB_LANG_ADD("dmfilterstat", "�������˹��ܣ�", "MAC Filter Status"),
		EB_LANG_ADD("domain", "�� ��", "Firewall Status"),
		EB_LANG_ADD("effective", "��Ч", "Effective"),

  	
		EB_LANG_ADD(NULL, NULL, NULL)
	};
