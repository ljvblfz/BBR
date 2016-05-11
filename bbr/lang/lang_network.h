
/* basic */
	EB_MULTI_LANG_BEGIN(network, NULL) {

		EB_LANG_ADD("lanconfirm", 
				"LAN口IP地址的更改将导致路由器的重新启动，确定？", 	
				"LAN port IP changed, restart router now?", 
				"LAN口のIPアドレスのは変更してルータの再びのスタートを招いて、確定するか？"),
		EB_LANG_ADD("lansetting", 
				"LAN口设置", 	
				"LAN Por Setting", "LAN口は設ける"),
				
		EB_LANG_ADD("basiclan", 			
				"本页设置路由器LAN口的基本网络参数。", 	
				"Set the basic network configure for wan port in this page", 
				"ルータLAN口を設ける基本的なネットワークのパラメーター。"),
		EB_LANG_ADD("note", 			
				"注意：当LAN口IP参数（包括IP地址、子网掩码）发生变更时，为确保DHCP server能够正常工作，应保证DHCP server中设置的地址池、静态地址与新的LAN口IP是处于同一网段的，并请重启路由器。", 	
				"NOTE: To make router work well, while LAN port changed, ...", 
				"注意：LAN口IPパラメーター（IPアドレス、サブネットマスクを含む）が変更が発生する時、DHCP serverが正常に仕事をすることができることを確保するため、DHCP serverの中で設置の住所の池、静態の住所と新しいLAN口IPが同一のネットののがあるのであることを保証するべきで、そしてルータを再起動してもらう"),
		EB_LANG_ADD("dip", 			
				"动态IP", 	
				"Dynamic IP", "ダイナミックIP"),
		EB_LANG_ADD("sip", 			
				"静态IP", 	
				"Static IP", "静態のIP"),
		EB_LANG_ADD("account", 			
				"上网账号", 	
				"Account", "インターネットを利用するアカウント"),
		EB_LANG_ADD("pswd", 			
				"上网口令：", 	
				"Password", "インターネットを利用するパスワード："),

		
		EB_LANG_ADD("wansetting", 
				"WAN口设置", 	
				"WAN Por Setting", "WAN口は設ける"),
		EB_LANG_ADD("basicwan", 			
				"本页设置路由器WAN口的基本网络参数。", 	
				"Set the basic network configure for wan port in this page", 
				"ルータWAN口を設ける基本的なネットワークのパラメーター。"),
		EB_LANG_ADD("wctype", 			
				"WAN口连接类型", 	
				"WAN Connect type", "WAN口はタイプにつながる"),
		EB_LANG_ADD("connect_mode", 			
				"根据您的需要，请选择对应连接模式", 	
				"Choose connect mode by you need", "WAN口はタイプにつながる"),
		EB_LANG_ADD("connect_by_need", 			
				"按需连接，在有访问数据时自动进行连接。", 	
				"Connect by need, auto connect while detect data access", 
				"必要に応じてつながって、データを訪問することがいる時自ら接続を行う。"),
		EB_LANG_ADD("desc_wait", 			
				"自动断线等待时间", 	
				"The time wait before auto disconnect", "自動の切れた線の待ち時間"),
		EB_LANG_ADD("seconds", 			
				"分钟 （0表示不自动断线）", 	
				"Second (0 means don't auto disconnect", "分 （0自動でない切れた線を表している"),
		EB_LANG_ADD("auto_connect", 			
				"自动连接，在开机和断线后自动进行连接。", 	
				"Auto connect while disconnect or host start up", 
				"自動の接続、機械をスタートさせたと切れた線後で自ら接続を行う。"),
		EB_LANG_ADD("manual_connect", 			
				"手动连接，由用户手动进行连接。", 	
				"Menual connect by user", "手動の接続、ユーザーの手動から接続を行う。"),
		EB_LANG_ADD("auto_dis_wait", 			
				"自动断线等待时间：", 	
				"The time auto disconnect while no data access", "自動の切れた線の待ち時間："),
		EB_LANG_ADD("advance", 			
				"高级设置", 	
				"Advance", "高級な設置"),
				
		EB_LANG_ADD("time_input_err", 			
				"时间输入错误，请重新输入（0－99）！", 	
				"Time input error, retry once(0-99)", 
				"時間は誤りを入力して、再び（0－99）を入力して下さい！"),

		/* setting for "Mac Clone" */
		EB_LANG_ADD("mac_clone", 			
				"MAC地址克隆", 	
				"MAC Clone", "MAC住所はクローンする"),
				
		EB_LANG_ADD("set_mac", 			
				"本页设置路由器对广域网的MAC地址。", 	
				"Setting router MAC Address for WAN.", "ページはルータの広域網に対するMAC住所を設ける。"),
  	
		EB_LANG_ADD("restore_mac", 			
				"恢复出厂MAC", 	
				"Restore MAC", "工場出荷をMAC回復する"),
  	
		EB_LANG_ADD("cur_mac", 			
				"当前管理PC的MAC地址", 	
				"Current PC MAC", "当面PCのMAC住所を管理した"),
  	
		EB_LANG_ADD("clone_mac", 			
				"克隆MAC地址", 	
				"Clone MAC", "MAC住所をクローンする"),
  	
		EB_LANG_ADD("notice", 			
				"注意：只有局域网中的计算机能使用“克隆MAC地址”功能。", 	
				"Setting router MAC Address for WAN.", 
				"注意：ただLANの中の計算の機能が“MAC住所をクローンする”の機能を使う。"),
  	
		/* setting for "PPPoE Advance Setting" */
		EB_LANG_ADD("pppoe", 			
				"PPPoE 高级设置", 	
				"PPPoE Advance Setting", "高級な設置"),
				
		EB_LANG_ADD("mtu", 			
				"数据包MTU", 	
				"MTU", "データはMTUを包む"),
				
		EB_LANG_ADD("mtu_note", 			
				"缺省值为1492，如非必要，请勿更改", 	
				"Default is 1492, modify carefully!", "デフォルト値は1492で、必要ではないようだ、変更しないように願います"),
  	
		EB_LANG_ADD("sev_name", 			
				"服务名", 	
				"Service name", "サービス名"),
  	
		EB_LANG_ADD("sevname_note", 			
				"即Service Name。如非必要，请勿填写", 	
				"Modify it carefully!", "つまりService Name。必要ではないようだ、書き込まないように願います"),
  	
		EB_LANG_ADD("ac_name", 			
				"服务器名称", 	
				"AC Name", "サーバーの名称"),
  	
		EB_LANG_ADD("ac_note", 			
				"即AC Name。如非必要，请勿填写", 	
				"Modify it carefully!", "つまりAC Name。必要ではないようだ、書き込まないように願います"),
  	
		EB_LANG_ADD("des_ip", 			
				"使用ISP指定IP地址", 	
				"Using IP address ISP assigned", "ISPを使ってIPアドレスを指定する"),
  	
		EB_LANG_ADD("isp_ip", 			
				"ISP指定的IP地址", 	
				"IP ISP assigned", "ISPの指定するIPアドレス"),
  	
		EB_LANG_ADD("int_time", 			
				"在线检测时间间隔", 	
				"Checking interval on line", "オンライン時間間隔を検査?測定する"),
  	
		EB_LANG_ADD("int_time_note", 			
				"0～120，0 表示不发送", 	
				"0～120，0 means don't send", "0～120，0 表示は発送しない"),
  	
		EB_LANG_ADD("man_dns", 			
				"手动设置DNS服务器", 	
				"Setting DNS service manually", "手動はDNSサーバーを設ける"),
  	
		EB_LANG_ADD("bk_dns", 			
				"备用DNS服务器", 	
				"Backup DNS service", "予備DNSサーバー"),
  	
		EB_LANG_ADD("err_time", 			
				"时间输入错误，请重新输入（0－120）！", 	
				"Time setting error, please input again (0 - 120)!", 
				"時間は誤りを入力して、再び（0－120）を入力して下さい！"),
  	
		EB_LANG_ADD("err_mtu", 			
				"数据包的MTU值已超出范围，请重新输入(576 - 1492)！", 	
				"MTU out of range, please input again (576 - 1492)!", 
				"データのバッグMTU値はすでに範囲を超えて、再び(576 - 1492)を入力して下さい！"),
			
		EB_LANG_ADD("mtu", 			
				"数据包MTU：", 	
				"MTU:", 
				"MTU:"),
			
		EB_LANG_ADD("defaultmtu", 			
				"（缺省值为1500，如非必要，请勿更改）", 	
				"(MTU default is 1500)", 
				"(MTUデフォルトは1500です。)"),
			
		EB_LANG_ADD("flagmode", 			
				"单播方式获取IP（一般情况下不需要选择）", 	
				"Get IP by unicast(Usually, needn't choose)", 
				"ユニキャストでIPを手に入れてください。(通常、選ぶ必要はない、)"),
			
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};
