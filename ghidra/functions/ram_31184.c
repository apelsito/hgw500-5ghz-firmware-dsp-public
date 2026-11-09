/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00031184 */

void FUN_ram_00031184(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_4 == 1) {
    iVar8 = 0x2000;
    iVar10 = 0xe;
  }
  else {
    iVar10 = 0xf;
    iVar8 = 0x4000;
  }
  iVar9 = 0;
  do {
    iVar6 = iVar9 * 4;
    uVar1 = (ulonglong)(uint)(int)*(short *)(param_2 + iVar6) * (ulonglong)(param_3 & 0xffff);
    uVar2 = (longlong)(int)*(short *)(param_2 + iVar6) * (longlong)(int)(param_3 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    psVar7 = (short *)(iVar6 + param_1);
    sVar5 = (short)((int)uVar3 + iVar8 >> iVar10);
    if (param_5 == 0) {
      *psVar7 = *psVar7 + sVar5;
    }
    else {
      *psVar7 = sVar5;
    }
    uVar4 = (uint)*(short *)(param_2 + iVar6 + 2);
    uVar1 = (ulonglong)uVar4 * (ulonglong)(param_3 & 0xffff);
    uVar2 = (longlong)(int)uVar4 * (longlong)(int)(param_3 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    sVar5 = (short)((int)uVar3 + iVar8 >> iVar10);
    if (param_5 == 0) {
      psVar7[1] = psVar7[1] + sVar5;
    }
    else {
      psVar7[1] = sVar5;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}


