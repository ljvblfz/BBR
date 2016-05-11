
/* route */
	EB_MULTI_LANG_BEGIN(route, NULL) {
	/* static router */
		EB_LANG_ADD("inputdistip", "请输入目的IP地址！", 
				"Please input IP address", "目的のIPアドレスを入力して下さい！"),
		EB_LANG_ADD("inputmask", "请输入子网掩码（例如255.255.255.0）！", 	
				"Please input IP Mask", "サブネットマスク（例えば255.255.255.0）を入力して下さい！"),
		EB_LANG_ADD("inputgateway", "请输入网关！", 
				"Please input gateway", "ゲートウェイを入力して下さい！"),
		EB_LANG_ADD("retryinput", 
				"不能有相同的路由项，请重新输入！", 
				"Found two same route item, please reinput.", 
				"同じルートの項がいることができなくて、再び入力して下さい！"),
		EB_LANG_ADD("routetable", "静态路由表", "Route Table", "静態のルートは表す"),
		EB_LANG_ADD("routedesc", 
				"本页设置路由器的静态路由信息。", 
				"You can configure the static route in this page",
				"ルータを設ける静態のルートの情報。"),
		EB_LANG_ADD("distip", "目的IP地址", "Distination IP", "目的のIPアドレス"),
  	
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};
