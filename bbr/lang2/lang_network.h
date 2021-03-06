
/* basic */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {

		EB_LANG_ADD("lanconfirm", 
				"LAN口IP地址的更改将导致路由器的重新启动，确定？", 	
				"LAN port IP changed, restart router now?"),
		EB_LANG_ADD("lansetting", 
				"LAN口设置", 	
				"LAN Por Setting"),
				
		EB_LANG_ADD("basiclan", 			
				"本页设置路由器LAN口的基本网络参数。", 	
				"Set the basic network configure for wan port in this page"),
		EB_LANG_ADD("note", 			
				"注意：当LAN口IP参数（包括IP地址、子网掩码）发生变更时，为确保DHCP server能够正常工作，应保证DHCP server中设置的地址池、静态地址与新的LAN口IP是处于同一网段的，并请重启路由器。", 	
				"NOTE: To make router work well, while LAN port changed, ..."),
		EB_LANG_ADD("dip", 			
				"动态IP", 	
				"Dynamic IP"),
		EB_LANG_ADD("sip", 			
				"静态IP", 	
				"Static IP"),
		EB_LANG_ADD("account", 			
				"上网账号", 	
				"Account"),
		EB_LANG_ADD("pswd", 			
				"上网口令：", 	
				"Password"),

		
		EB_LANG_ADD("wansetting", 
				"WAN口设置", 	
				"WAN Por Setting"),
		EB_LANG_ADD("basicwan", 			
				"本页设置路由器WAN口的基本网络参数。", 	
				"Set the basic network configure for wan port in this page"),
		EB_LANG_ADD("wctype", 			
				"WAN口连接类型", 	
				"WAN Connect type"),
		EB_LANG_ADD("dip", 			
				"动态IP", 	
				"Dynamic IP"),
		EB_LANG_ADD("sip", 			
				"静态IP", 	
				"Static IP"),
		EB_LANG_ADD("account", 			
				"上网账号", 	
				"Account"),
		EB_LANG_ADD("pswd", 			
				"上网口令：", 	
				"Password"),
		EB_LANG_ADD("connect_mode", 			
				"根据您的需要，请选择对应连接模式", 	
				"Choose connect mode by you need"),
		EB_LANG_ADD("connect_by_need", 			
				"按需连接，在有访问数据时自动进行连接。", 	
				"Connect by need, auto connect while detect data access"),
		EB_LANG_ADD("desc_wait", 			
				"自动断线等待时间", 	
				"The time wait before auto disconnect"),
		EB_LANG_ADD("seconds", 			
				"分钟 （0表示不自动断线）", 	
				"Second (0 means don't auto disconnect"),
		EB_LANG_ADD("auto_connect", 			
				"自动连接，在开机和断线后自动进行连接。", 	
				"Auto connect while disconnect or host start up"),
		EB_LANG_ADD("manual_connect", 			
				"手动连接，由用户手动进行连接。", 	
				"Menual connect by user"),
		EB_LANG_ADD("auto_dis_wait", 			
				"自动断线等待时间：", 	
				"The time auto disconnect while no data access"),
		EB_LANG_ADD("advance", 			
				"高级设置", 	
				"Advance"),
				
		EB_LANG_ADD("time_input_err", 			
				"时间输入错误，请重新输入（0－99）！", 	
				"Time input error, retry once(0-99)"),

		/* setting for "Mac Clone" */
		EB_LANG_ADD("mac_clone", 			
				"MAC地址克隆", 	
				"MAC Clone"),
				
		EB_LANG_ADD("set_mac", 			
				"本页设置路由器对广域网的MAC地址。", 	
				"Setting router MAC Address for WAN."),
  	
		EB_LANG_ADD("restore_mac", 			
				"恢复出厂MAC", 	
				"Restore MAC"),
  	
		EB_LANG_ADD("cur_mac", 			
				"当前管理PC的MAC地址", 	
				"Current PC MAC"),
  	
		EB_LANG_ADD("clone_mac", 			
				"克隆MAC地址", 	
				"Clone MAC"),
  	
		EB_LANG_ADD("notice", 			
				"注意：只有局域网中的计算机能使用“克隆MAC地址”功能。", 	
				"Setting router MAC Address for WAN."),
  	
		/* setting for "PPPoE Advance Setting" */
		EB_LANG_ADD("pppoe", 			
				"PPPoE 高级设置", 	
				"PPPoE Advance Setting"),
				
		EB_LANG_ADD("mtu", 			
				"数据包MTU", 	
				"MTU"),
				
		EB_LANG_ADD("mtu_note", 			
				"缺省值为1492，如非必要，请勿更改", 	
				"Default is 1492, modify carefully!"),
  	
		EB_LANG_ADD("sev_name", 			
				"服务名", 	
				"Service name"),
  	
		EB_LANG_ADD("sevname_note", 			
				"即Service Name。如非必要，请勿填写", 	
				"Modify it carefully!"),
  	
		EB_LANG_ADD("ac_name", 			
				"服务器名称", 	
				"AC Name"),
  	
		EB_LANG_ADD("ac_note", 			
				"即AC Name。如非必要，请勿填写", 	
				"Modify it carefully!"),
  	
		EB_LANG_ADD("des_ip", 			
				"使用ISP指定IP地址", 	
				"Using IP address ISP assigned"),
  	
		EB_LANG_ADD("isp_ip", 			
				"ISP指定的IP地址", 	
				"IP ISP assigned"),
  	
		EB_LANG_ADD("int_time", 			
				"在线检测时间间隔", 	
				"Checking interval on line"),
  	
		EB_LANG_ADD("int_time_note", 			
				"0～120，0 表示不发送", 	
				"0～120，0 means don't send"),
  	
		EB_LANG_ADD("man_dns", 			
				"手动设置DNS服务器", 	
				"Setting DNS service manually"),
  	
		EB_LANG_ADD("bk_dns", 			
				"备用DNS服务器", 	
				"Backup DNS service"),
  	
		EB_LANG_ADD("err_time", 			
				"时间输入错误，请重新输入（0－120）！", 	
				"Time setting error, please input again (0 - 120)!"),
  	
		EB_LANG_ADD("err_mtu", 			
				"数据包的MTU值已超出范围，请重新输入(576 - 1492)！", 	
				"MTU out of range, please input again (576 - 1492)!"),
			
		EB_LANG_ADD(NULL, NULL, NULL)
	};
