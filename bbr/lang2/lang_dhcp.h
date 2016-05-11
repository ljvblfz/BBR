
/* dhcp */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {

		/* setting for dhcp server */
		EB_LANG_ADD("dhcp", 
				"DHCP服务", 	
				"DHCP service"),
				
		EB_LANG_ADD("service_note", 
				"本路由器内建有DHCP服务器，有了它，不用您亲自动手，就可以自动将您计算机中复杂的TCP/IP协议参数配置正确。", 	
				"The router has DHCP service inside,it can config the complex TCP/IP parameters automatically."),
				
		EB_LANG_ADD("dhcp_serv", 			
				"DHCP服务器", 	
				"DHCP Service"),
				
		EB_LANG_ADD("not_use", 			
				"不启用", 	
				"Not use"),
				
		EB_LANG_ADD("use", 			
				"启用", 	
				"Use"),
				
		EB_LANG_ADD("start_ip", 			
				"地址池开始地址", 	
				"Start IP"),
				
		EB_LANG_ADD("end_ip", 			
				"地址池结束地址", 	
				"End IP"),
				
		EB_LANG_ADD("lease", 			
				"地址租期", 	
				"Lease"),
		
		EB_LANG_ADD("lease_note", 			
				"分钟(1～2880分钟，缺省为120分钟)", 	
				"minute (1 - 2880, default is 120 minutes)"),
		
		EB_LANG_ADD("dns", 
				"缺省域名", 	
				"Default DNS"),
				
		EB_LANG_ADD("main_dns", 			
				"主DNS服务器", 	
				"Main DNS service"),
				
		EB_LANG_ADD("backup_dns", 			
				"备用DNS服务器", 	
				"Backup DNS service"),
		
		/* setting for "dhcp client" */		
		EB_LANG_ADD("client_list", 			
				"客户端列表", 	
				"Client List"),
				
		EB_LANG_ADD("client_note", 			
				"本页列举了路由器启动以后已经分配使用的IP地址。", 	
				"There list IP address assigned after router started."),
				
		EB_LANG_ADD("index", 			
				"索 引", 	
				"Index"),
				
		EB_LANG_ADD("host", 			
				"客户端主机名", 	
				"Client Host name"),
				
		EB_LANG_ADD("cli_mac", 			
				"客户端MAC地址", 	
				"Client MAC address"),
				
		EB_LANG_ADD("ass_ip", 			
				"已分配IP地址", 	
				"Assigned IP"),
				
		EB_LANG_ADD("rest_lease", 			
				"剩余租期", 	
				"Rest lease"),
		
		/* setting for "dhcp static address assigned" */		
		EB_LANG_ADD("sta_ip", 			
				"静态地址分配", 	
				"Static IP assigning"),
				
		EB_LANG_ADD("sta_ip_note", 			
				"本页设置DHCP服务器的静态地址分配功能。通过此项功能，您可以更好地对局域网中的计算机进行管理和监控。", 	
				"There setting DHCP static IP assigning. You can manage computers in lan more conveniently"),
				
			
		EB_LANG_ADD("input_ip", 			
				"请输入IP地址", 	
				"Please input IP address"),
				
		EB_LANG_ADD("input_mac", 			
				"请输入MAC地址", 	
				"Please input MAC address"),
				
		EB_LANG_ADD("input_port", 			
				"请输入端口地址", 	
				"Please input port number"),
				
		EB_LANG_ADD("err_port", 			
				"端口地址输入错误，请重新输入", 	
				"Port number error, please input again"),
				
		EB_LANG_ADD("err_input", 			
				"输入中含有非法字符，请重新输入", 	
				"Invalid character, please input again"),
				
		EB_LANG_ADD(NULL, NULL, NULL)
	};
