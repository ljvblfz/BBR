
/* dhcp */
	EB_MULTI_LANG_BEGIN(dhcp, NULL) {

		/* setting for dhcp server */
		EB_LANG_ADD("dhcp", 
				"DHCP����", 	
				"DHCP service", "���`�ӥ�"),
				
		EB_LANG_ADD("service_note", 
				"��·�����ڽ���DHCP�������������������������Զ��֣��Ϳ����Զ�����������и��ӵ�TCP/IPЭ�����������ȷ��", 	
				"The router has DHCP service inside,it can config the complex TCP/IP parameters automatically.", 
				"����`���ڤ����Ƥ�DHCP���`�Щ`�����äơ����줬���äơ����ʤ���ʹ��ʤ����Ԥ����֤��ơ��Ԥ餢�ʤ��Υ���ԥ�`�����Ф��}�j��TCP/IP����Υѥ��`���`�����ä��뤳�Ȥ��Ǥ���Τ���������"),
				
		EB_LANG_ADD("dhcp_serv", 			
				"DHCP������", 	
				"DHCP Server", "DHCP���`�Щ`"),
				
		EB_LANG_ADD("not_use", 			
				"������", 	
				"Not use", "ʹ�ä�ʼ��ʤ�"),
				
		EB_LANG_ADD("use", 			
				"����", 	
				"Use", "ʹ�ä�ʼ���"),
				
		EB_LANG_ADD("start_ip", 			
				"��ַ�ؿ�ʼ��ַ", 	
				"Start IP", "ס���γؤ�ס����ʼ���"),
				
		EB_LANG_ADD("end_ip", 			
				"��ַ�ؽ�����ַ", 	
				"End IP", "ס���γؤ�ס����K����"),
				
		EB_LANG_ADD("lease", 			
				"��ַ����", 	
				"Lease", "ס�����U�����g"),
		
		EB_LANG_ADD("lease_note", 			
				"����(1��2880���ӣ�ȱʡΪ120����)", 	
				"minute (1 - 2880, default is 120 minutes)", 
				"��(1��2880�֡�120�֤Τ���ʡ��Ƿ����)"),
		
		EB_LANG_ADD("dns", 
				"ȱʡ����", 	
				"Default Domain", "Ƿ���ƥɥᥤ������ʡ��"),
				
		EB_LANG_ADD("main_dns", 			
				"��DNS������", 	
				"Main DNS service", "����DNS���`�Щ`"),
				
		EB_LANG_ADD("backup_dns", 			
				"����DNS������", 	
				"Backup DNS service", "���DNS���`�Щ`"),
		
		/* setting for "dhcp client" */		
		EB_LANG_ADD("client_list", 			
				"�ͻ����б�", 	
				"Client List", "���饤����ȤΥꥹ��"),
				
		EB_LANG_ADD("client_note", 			
				"��ҳ�о���·���������Ժ��Ѿ�����ʹ�õ�IP��ַ��", 	
				"There list IP address assigned after router started.", 
				"�ک`������`���Υ����`�Ȥ��В�������ˤ��Ǥ�ʹ��IP���ɥ쥹���굱�Ƥ���"),
				
		EB_LANG_ADD("index", 			
				"�� ��", 	
				"Index", "����"),
				
		EB_LANG_ADD("host", 			
				"�ͻ���������", 	
				"Client Host name", "���饤����ȤΥۥ��ȥ���ԥ�`����"),
				
		EB_LANG_ADD("cli_mac", 			
				"�ͻ���MAC��ַ", 	
				"Client MAC address", "���饤�����MACס��"),
				
		EB_LANG_ADD("ass_ip", 			
				"�ѷ���IP��ַ", 	
				"Assigned IP", "���Ǥ�IP���ɥ쥹���굱�Ƥ�"),
				
		EB_LANG_ADD("rest_lease", 			
				"ʣ������", 	
				"Rest lease", "�U�����g�����"),
		
		/* setting for "dhcp static address assigned" */		
		EB_LANG_ADD("sta_ip", 			
				"��̬��ַ����", 	
				"Static IP assigning", "���B��ס���ϸ�굱�Ƥ�"),
				
		EB_LANG_ADD("sta_ip_note", 			
				"��ҳ����DHCP�������ľ�̬��ַ���书�ܡ�ͨ������ܣ������Ը��õضԾ������еļ�������й���ͼ�ء�", 	
				"There setting DHCP static IP assigning. You can manage computers in lan more conveniently", 
				"DHCP���`�Щ`���O���뾲�B��ס���ϙC�ܤ��굱�Ƥ롣���ΙC�ܤ�ͨ���ơ����ʤ��Ϥ�ä�����LAN���ФΥ���ԥ�`���ˌ����ƹ����ƱOҕ�����Ƥ��뤳�Ȥ��Ф����Ȥ��Ǥ��롣"),
				
			
		EB_LANG_ADD("input_ip", 			
				"������IP��ַ", 	
				"Please input IP address", 
				"IP���ɥ쥹�����������¤���"),
				
		EB_LANG_ADD("input_mac", 			
				"������MAC��ַ", 	
				"Please input MAC address", "MACס�������������¤���"),
				
		EB_LANG_ADD("input_port", 			
				"������˿ڵ�ַ", 	
				"Please input port number", "�ݩ`�Ȥ�ס�������������¤���"),
				
		EB_LANG_ADD("err_port", 			
				"�˿ڵ�ַ�����������������", 	
				"Port number error, please input again", 
				"�ݩ`�Ȥ�ס�����`����������ơ��٤����������¤���"),
				
		EB_LANG_ADD("err_input", 			
				"�����к��зǷ��ַ�������������", 	
				"Invalid character, please input again", 
				"�������Фǲ����ʥ���饯���`�򺬤�ǡ��٤����������¤���"),
				
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};
