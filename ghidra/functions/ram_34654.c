/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00034654 */

void FUN_ram_00034654(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  
  if ((param_3 == 2) && (param_4 == 2)) {
    ppuVar6 = (undefined **)&DAT_ram_00054e34;
    iVar10 = 6;
  }
  else if ((param_3 == 1) && (param_4 == 1)) {
    ppuVar6 = (undefined **)&DAT_ram_00054e64;
    iVar10 = 0xc;
  }
  else if ((param_3 == 1) && (param_4 == 2)) {
    ppuVar6 = (undefined **)&DAT_ram_00054e94;
    iVar10 = 0xc;
  }
  else if ((param_3 == 2) && (param_4 == 1)) {
    ppuVar6 = (undefined **)&DAT_ram_00054ec4;
    iVar10 = 0xc;
  }
  else if ((param_3 == 1) && (param_4 == 3)) {
    ppuVar6 = (undefined **)&DAT_ram_00054ef4;
    iVar10 = 4;
  }
  else {
    if (param_3 != 3) {
      return;
    }
    if (param_4 != 1) {
      return;
    }
    iVar10 = 4;
    ppuVar6 = &PTR_DAT_ram_00030201_ram_00054f24;
  }
  iVar8 = 0;
  iVar5 = (int)(short)((short)param_4 + (short)param_3);
  sVar9 = 0;
  if (iVar10 != 0) {
    do {
      sVar4 = 0;
      iVar7 = 0;
      if (0 < param_3) {
        do {
          uVar1 = (uint)*(byte *)((int)ppuVar6 + iVar8 * 4 + iVar7);
          if (uVar1 != 0xff) {
            sVar4 = *(short *)(param_2 + uVar1 * 2) + sVar4;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_3);
      }
      if (param_3 < iVar5) {
        iVar7 = param_3;
        do {
          uVar1 = (uint)*(byte *)((int)ppuVar6 + iVar8 * 4 + iVar7);
          if (uVar1 != 0xff) {
            sVar4 = *(short *)(uVar1 * 2 + param_2 + 8) + sVar4;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
      }
      if ((sVar9 < sVar4) && (iVar7 = 0, sVar9 = sVar4, 0 < iVar5)) {
        do {
          iVar2 = iVar8 * 4 + iVar7;
          iVar3 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          *(uint *)(iVar3 + param_1) = (uint)*(byte *)((int)ppuVar6 + iVar2);
        } while (iVar7 < iVar5);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar10);
  }
  return;
}


