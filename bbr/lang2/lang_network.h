
/* basic */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {

		EB_LANG_ADD("lanconfirm", 
				"LAN��IP��ַ�ĸ��Ľ�����·����������������ȷ����", 	
				"LAN port IP changed, restart router now?"),
		EB_LANG_ADD("lansetting", 
				"LAN������", 	
				"LAN Por Setting"),
				
		EB_LANG_ADD("basiclan", 			
				"��ҳ����·����LAN�ڵĻ������������", 	
				"Set the basic network configure for wan port in this page"),
		EB_LANG_ADD("note", 			
				"ע�⣺��LAN��IP����������IP��ַ���������룩�������ʱ��Ϊȷ��DHCP server�ܹ�����������Ӧ��֤DHCP server�����õĵ�ַ�ء���̬��ַ���µ�LAN��IP�Ǵ���ͬһ���εģ���������·������", 	
				"NOTE: To make router work well, while LAN port changed, ..."),
		EB_LANG_ADD("dip", 			
				"��̬IP", 	
				"Dynamic IP"),
		EB_LANG_ADD("sip", 			
				"��̬IP", 	
				"Static IP"),
		EB_LANG_ADD("account", 			
				"�����˺�", 	
				"Account"),
		EB_LANG_ADD("pswd", 			
				"�������", 	
				"Password"),

		
		EB_LANG_ADD("wansetting", 
				"WAN������", 	
				"WAN Por Setting"),
		EB_LANG_ADD("basicwan", 			
				"��ҳ����·����WAN�ڵĻ������������", 	
				"Set the basic network configure for wan port in this page"),
		EB_LANG_ADD("wctype", 			
				"WAN����������", 	
				"WAN Connect type"),
		EB_LANG_ADD("dip", 			
				"��̬IP", 	
				"Dynamic IP"),
		EB_LANG_ADD("sip", 			
				"��̬IP", 	
				"Static IP"),
		EB_LANG_ADD("account", 			
				"�����˺�", 	
				"Account"),
		EB_LANG_ADD("pswd", 			
				"�������", 	
				"Password"),
		EB_LANG_ADD("connect_mode", 			
				"����������Ҫ����ѡ���Ӧ����ģʽ", 	
				"Choose connect mode by you need"),
		EB_LANG_ADD("connect_by_need", 			
				"�������ӣ����з�������ʱ�Զ��������ӡ�", 	
				"Connect by need, auto connect while detect data access"),
		EB_LANG_ADD("desc_wait", 			
				"�Զ����ߵȴ�ʱ��", 	
				"The time wait before auto disconnect"),
		EB_LANG_ADD("seconds", 			
				"���� ��0��ʾ���Զ����ߣ�", 	
				"Second (0 means don't auto disconnect"),
		EB_LANG_ADD("auto_connect", 			
				"�Զ����ӣ��ڿ����Ͷ��ߺ��Զ��������ӡ�", 	
				"Auto connect while disconnect or host start up"),
		EB_LANG_ADD("manual_connect", 			
				"�ֶ����ӣ����û��ֶ��������ӡ�", 	
				"Menual connect by user"),
		EB_LANG_ADD("auto_dis_wait", 			
				"�Զ����ߵȴ�ʱ�䣺", 	
				"The time auto disconnect while no data access"),
		EB_LANG_ADD("advance", 			
				"�߼�����", 	
				"Advance"),
				
		EB_LANG_ADD("time_input_err", 			
				"ʱ������������������루0��99����", 	
				"Time input error, retry once(0-99)"),

		/* setting for "Mac Clone" */
		EB_LANG_ADD("mac_clone", 			
				"MAC��ַ��¡", 	
				"MAC Clone"),
				
		EB_LANG_ADD("set_mac", 			
				"��ҳ����·�����Թ�������MAC��ַ��", 	
				"Setting router MAC Address for WAN."),
  	
		EB_LANG_ADD("restore_mac", 			
				"�ָ�����MAC", 	
				"Restore MAC"),
  	
		EB_LANG_ADD("cur_mac", 			
				"��ǰ����PC��MAC��ַ", 	
				"Current PC MAC"),
  	
		EB_LANG_ADD("clone_mac", 			
				"��¡MAC��ַ", 	
				"Clone MAC"),
  	
		EB_LANG_ADD("notice", 			
				"ע�⣺ֻ�о������еļ������ʹ�á���¡MAC��ַ�����ܡ�", 	
				"Setting router MAC Address for WAN."),
  	
		/* setting for "PPPoE Advance Setting" */
		EB_LANG_ADD("pppoe", 			
				"PPPoE �߼�����", 	
				"PPPoE Advance Setting"),
				
		EB_LANG_ADD("mtu", 			
				"���ݰ�MTU", 	
				"MTU"),
				
		EB_LANG_ADD("mtu_note", 			
				"ȱʡֵΪ1492����Ǳ�Ҫ���������", 	
				"Default is 1492, modify carefully!"),
  	
		EB_LANG_ADD("sev_name", 			
				"������", 	
				"Service name"),
  	
		EB_LANG_ADD("sevname_note", 			
				"��Service Name����Ǳ�Ҫ��������д", 	
				"Modify it carefully!"),
  	
		EB_LANG_ADD("ac_name", 			
				"����������", 	
				"AC Name"),
  	
		EB_LANG_ADD("ac_note", 			
				"��AC Name����Ǳ�Ҫ��������д", 	
				"Modify it carefully!"),
  	
		EB_LANG_ADD("des_ip", 			
				"ʹ��ISPָ��IP��ַ", 	
				"Using IP address ISP assigned"),
  	
		EB_LANG_ADD("isp_ip", 			
				"ISPָ����IP��ַ", 	
				"IP ISP assigned"),
  	
		EB_LANG_ADD("int_time", 			
				"���߼��ʱ����", 	
				"Checking interval on line"),
  	
		EB_LANG_ADD("int_time_note", 			
				"0��120��0 ��ʾ������", 	
				"0��120��0 means don't send"),
  	
		EB_LANG_ADD("man_dns", 			
				"�ֶ�����DNS������", 	
				"Setting DNS service manually"),
  	
		EB_LANG_ADD("bk_dns", 			
				"����DNS������", 	
				"Backup DNS service"),
  	
		EB_LANG_ADD("err_time", 			
				"ʱ������������������루0��120����", 	
				"Time setting error, please input again (0 - 120)!"),
  	
		EB_LANG_ADD("err_mtu", 			
				"���ݰ���MTUֵ�ѳ�����Χ������������(576 - 1492)��", 	
				"MTU out of range, please input again (576 - 1492)!"),
			
		EB_LANG_ADD(NULL, NULL, NULL)
	};
