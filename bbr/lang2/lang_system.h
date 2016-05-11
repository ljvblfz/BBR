
/* basic */
	EB_MULTI_LANG_BEGIN(NULL, NULL) {
	/* log */
		EB_LANG_ADD("syslog", "系统日志", "Syslog"),
		EB_LANG_ADD("index", "索引", 	"Index"),
		EB_LANG_ADD("logcontent", "日 志 内 容", "Log Content"),
		EB_LANG_ADD("sendpadi", "发送PADI,请求建立连接", "Send PADI to build connection."),
		EB_LANG_ADD("reqtimeout", "请求连接超时", "Request timeout"),
		EB_LANG_ADD("autoconnect", "开启自动连接", "Begin transfer data"),
		EB_LANG_ADD("rcvpadt", "接收PADT,服务端请求断开本次连接", "Received PADT, AC asked close this connection"),
		EB_LANG_ADD("cleanlog", "清除所有日志", "Clean all log"),
		
	/* account */
		EB_LANG_ADD("blankinput", "输入不能为空！", "Input can't be blank"),
		EB_LANG_ADD("illegalinput", "输入中含有非法字符，请您重新输入！", 	"Include illegal character, please reinput"),
		EB_LANG_ADD("reinput", 
				"输入中含有非法字符，请您重新输入！\\n（请不要输入字母、数字、中划线、下划线以外的字符。）", 
				"Include illegal character, please reinput\\n(Input allowed: A-Z, a-z, 0-9, -, _"),
		EB_LANG_ADD("notsame", "新口令和确认新口令必须一致！", "Confirm password must same with new password"),
		EB_LANG_ADD("olderror", "原口令不正确!", "Old password incorrect"),
		EB_LANG_ADD("askrelogin", "用户名和口令修改完毕, 请重新登录!", "Complete modfiy user account, please relogin!"),
		EB_LANG_ADD("modaccount", "修改登录口令", "Modify user account"),
		EB_LANG_ADD("moddesc", "本页修改系统管理员的用户名及口令。", "You can Modify user name and password in this page"),
		
		EB_LANG_ADD("oldname", "原用户名：", "Old Name"),
		EB_LANG_ADD("oldpswd", "原口令：", "Old Password"),
		EB_LANG_ADD("newname", "新用户名：", "New Name"),
		EB_LANG_ADD("newpswd", "新口令：", "New Password"),
		EB_LANG_ADD("confirmpswd", "新口令：", "Confirm Password"),
				
	/* reboot */
		EB_LANG_ADD("confirmreboot", "确认重新启动路由器？", "Are you sure Restart?"),
		EB_LANG_ADD("reboot", "重启路由器", "Restart Router"),
		EB_LANG_ADD("rebootdesc", "单击此按钮将使路由器重新启动。", "Click here to restart router."),
				

	/* restore */
		EB_LANG_ADD("confirmrestore", 
				"恢复出厂设置将丢失现有的配置，您确定要继续吗？", 
				"This operation will lost all configration, Are you sure?"),
		EB_LANG_ADD("restore", "恢复出厂设置", "Restore"),
		EB_LANG_ADD("restoredesc", 
				"单击此按钮将使路由器的所有设置恢复到出厂时的默认状态。。", 
				"Click here to restore all configure to factory-default setting."),
				
	/* upgrade */
		EB_LANG_ADD("softupgrade", "软件升级", "Software Upgrade"),
		EB_LANG_ADD("upgradedesc", 
				"通过升级本路由器最新版本的软件，将会使您的路由器工作得更加的稳定，甚至获得更新的功能。", 
				"Upgrading software to the newest version, it can make your router work more better."),
		EB_LANG_ADD("filename", "文 件 名：", "Filename:"),
		EB_LANG_ADD("serverip", "服务器 IP：", "Server IP:"),
		EB_LANG_ADD("cursoftversion", "当前软件版本：", "Current Software Version"),
		EB_LANG_ADD("curhardversion", "当前硬件版本：", "Current Hardware Version"),
		EB_LANG_ADD("notice", "注意：", "Notice:"),
		EB_LANG_ADD("noticedesc", 
				"升级时请选择与当前硬件版本一致的软件。</FONT>升级过程不能关闭路由器电源，否则将导致路由器损坏而无法使用。升级过程约20秒，当升级结束后，路由器将会自动重新启动。", 
				"Please confirm the software and hardware version before upgrade the firmware.</FONT>"
				"PLEASE DONOT POWER OFF WHEN UPGRADING FIRWARE, OTHERWISE ROUTER WILL CAN NOT WORK WELL."),
		EB_LANG_ADD("upgrade", "升 级", "Upgrade"),
				
				

  	
		EB_LANG_ADD(NULL, NULL, NULL)
	};
