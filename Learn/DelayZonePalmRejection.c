void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C024906C & 1) == 0 )
  { // MAIN: "\Registry\Machine\Software\Microsoft\Windows NT\CurrentVersion\Windows\Input\DelayZonePalmRejection"
    dword_1C0248D88 = 1; // RejectionEnabled - 1 value, type: REG_DWORD
    dword_1C024906C |= 1u;
    qword_1C0248D80 = (__int64)L"RejectionEnabled";
    qword_1C0248D90 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0248D98 = 175; // DelayZonePalmRejectionThresholdMS - 175 value, type: REG_DWORD
    dword_1C0248D9C = 175; // DelayZonePalmRejectionExtensionSizeDips - 175 value, type: REG_DWORD
    qword_1C0248DA0 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0248DA8 = 250;
    dword_1C0248DAC = 250;
    qword_1C0248DB0 = (__int64)L"DisableTimeThreshold";
    dword_1C0248DB8 = 60000; // DisableTimeThreshold - 60000 value, type: REG_DWORD
    dword_1C0248DBC = 60000;
    dword_1C0248D8C = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C0248D80;
  do
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    RIMRegQueryDWord(&DestinationString, *v2, *((unsigned int *)v2 + 2), (char *)v2 + 12);
    v2 += 2;
  }
  while ( v2 != &DelayZonePalmRejection::s_instance );
  *((_DWORD *)this + 24) = dword_1C0248D8C;
  *((_DWORD *)this + 25) = dword_1C0248D9C;
  *((_DWORD *)this + 26) = dword_1C0248DAC;
  *((_DWORD *)this + 27) = dword_1C0248DBC;
}
