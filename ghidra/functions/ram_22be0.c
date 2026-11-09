/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00022be0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00022be0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar2 = 1;
  if (DAT_ram_00055958 == -1) {
    if (_DAT_ram_e00000bc == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(_DAT_ram_e00000bc + 0x38);
    }
    if ((iVar3 == 1) || (iVar3 == 2)) {
      DAT_ram_00055958 = 1;
    }
    else {
      DAT_ram_00055958 = 0;
    }
  }
  uVar4 = 0x400 << (*(byte *)(param_1 + 0x7c) & 0x1f);
  if (*(int *)(param_1 + 0xc) == 1) {
    bVar2 = 2;
  }
  if ((param_3 < uVar4 << 2) || (bVar2 < *(byte *)(param_1 + 0x7c))) {
    if (param_3 < uVar4 << 2) {
      if (*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1060) < uVar4) {
        *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1060) = uVar4;
      }
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x105c) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x105c) + 1;
    }
    if (bVar2 < *(byte *)(param_1 + 0x7c)) {
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1064) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1064) + 1;
    }
    _DAT_ram_e60501fc = _DAT_ram_e60501fc | 2;
    uVar1 = 0;
  }
  else {
    FUN_ram_000212d0(4,s_os_dsp_scheduler_c_ram_00055270,0x16e);
    if (DAT_ram_00055958 != 0) {
      _DAT_ram_e6050268 = 0;
    }
    FUN_ram_0003ebb0(param_2,0xe6200000,uVar4);
    uVar5 = uVar4 & 0xfffffffc;
    FUN_ram_0003ebb0(param_2 + uVar5,0xe6202000,uVar4);
    iVar3 = param_2 + uVar5 + uVar5;
    FUN_ram_0003ebb0(iVar3,0xe6204000,uVar4);
    FUN_ram_0003ebb0(uVar5 + iVar3,0xe6206000,uVar4);
    _DAT_ram_e60501fc = _DAT_ram_e60501fc | 2;
    if (DAT_ram_00055958 != 0) {
      _DAT_ram_e6050268 = 1;
    }
    FUN_ram_00021650(4,s_os_dsp_scheduler_c_ram_00055270,0x187);
    uVar1 = 1;
  }
  return uVar1;
}


