
/* security */
	EB_MULTI_LANG_BEGIN(security, NULL) {
	/* firewall */
		EB_LANG_ADD("firewallsetting", "����ǽ����", "Firewall Setting", "�ե����������`����O��"),
		EB_LANG_ADD("filterdesc", 
				"��ҳ�Է���ǽ�ĸ������˹��ܵĿ�����رս������á�ֻ�з���ǽ���ܿ����ǿ�����ʱ�򣬺����ġ�IP��ַ���ˡ������������ˡ�����MAC��ַ���ˡ�����WAN��Ping�����ܹ���Ч����֮����ʧЧ��",
				"You can setting firewall fiter in this page, ...", 
				"�ک`���ϥե����������`��Τ����줾��˙C�ܤΤ�V�^�����_�����]�i����ˌ������O�ä��Ф��������ե����������`������_�]�����_���Τʕr����A��IP���ɥ쥹�ΞV�^�������ɥᥤ�����ΞV�^������MACס�����V�^���롱����WAN��Ping���Ϥ�äȰk�����뤳�Ȥ��Ǥ��ơ�����˷����ơ�������ʧ����"),
		EB_LANG_ADD("enablefirewall", 
				"��������ǽ������ǽ���ܿ��أ�", 
				"Enable Firewall", "�ե����������`����_�����ե����������`������_�]����"),
		EB_LANG_ADD("enableipfilter", "����IP��ַ����", "Enable IP filter", "IP���ɥ쥹�ΞV�^���_��"),
		EB_LANG_ADD("defrule", "ȱʡ���˹���", "Default Rule", "ʡ��Ƿ����Ҏ�t��V�^����"),
		EB_LANG_ADD("forwarding", 
				"���ǲ���������IP��ַ���˹�������ݰ���<FONT color=#ff0000>����</FONT>ͨ����·����", 
				"Forwarding</FONT> all packes NOT mached with IP address filter.", 
				"���٤Ƥ��Ǥ�IP���ɥ쥹���O����Ҏ�t�������ǩ`���ΥХå���V�^���뤳�Ȥ˺Ϥ�ʤ��ǡ�<FONT color=#ff0000></FONT>������`����ͨ�����Ȥ��S��"),
		EB_LANG_ADD("discard", 
				"���ǲ���������IP��ַ���˹�������ݰ���<FONT color=#ff0000>��ֹ</FONT>ͨ����·����", 
				"Discard</FONT> all packes NOT mached with IP address filter.", 
				"���٤Ƥ��Ǥ�IP���ɥ쥹���O����Ҏ�t�������ǩ`���ΥХå���V�^���뤳�Ȥ˺Ϥ�ʤ��ǡ�<FONT color=#ff0000></FONT>������`����ͨ�����Ȥ��ֹ����"),
		EB_LANG_ADD("enabledsnfilter", "������������", "Enable DSN filter", "�ɥᥤ�����ΞV�^���_��"),
		EB_LANG_ADD("enablemacfilter", "����MAC��ַ����", "Enable MAC filter", "MACס���ΞV�^���_��"),
		EB_LANG_ADD("forbiddenmac", 
				"������</FONT>����MAC��ַ�б��������õ�MAC��ַ����Internet", 
				"Only Allow</FONT> enabled in MAC list to access Internet", 
				"</FONT>�����Ǥ�MACס���Υꥹ�Ȥ��ФǤ��Ǥ�ʹ�ä�ʼ�᤿MACס�����O����Internet���L������������S��"),
		EB_LANG_ADD("allowother", 
				"��ֹ</FONT>����MAC��ַ�б��������õ�MAC��ַ����Internet����������MAC��ַ����", 
				"Forbidden</FONT> enabled in MAC list to access Internet, allow others", 
				"</FONT>�����Ǥ�MACס���Υꥹ�Ȥ��ФǤ��Ǥ�ʹ�ä�ʼ�᤿MACס�����O����Internet���L�����뤳�Ȥ��ֹ���ơ���������MACס�����L�����S��"),

	/* ping */
		EB_LANG_ADD("wanping", "WAN��Ping", "WAN Port Ping", "WAN��Ping"),
		EB_LANG_ADD("discardping", "��������WAN�ڵ�Ping��", 
				"Disable WAN port ping", "WAN�ڤ����Ping��Ҋ��Ȥ���"),

	/* webmanage */
		EB_LANG_ADD("promptreboot", 
				"ע�⣺ֻ����������·������WEB�����˿ڵĸ��Ĳ�����Ч��", 
				"Notice: This web management configration will avaiable after you restart router.", 
				"ע�⣺���ʤ�����`���������Ӥ�����Ǥ������äơ�WEB�ϥݩ`�ȤΤ�������Ɖ�����Ƥ褦�䤯�k�����뤳�Ȥ��Ǥ��룡"),
		EB_LANG_ADD("remotemanage", "Զ��WEB����", "Remote Web management", "�h��WEB����"),

		EB_LANG_ADD("rmdesc", 
				"��ҳ����·������WEB�����˿ڣ�ͬʱҲ���������ӹ�������ִ��Զ��WEB�����ļ������IP��ַ��", 
				"You can configure the web mangement port in this page, ...", 
				"��`�����O����WEB�ϥݩ`�Ȥ�������ơ�ͬ�r�ˤ��O���Ǝ���W���Ф����h��WEB�����Υ���ԥ�`����IP���ɥ쥹��g�Ф��뤳�Ȥ��S����"),
		EB_LANG_ADD("notice", "ע��:", "Notice:", "ע��"),
		EB_LANG_ADD("notice1", 
				"1����·����Ĭ�ϵ�WEB�����˿�Ϊ80��������ı��˸�Ĭ��ֵ�������Ϊ8080�������������á�IP��ַ:�˿ڡ��ķ�ʽ������http://192.168.1.1:8080���ſ��Ե�¼·����ִ��WEB����������������Ҫ����·����֮�������Ч��", 
				"1. The default remote-mangemnt port is 80, ...", 
				"1������`�����a�J����WEB���ݩ`�Ȥ��������Τ�80�ǡ��⤷���ʤ��Ϥ��Υǥե���ȣ�������8080�ˉ䤨�룩��䤨���Τʤ�С����ʤ��ϱؤ�����IP���ɥ쥹��ʹ��ʤ���Фʤ�ʤ�:�ݩ`�ȤΡ��η�ʽ��������http://192.168.1.1:8080���Ϥ�äȥ�`������h����WEB���󥿩`�ե��`���ι�����g�Ф��뤳�Ȥ��Ǥ��롣���ΙC�ܤϥ�`���������Ӥ��Ƥ�����褦�䤯�k�����뤳�Ȥ��Ǥ��ʤ���Фʤ�ʤ���"),
		EB_LANG_ADD("notice2", 
				"2����·����Ĭ�ϵ�Զ��WEB����IP��ַΪ0.0.0.0���ڴ�Ĭ��״̬�£����Թ��������κ�һ̨����������ܵ�¼·����ִ��Զ��WEB������������ı���Ĭ�ϵ�Զ��WEB����IP��ַ�������Ϊ61.88.88.88������ô��������ֻ�о��и�ָ��IP��ַ������61.88.88.88���ļ�������ܵ�¼·����ִ��Զ��WEB�����������Զ��WEB����IP��ַ��Ϊ255.255.255.255����ô�������������еļ���������Ե�¼·����ִ��Զ��WEB������", 
				"2. The default remote-mangemnt IP is 0.0.0.0, ...", 
				"2������`�����a�J�����h��WEB��IP���ɥ쥹���������Τ�0.0.0.0�ǡ�����״�B���a�J�����¤ˡ�����W����Τ����ʤ�1̨�Υ���ԥ�`���Ϥ��٤ƥ�`������h�����h��WEB������g�Ф��뤳�Ȥ��Ǥ��ʤ��ơ��⤷���ʤ����a�J�����h��WEB��䤨��IP���ɥ쥹��������61.88.88.88�ˉ䤨�룩���������ʤ�С�����Ǥώ���W���ФǤ����֤ä�IP���ɥ쥹��������61.88.88.88���Υ���ԥ�`�����褦�䤯��`������h�����h��WEB������g�Ф��뤳�Ȥ��Ǥ��뤳�Ȥ�ָ������٤������⤷�h��WEB��IP���ɥ쥹�˹�������255.255.255.255���O������ʤ�С�����Ǥϡ�����W���ФǤ��٤ƤΥ���ԥ�`���Ϥ��٤ƥ�`������h�����h��WEB������g�Ф��뤳�Ȥ��Ǥ��롣"),
		EB_LANG_ADD("webport", "WEB�����˿ڣ�", "WAN manage port:", "WEB�ϥݩ`�Ȥ�������룺"),
		EB_LANG_ADD("webip", "Զ��WEB����IP��ַ��", "Remote Web management IP:", "�h��WEB��IP���ɥ쥹��������룺"),

	/* webmanage */
		EB_LANG_ADD("sureremove", "��ȷ��Ҫɾ����ǰ���е���Ŀ��", 
				"Remove all items, are you sure?", "���ʤ��ϵ���Τ��٤Ƥ���Ŀ���������뤳�Ȥ�_�J���뤫��"),
		EB_LANG_ADD("macfilter", "MAC��ַ����", "MAC filter", "MACס���ϞV�^����"),
		EB_LANG_ADD("macfitlerdesc", 
				"��ҳͨ��MAC��ַ���������ƾ������м�����Թ������ķ��ʡ�", 
				"You can setting MAC filter in this page.", 
				"�ک`����MACס����ͨ����(ͨ�ä�)�V�^����LAN���Фǥ���ԥ�`���Ύ���W�ˌ������L�����������ˤ��롣"),
		EB_LANG_ADD("otherfilter", 
				"����ǽ������ã�������ģ��뵽����ȫ���á���������ǽ���á���", 
				"Reference Fireware setting.", 
				"�ե����������`����v�B���Ƥ����O���루�⤷������ʤ�Фʤ���Фʤ�ʤ�������ȫ���O�á������ե����������`����O�á����Ф���"),
		EB_LANG_ADD("firewallstat", "����ǽ���ܣ�", "Firewall Status", "�ե����������`��ΙC�ܣ�"),
		EB_LANG_ADD("macstat", "MAC��ַ���˹��ܣ�", "MAC Filter Status", "MACס���ϙC�ܤ�V�^���룺"),
		EB_LANG_ADD("defrule", "ȱʡ���˹���", "Default Filter Rule", "ȱʡ���˹���"),
		EB_LANG_ADD("desc", "�� ��", "Description", "���"),
		EB_LANG_ADD("stat", "״ ̬", "Status", "״�B"),
		EB_LANG_ADD("modify", "�� ��", "Modify", "����"),
		EB_LANG_ADD("additem", "��������Ŀ", "Add New", "�¤�����Ŀ�����Ӥ���"),
		EB_LANG_ADD("allenable", "ʹ������Ŀ��Ч", "Enable All", "���٤Ƥ���Ŀ��k��������"),
		EB_LANG_ADD("alldisable", "ʹ������ĿʧЧ", "Disable All", "ʹ������ĿʧЧ"),
		EB_LANG_ADD("removeall", "ɾ��������Ŀ", "Remove all", "���٤Ƥ���Ŀ����������"),

	/* domainfilter */
		EB_LANG_ADD("dmfilter", "��������", "Domain filter", "�ɥᥤ�����ΞV�^"),
		EB_LANG_ADD("dmfitlerdesc", 
				"��ҳͨ���������������ƾ������м������ָ���Ĺ�������վ�ķ��ʡ�", 
				"You can setting domain filter in this page.", 
				"�ک`���ϥɥᥤ������ͨ����(ͨ�ä�)�V�^����LAN���Ф�ָ���������W�Υ����֥����Ȥ��L���ˌ����ƥ���ԥ�`�������ޤ��ˤ��롣"),
		EB_LANG_ADD("dmfilterstat", "�������˹��ܣ�", "MAC Filter Status", "�ɥᥤ�����ϙC�ܤ�V�^���룺"),
		EB_LANG_ADD("domain", "�� ��", "Firewall Status", "�ɥᥤ����"),
		EB_LANG_ADD("effective", "��Ч", "Effective", "�k������"),

  	
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};