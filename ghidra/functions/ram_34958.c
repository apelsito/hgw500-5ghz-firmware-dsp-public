/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00034958 */

void FUN_ram_00034958(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                     int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short local_5c [2];
  undefined4 uStack_58;
  int local_54 [4];
  int local_44 [4];
  
  FUN_ram_0003ec60(local_54,&DAT_ram_00054f54,0x20);
  iVar4 = 0;
  if (0 < param_5) {
    do {
      FUN_ram_000358a8(*(undefined4 *)(param_3 + iVar4 * 4),4,&uStack_58,local_5c);
      uVar3 = (uint)local_5c[0];
      iVar2 = AUX_XMACLW_H;
      uVar1 = AUX_XMACLW_L;
      if ((int)uVar3 < 0x20) {
        if ((int)uVar3 < 1) {
          iVar2 = uVar1 << (-uVar3 & 0x1f);
        }
        else {
          iVar2 = (uVar1 >> (uVar3 & 0x1f)) + (iVar2 << (0x20 - uVar3 & 0x1f));
        }
        local_54[iVar4] = iVar2;
      }
      else {
        local_54[iVar4] = iVar2 >> (uVar3 - 0x20 & 0x1f);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_5);
  }
  iVar4 = 0;
  if (0 < param_6) {
    do {
      FUN_ram_000358a8(*(undefined4 *)(param_4 + iVar4 * 4),4,&uStack_58,local_5c);
      piVar5 = local_44 + iVar4;
      uVar3 = (uint)local_5c[0];
      iVar2 = AUX_XMACLW_H;
      uVar1 = AUX_XMACLW_L;
      if ((int)uVar3 < 0x20) {
        if ((int)uVar3 < 1) {
          *piVar5 = uVar1 << (-uVar3 & 0x1f);
        }
        else {
          *piVar5 = (iVar2 << (0x20 - uVar3 & 0x1f)) + (uVar1 >> (uVar3 & 0x1f));
        }
      }
      else {
        *piVar5 = iVar2 >> (uVar3 - 0x20 & 0x1f);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_6);
  }
  return;
}


