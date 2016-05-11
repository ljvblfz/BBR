
/* basic */
	EB_MULTI_LANG_BEGIN(network, NULL) {

		EB_LANG_ADD("lanconfirm", 
				"LAN��IP��ַ�ĸ��Ľ�����·����������������ȷ����", 	
				"LAN port IP changed, restart router now?", 
				"LAN�ڤ�IP���ɥ쥹�Τω�����ƥ�`�����٤ӤΥ����`�Ȥ��Ф��ơ��_�����뤫��"),
		EB_LANG_ADD("lansetting", 
				"LAN������", 	
				"LAN Por Setting", "LAN�ڤ��O����"),
				
		EB_LANG_ADD("basiclan", 			
				"��ҳ����·����LAN�ڵĻ������������", 	
				"Set the basic network configure for wan port in this page", 
				"��`��LAN�ڤ��O��������Ĥʥͥåȥ�`���Υѥ��`���`��"),
		EB_LANG_ADD("note", 			
				"ע�⣺��LAN��IP����������IP��ַ���������룩�������ʱ��Ϊȷ��DHCP server�ܹ�����������Ӧ��֤DHCP server�����õĵ�ַ�ء���̬��ַ���µ�LAN��IP�Ǵ���ͬһ���εģ���������·������", 	
				"NOTE: To make router work well, while LAN port changed, ...", 
				"ע�⣺LAN��IP�ѥ��`���`��IP���ɥ쥹�����֥ͥåȥޥ����򺬤ࣩ��������k������r��DHCP server�����������¤򤹤뤳�Ȥ��Ǥ��뤳�Ȥ�_�����뤿�ᡢDHCP server���Ф��O�ä�ס���γء����B��ס�����¤���LAN��IP��ͬһ�ΥͥåȤΤΤ�����ΤǤ��뤳�Ȥ��^����٤��ǡ������ƥ�`���������Ӥ��Ƥ�餦"),
		EB_LANG_ADD("dip", 			
				"��̬IP", 	
				"Dynamic IP", "�����ʥߥå�IP"),
		EB_LANG_ADD("sip", 			
				"��̬IP", 	
				"Static IP", "���B��IP"),
		EB_LANG_ADD("account", 			
				"�����˺�", 	
				"Account", "���󥿩`�ͥåȤ����ä��륢�������"),
		EB_LANG_ADD("pswd", 			
				"�������", 	
				"Password", "���󥿩`�ͥåȤ����ä���ѥ���`�ɣ�"),

		
		EB_LANG_ADD("wansetting", 
				"WAN������", 	
				"WAN Por Setting", "WAN�ڤ��O����"),
		EB_LANG_ADD("basicwan", 			
				"��ҳ����·����WAN�ڵĻ������������", 	
				"Set the basic network configure for wan port in this page", 
				"��`��WAN�ڤ��O��������Ĥʥͥåȥ�`���Υѥ��`���`��"),
		EB_LANG_ADD("wctype", 			
				"WAN����������", 	
				"WAN Connect type", "WAN�ڤϥ����פˤĤʤ���"),
		EB_LANG_ADD("connect_mode", 			
				"����������Ҫ����ѡ���Ӧ����ģʽ", 	
				"Choose connect mode by you need", "WAN�ڤϥ����פˤĤʤ���"),
		EB_LANG_ADD("connect_by_need", 			
				"�������ӣ����з�������ʱ�Զ��������ӡ�", 	
				"Connect by need, auto connect while detect data access", 
				"��Ҫ�ˏꤸ�ƤĤʤ��äơ��ǩ`�����L�����뤳�Ȥ�����r�Ԥ�ӾA���Ф���"),
		EB_LANG_ADD("desc_wait", 			
				"�Զ����ߵȴ�ʱ��", 	
				"The time wait before auto disconnect", "�ԄӤ��Ф줿���δ����r�g"),
		EB_LANG_ADD("seconds", 			
				"���� ��0��ʾ���Զ����ߣ�", 	
				"Second (0 means don't auto disconnect", "�� ��0�ԄӤǤʤ��Ф줿������Ƥ���"),
		EB_LANG_ADD("auto_connect", 			
				"�Զ����ӣ��ڿ����Ͷ��ߺ��Զ��������ӡ�", 	
				"Auto connect while disconnect or host start up", 
				"�ԄӤνӾA���Cе�򥹥��`�Ȥ��������Ф줿������Ԥ�ӾA���Ф���"),
		EB_LANG_ADD("manual_connect", 			
				"�ֶ����ӣ����û��ֶ��������ӡ�", 	
				"Menual connect by user", "�քӤνӾA����`���`���քӤ���ӾA���Ф���"),
		EB_LANG_ADD("auto_dis_wait", 			
				"�Զ����ߵȴ�ʱ�䣺", 	
				"The time auto disconnect while no data access", "�ԄӤ��Ф줿���δ����r�g��"),
		EB_LANG_ADD("advance", 			
				"�߼�����", 	
				"Advance", "�߼����O��"),
				
		EB_LANG_ADD("time_input_err", 			
				"ʱ������������������루0��99����", 	
				"Time input error, retry once(0-99)", 
				"�r�g���`����������ơ��٤ӣ�0��99�������������¤�����"),

		/* setting for "Mac Clone" */
		EB_LANG_ADD("mac_clone", 			
				"MAC��ַ��¡", 	
				"MAC Clone", "MACס���ϥ���`�󤹤�"),
				
		EB_LANG_ADD("set_mac", 			
				"��ҳ����·�����Թ�������MAC��ַ��", 	
				"Setting router MAC Address for WAN.", "�ک`���ϥ�`���Ύ���W�ˌ�����MACס�����O���롣"),
  	
		EB_LANG_ADD("restore_mac", 			
				"�ָ�����MAC", 	
				"Restore MAC", "�������ɤ�MAC�؏ͤ���"),
  	
		EB_LANG_ADD("cur_mac", 			
				"��ǰ����PC��MAC��ַ", 	
				"Current PC MAC", "����PC��MACס���������"),
  	
		EB_LANG_ADD("clone_mac", 			
				"��¡MAC��ַ", 	
				"Clone MAC", "MACס���򥯥�`�󤹤�"),
  	
		EB_LANG_ADD("notice", 			
				"ע�⣺ֻ�о������еļ������ʹ�á���¡MAC��ַ�����ܡ�", 	
				"Setting router MAC Address for WAN.", 
				"ע�⣺����LAN���Ф�Ӌ��ΙC�ܤ���MACס���򥯥�`�󤹤롱�ΙC�ܤ�ʹ����"),
  	
		/* setting for "PPPoE Advance Setting" */
		EB_LANG_ADD("pppoe", 			
				"PPPoE �߼�����", 	
				"PPPoE Advance Setting", "�߼����O��"),
				
		EB_LANG_ADD("mtu", 			
				"���ݰ�MTU", 	
				"MTU", "�ǩ`����MTU�����"),
				
		EB_LANG_ADD("mtu_note", 			
				"ȱʡֵΪ1492����Ǳ�Ҫ���������", 	
				"Default is 1492, modify carefully!", "�ǥե���Ȃ���1492�ǡ���Ҫ�ǤϤʤ��褦����������ʤ��褦����ޤ�"),
  	
		EB_LANG_ADD("sev_name", 			
				"������", 	
				"Service name", "���`�ӥ���"),
  	
		EB_LANG_ADD("sevname_note", 			
				"��Service Name����Ǳ�Ҫ��������д", 	
				"Modify it carefully!", "�Ĥޤ�Service Name����Ҫ�ǤϤʤ��褦���������z�ޤʤ��褦����ޤ�"),
  	
		EB_LANG_ADD("ac_name", 			
				"����������", 	
				"AC Name", "���`�Щ`������"),
  	
		EB_LANG_ADD("ac_note", 			
				"��AC Name����Ǳ�Ҫ��������д", 	
				"Modify it carefully!", "�Ĥޤ�AC Name����Ҫ�ǤϤʤ��褦���������z�ޤʤ��褦����ޤ�"),
  	
		EB_LANG_ADD("des_ip", 			
				"ʹ��ISPָ��IP��ַ", 	
				"Using IP address ISP assigned", "ISP��ʹ�ä�IP���ɥ쥹��ָ������"),
  	
		EB_LANG_ADD("isp_ip", 			
				"ISPָ����IP��ַ", 	
				"IP ISP assigned", "ISP��ָ������IP���ɥ쥹"),
  	
		EB_LANG_ADD("int_time", 			
				"���߼��ʱ����", 	
				"Checking interval on line", "����饤��r�g�g����ʖ�?�y������"),
  	
		EB_LANG_ADD("int_time_note", 			
				"0��120��0 ��ʾ������", 	
				"0��120��0 means don't send", "0��120��0 ��ʾ�ϰk�ͤ��ʤ�"),
  	
		EB_LANG_ADD("man_dns", 			
				"�ֶ�����DNS������", 	
				"Setting DNS service manually", "�քӤ�DNS���`�Щ`���O����"),
  	
		EB_LANG_ADD("bk_dns", 			
				"����DNS������", 	
				"Backup DNS service", "���DNS���`�Щ`"),
  	
		EB_LANG_ADD("err_time", 			
				"ʱ������������������루0��120����", 	
				"Time setting error, please input again (0 - 120)!", 
				"�r�g���`����������ơ��٤ӣ�0��120�������������¤�����"),
  	
		EB_LANG_ADD("err_mtu", 			
				"���ݰ���MTUֵ�ѳ�����Χ������������(576 - 1492)��", 	
				"MTU out of range, please input again (576 - 1492)!", 
				"�ǩ`���ΥХå�MTU���Ϥ��Ǥ˹���򳬤��ơ��٤�(576 - 1492)�����������¤�����"),
			
		EB_LANG_ADD("mtu", 			
				"���ݰ�MTU��", 	
				"MTU:", 
				"MTU:"),
			
		EB_LANG_ADD("defaultmtu", 			
				"��ȱʡֵΪ1500����Ǳ�Ҫ��������ģ�", 	
				"(MTU default is 1500)", 
				"(MTU�ǥե���Ȥ�1500�Ǥ���)"),
			
		EB_LANG_ADD("flagmode", 			
				"������ʽ��ȡIP��һ������²���Ҫѡ��", 	
				"Get IP by unicast(Usually, needn't choose)", 
				"��˥��㥹�Ȥ�IP���֤����Ƥ���������(ͨ�����x�ֱ�Ҫ�Ϥʤ���)"),
			
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};
