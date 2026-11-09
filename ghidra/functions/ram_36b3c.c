/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00036b3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00036b3c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  FUN_ram_0003ec60(param_2,param_4,param_5);
  FUN_ram_00023f14();
  iVar3 = COUNT0;
  if (param_3 == 0) {
    puVar4 = &DAT_ram_dcfa0000;
  }
  else {
    puVar4 = (undefined1 *)0xdcf80000;
  }
  FUN_ram_00020c00(param_1,param_2 - (int)puVar4,param_5,param_3,0);
  iVar1 = COUNT0;
  uVar7 = FUN_ram_0004065c(iVar1 - iVar3,0,2);
  uVar2 = FUN_ram_0004046c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  uVar5 = uVar2 >> 2;
  if (2 < uVar5) {
    uVar5 = 3;
  }
  uVar6 = DAT_ram_000559b0;
  if (DAT_ram_000559b0 <= uVar2) {
    uVar6 = uVar2;
  }
  iVar3 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
  DAT_ram_000559b0 = uVar6;
  *(int *)(iVar3 + uVar5 * 4 + 0x138) = *(int *)(iVar3 + uVar5 * 4 + 0x138) + 1;
  *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1140) = uVar6;
  return;
}


