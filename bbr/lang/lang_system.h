
/* basic */
	EB_MULTI_LANG_BEGIN(system, NULL) {
	/* log */
		EB_LANG_ADD("syslog", "ϵͳ��־", "Syslog", "ϵ�y�Ĥ����I"),
		EB_LANG_ADD("index", "����", 	"Index", "����"),
		EB_LANG_ADD("logcontent", "�� ־ �� ��", "Log Content", "���I������"),
		EB_LANG_ADD("sendpadi", "����PADI,����������", 
				"Send PADI to build connection.", 
				"PADI��k�ͤ��ơ��ӾA�������Ϥ��뤳�Ȥ������"),
		EB_LANG_ADD("reqtimeout", "�������ӳ�ʱ", "Request timeout", "�Ĥʤ��äƳ����뤳�Ȥ������r"),
		EB_LANG_ADD("autoconnect", "�����Զ�����", "Begin transfer data", "�ԄӤνӾA���_��"),
		EB_LANG_ADD("rcvpadt", "����PADT,���������Ͽ���������", 
				"Received PADT, AC asked close this connection", 
				"�Ӆ�PADT�����`�ӥ������������ؤνӾA�֤��뤳�Ȥ������"),
		EB_LANG_ADD("cleanlog", "���������־", "Clean all log", "���٤Ƥ����I��һ�ߤ���"),
		
	/* account */
		EB_LANG_ADD("blankinput", "���벻��Ϊ�գ�", "Input can't be blank", "�����ϼ�����Ͼ����"),
		EB_LANG_ADD("illegalinput", "�����к��зǷ��ַ��������������룡", 	
				"Include illegal character, please reinput", 
				"�������Фǲ����ʥ���饯���`�򺬤�ǡ��٤����������¤�����"),
		EB_LANG_ADD("reinput", 
				"�����к��зǷ��ַ��������������룡\\n���벻Ҫ������ĸ�����֡��л��ߡ��»���������ַ�����", 
				"Include illegal character, please reinput\\n(Input allowed: A-Z, a-z, 0-9, -, _", 
				"�������Фǲ����ʥ���饯���`�򺬤�ǡ��٤����������¤�����\\n����ĸ�����֡��Ф��������ƾ��������ơ��¾��Ǥʤ��Ǥ����������餦��Υ���饯���`����"),
		EB_LANG_ADD("notsame", "�¿����ȷ���¿������һ�£�", 
				"Confirm password must same with new password", 
				"�¤����ѥ���`�ɤϤ��¤����ѥ���`�ɤ��ؤ�һ�¤��ʤ���Фʤ�ʤ����Ȥ�_�J���룡"),
		EB_LANG_ADD("olderror", "ԭ�����ȷ!", "Old password incorrect", 
				"��ȤΥѥ���`�ɤ��������ʤ�"),
		EB_LANG_ADD("askrelogin", "�û����Ϳ����޸����, �����µ�¼!", 
				"Complete modfiy user account, please relogin!", "��`���`�����ͤΥѥ���`�ɤϸ������K��äơ� �٤ӵ��h�����¤���!"),
		EB_LANG_ADD("modaccount", "�޸ĵ�¼����", "Modify user account", "�������ƥѥ���`�ɤ���h����"),
		EB_LANG_ADD("moddesc", "��ҳ�޸�ϵͳ����Ա���û��������", 
				"You can Modify user name and password in this page", 
				"�������ɤ���������`���`���ȥѥ���`�ɡ�"),
		
		EB_LANG_ADD("oldname", "ԭ�û�����", "Old Name", "��ȤΥ�`���`����"),
		EB_LANG_ADD("oldpswd", "ԭ���", "Old Password", "��ȤΥѥ���`�ɣ�"),
		EB_LANG_ADD("newname", "���û�����", "New Name", "�¤�����`���`����"),
		EB_LANG_ADD("newpswd", "�¿��", "New Password", "�¤����ѥ���`�ɣ�"),
		EB_LANG_ADD("confirmpswd", "�¿��", "Confirm Password", "�¤����ѥ���`�ɣ�"),
				
	/* reboot */
		EB_LANG_ADD("confirmreboot", "ȷ����������·������", 
				"Are you sure Restart?", 
				"�٤ӥ�`���򥹥��`�Ȥ����뤳�Ȥ�_�J���뤫��"),
		EB_LANG_ADD("reboot", "����·����", "Restart Router", "��`���������Ӥ���"),
		EB_LANG_ADD("rebootdesc", 
				"�����˰�ť��ʹ·��������������", 
				"Click here to restart router.", 
				"����Ѻ���ܥ���򥯥�å����ƥ�`�����٤ӥ����`�Ȥ����뤳�ȡ�"),
				

	/* restore */
		EB_LANG_ADD("confirmrestore", 
				"�ָ��������ý���ʧ���е����ã���ȷ��Ҫ������", 
				"This operation will lost all configration, Are you sure?", 
				"�������ɤ����O�����Ф�Ϥ碌�����ä�ʤ������Ȥ�؏ͤ��ơ����ʤ��Ͼ@�A���뤳�Ȥ�_�����뤫��"),
		EB_LANG_ADD("restore", "�ָ���������", "Restore", 
				"�ָ���������"),
		EB_LANG_ADD("restoredesc", 
				"�����˰�ť��ʹ·�������������ûָ�������ʱ��Ĭ��״̬��", 
				"Click here to restore all configure to factory-default setting.", 
				"����Ѻ���ܥ���򥯥�å����ƥ�`���Τ��٤Ƥ��O���ƹ������ɤ���r�Τ�״�B���a�J����ޤ�(��)�؏ͤ����롣"),
				
	/* upgrade */
		EB_LANG_ADD("softupgrade", "�������", "Software Upgrade", "���եȥ��������M������"),
		EB_LANG_ADD("upgradedesc", 
				"ͨ��������·�������°汾�����������ʹ����·���������ø��ӵ��ȶ���������ø��µĹ��ܡ�", 
				"Upgrading software to the newest version, it can make your router work more better.", 
				"�M�����뵱��`�������¤ΥЩ`�����Υ��եȥ�������ͨ���ơ����ʤ��Υ�`���ˤ��ä����P�����밲�����������������äƤϸ��¤ΙC�ܤ�@�ä��롣"),
		EB_LANG_ADD("filename", "�� �� ����", "Filename:", "�ե�������"),
		EB_LANG_ADD("serverip", "������ IP��", "Server IP:", "���`�Щ` IP��"),
		EB_LANG_ADD("cursoftversion", "��ǰ����汾��", "Current Software Version", "����Υ��եȥ������Щ`�����"),
		EB_LANG_ADD("curhardversion", "��ǰӲ���汾��", "Current Hardware Version", "����Υϩ`�ɥ������Щ`�����"),
		EB_LANG_ADD("notice", "ע�⣺", "Notice:", "ע�⣺"),
		EB_LANG_ADD("noticedesc", 
				"����ʱ��ѡ���뵱ǰӲ���汾һ�µ������</FONT>�������̲��ܹر�·������Դ�����򽫵���·�����𻵶��޷�ʹ�á���������Լ20�룬������������·���������Զ�����������", 
				"Please confirm the software and hardware version before upgrade the firmware.</FONT>"
				"PLEASE DONOT POWER OFF WHEN UPGRADING FIRWARE, OTHERWISE ROUTER WILL CAN NOT WORK WELL.", 
				"�M������r�ϵ���Υϩ`�ɥ������Щ`������һ�¤��륽�եȥ��������x��ǤȤ�餦��</FONT>�M�������^�̤ϥ�`�����Դ���]�i���뤳�Ȥ��Ǥ��ʤ��ơ�����ʤ��Х�`����������ʹ�����Ȥ��Ǥ��ʤ����Ȥ��Ф����M�������^�̤μs20�롢�M�����ƽK��ä���ˡ���`�����Ԥ��٤ӥ����`�Ȥ��롣"),
		EB_LANG_ADD("upgrade", "�� ��", "Upgrade", "�M������"),
				
				

  	
		EB_LANG_ADD(NULL, NULL, NULL, NULL)
	};
