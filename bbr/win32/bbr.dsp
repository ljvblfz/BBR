# Microsoft Developer Studio Project File - Name="bbr" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=bbr - Win32 DebugFastCGI
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "bbr.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "bbr.mak" CFG="bbr - Win32 DebugFastCGI"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "bbr - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "bbr - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE "bbr - Win32 ReleaseFastCGI" (based on "Win32 (x86) Console Application")
!MESSAGE "bbr - Win32 DebugFastCGI" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "bbr - Win32 ReleaseFastCGI"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "bbr___Win32_ReleaseFastCGI"
# PROP BASE Intermediate_Dir "bbr___Win32_ReleaseFastCGI"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseFastCGI"
# PROP Intermediate_Dir "ReleaseFastCGI"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "$(EYBUILD_BASE)/include" /I "$(FASTCGI_BASE)/include" /I "../cspsrc/usr" /I "../lang" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "HAVE_FASTCGI" /D EB_LANG_NUM=3 /YX /FD /c
# SUBTRACT CPP /X
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib $(EYBUILD_BASE)/lib/fastcgi/eybuild.lib $(FASTCGI_BASE)/lib/libfcgi.lib /nologo /subsystem:console /machine:I386 /nodefaultlib:"MSVCRTD" /out:"F:\website\fcgi-bin\bbr.fcgi"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "bbr - Win32 DebugFastCGI"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "bbr___Win32_DebugFastCGI"
# PROP BASE Intermediate_Dir "bbr___Win32_DebugFastCGI"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugFastCGI"
# PROP Intermediate_Dir "DebugFastCGI"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /Gm /GX /ZI /I "$(EYBUILD_BASE)/include" /I "$(FASTCGI_BASE)\include" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "HAVE_FASTCGI" /FR /YX /FD /GZ /c
# ADD CPP /nologo /MD /W3 /Gm /GX /ZI /I "$(EYBUILD_BASE)/include" /I "$(FASTCGI_BASE)/include" /I "../cspsrc/usr" /I "../lang" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "HAVE_FASTCGI" /D EB_LANG_NUM=3 /FR /YX /FD /GZ /c
# SUBTRACT CPP /X
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib $(EYBUILD_BASE)/lib/eybuild.lib $(FASTCGI_BASE)/lib/libfcgi.lib /nologo /subsystem:console /debug /machine:I386 /nodefaultlib:"LIBC" /nodefaultlib:"MSVCRTD" /out:"F:\website\fcgi-bin\fbbr.fcgi" /pdbtype:sept
# SUBTRACT BASE LINK32 /profile /incremental:no /nodefaultlib
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib $(EYBUILD_BASE)/lib/fastcgi/eybuild.lib $(FASTCGI_BASE)/lib/libfcgi.lib /nologo /subsystem:console /debug /machine:I386 /nodefaultlib:"MSVCRTD" /out:"F:\website\fcgi-bin\bbr.fcgi" /pdbtype:sept
# SUBTRACT LINK32 /profile /incremental:no /nodefaultlib

!ELSEIF  "$(CFG)" == "bbr - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "$(EYBUILD_BASE)/include" /I "../cspsrc/usr" /I "../lang" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D EB_LANG_NUM=3 /FR /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib $(EYBUILD_BASE)/lib/eybuild.lib /nologo /subsystem:console /machine:I386 /out:"F:\website\cgi-bin\bbr.cgi"
# SUBTRACT LINK32 /pdb:none /incremental:yes /nodefaultlib

!ELSEIF  "$(CFG)" == "bbr - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /ML /W3 /Gm /GX /ZI /I "$(EYBUILD_BASE)/include" /I "$(EYBUILD_BASE)/include/zlib" /I "../cspsrc/usr" /I "../lang/ansi" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D EB_LANG_NUM=3 /FR /YX /FD /GZ /Zm1200 /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib $(EYBUILD_BASE)/lib/eybuild.lib /nologo /subsystem:console /debug /machine:I386 /out:"F:\website\cgi-bin\bbr.cgi" /pdbtype:sept
# SUBTRACT LINK32 /profile /incremental:no /nodefaultlib

!ENDIF 

# Begin Target

# Name "bbr - Win32 ReleaseFastCGI"
# Name "bbr - Win32 DebugFastCGI"
# Name "bbr - Win32 Release"
# Name "bbr - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\cgimain.c
# End Source File
# Begin Source File

SOURCE=..\cspsrc\csp_maplist.c
# End Source File
# Begin Source File

SOURCE=..\lang\ansi\lang_global.c
# End Source File
# Begin Source File

SOURCE=..\cspsrc\usr\menu.c
# End Source File
# Begin Source File

SOURCE=..\cspsrc\rom_maplist.c
# End Source File
# Begin Source File

SOURCE=..\cspsrc\usr\webhandle.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\..\..\include\eblang.h
# End Source File
# Begin Source File

SOURCE=..\cspsrc\usr\webhandle.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
