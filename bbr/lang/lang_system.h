
/* basic */
	EB_MULTI_LANG_BEGIN(system, NULL) {
	/* log */
		EB_LANG_ADD("syslog", "系统日志", "Syslog", "系統的な日誌"),
		EB_LANG_ADD("index", "索引", 	"Index", "索引"),
		EB_LANG_ADD("logcontent", "日 志 内 容", "Log Content", "日誌の内容"),
		EB_LANG_ADD("sendpadi", "发送PADI,请求建立连接", 
				"Send PADI to build connection.", 
				"PADIを発送して、接続を作り上げることを願い出る"),
		EB_LANG_ADD("reqtimeout", "请求连接超时", "Request timeout", "つながって超えることを願い出る時"),
		EB_LANG_ADD("autoconnect", "开启自动连接", "Begin transfer data", "自動の接続を開く"),
		EB_LANG_ADD("rcvpadt", "接收PADT,服务端请求断开本次连接", 
				"Received PADT, AC asked close this connection", 
				"接収PADT、サービスして捧げる今回の接続分けることを願い出る"),
		EB_LANG_ADD("cleanlog", "清除所有日志", "Clean all log", "すべての日誌を一掃する"),
		
	/* account */
		EB_LANG_ADD("blankinput", "输入不能为空！", "Input can't be blank", "入力は技量の暇だ！"),
		EB_LANG_ADD("illegalinput", "输入中含有非法字符，请您重新输入！", 	
				"Include illegal character, please reinput", 
				"入力の中で不法なキャラクターを含んで、再び入力して下さい！"),
		EB_LANG_ADD("reinput", 
				"输入中含有非法字符，请您重新输入！\\n（请不要输入字母、数字、中划线、下划线以外的字符。）", 
				"Include illegal character, please reinput\\n(Input allowed: A-Z, a-z, 0-9, -, _", 
				"入力の中で不法なキャラクターを含んで、再び入力して下さい！\\n（字母、数字、中を入力して線を引いて、下線でないでくたさいをもらう外のキャラクター。）"),
		EB_LANG_ADD("notsame", "新口令和确认新口令必须一致！", 
				"Confirm password must same with new password", 
				"新しいパスワードはと新しいパスワードが必ず一致しなければならないことを確認する！"),
		EB_LANG_ADD("olderror", "原口令不正确!", "Old password incorrect", 
				"もとのパスワードは正しくない"),
		EB_LANG_ADD("askrelogin", "用户名和口令修改完毕, 请重新登录!", 
				"Complete modfiy user account, please relogin!", "ユーザーの名和のパスワードは改正し終わって、 再び登録して下さい!"),
		EB_LANG_ADD("modaccount", "修改登录口令", "Modify user account", "改正してパスワードを登録する"),
		EB_LANG_ADD("moddesc", "本页修改系统管理员的用户名及口令。", 
				"You can Modify user name and password in this page", 
				"シスアドを改正するユーザー名とパスワード。"),
		
		EB_LANG_ADD("oldname", "原用户名：", "Old Name", "もとのユーザー名："),
		EB_LANG_ADD("oldpswd", "原口令：", "Old Password", "もとのパスワード："),
		EB_LANG_ADD("newname", "新用户名：", "New Name", "新しいユーザー名："),
		EB_LANG_ADD("newpswd", "新口令：", "New Password", "新しいパスワード："),
		EB_LANG_ADD("confirmpswd", "新口令：", "Confirm Password", "新しいパスワード："),
				
	/* reboot */
		EB_LANG_ADD("confirmreboot", "确认重新启动路由器？", 
				"Are you sure Restart?", 
				"再びルータをスタートさせることを確認するか？"),
		EB_LANG_ADD("reboot", "重启路由器", "Restart Router", "ルータを再起動する"),
		EB_LANG_ADD("rebootdesc", 
				"单击此按钮将使路由器重新启动。", 
				"Click here to restart router.", 
				"この押しボタンをクリックしてルータを再びスタートさせること。"),
				

	/* restore */
		EB_LANG_ADD("confirmrestore", 
				"恢复出厂设置将丢失现有的配置，您确定要继续吗？", 
				"This operation will lost all configration, Are you sure?", 
				"工場出荷して設けて有り合わせの配置をなくすことを回復して、あなたは継続することを確定するか？"),
		EB_LANG_ADD("restore", "恢复出厂设置", "Restore", 
				"恢复出厂设置"),
		EB_LANG_ADD("restoredesc", 
				"单击此按钮将使路由器的所有设置恢复到出厂时的默认状态。", 
				"Click here to restore all configure to factory-default setting.", 
				"この押しボタンをクリックしてルータのすべてに設けて工場出荷する時のが状態を黙認するまで(へ)回復させる。"),
				
	/* upgrade */
		EB_LANG_ADD("softupgrade", "软件升级", "Software Upgrade", "ソフトウェアは進級する"),
		EB_LANG_ADD("upgradedesc", 
				"通过升级本路由器最新版本的软件，将会使您的路由器工作得更加的稳定，甚至获得更新的功能。", 
				"Upgrading software to the newest version, it can make your router work more better.", 
				"進級する当ルータの最新のバージョンのソフトウェアを通して、あなたのルータにいっそう働かせる安定、甚だしきに至っては更新の機能を獲得する。"),
		EB_LANG_ADD("filename", "文 件 名：", "Filename:", "ファイル名"),
		EB_LANG_ADD("serverip", "服务器 IP：", "Server IP:", "サーバー IP："),
		EB_LANG_ADD("cursoftversion", "当前软件版本：", "Current Software Version", "当面のソフトウェアバージョン："),
		EB_LANG_ADD("curhardversion", "当前硬件版本：", "Current Hardware Version", "当面のハードウエアバージョン："),
		EB_LANG_ADD("notice", "注意：", "Notice:", "注意："),
		EB_LANG_ADD("noticedesc", 
				"升级时请选择与当前硬件版本一致的软件。</FONT>升级过程不能关闭路由器电源，否则将导致路由器损坏而无法使用。升级过程约20秒，当升级结束后，路由器将会自动重新启动。", 
				"Please confirm the software and hardware version before upgrade the firmware.</FONT>"
				"PLEASE DONOT POWER OFF WHEN UPGRADING FIRWARE, OTHERWISE ROUTER WILL CAN NOT WORK WELL.", 
				"進級する時は当面のハードウエアバージョンの一致するソフトウェアを選んでともらう。</FONT>進級する過程はルータの電源を閉鎖することができなくて、さもなくばルータが壊して使うことができないことを招く。進級する過程の約20秒、進級して終わった後に、ルータは自ら再びスタートする。"),
		EB_LANG_ADD("upgrade", "升 级", "Upgrade", "進級する"),
				
				

  	
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};
