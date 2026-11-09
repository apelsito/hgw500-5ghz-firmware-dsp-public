/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00034014 */

void FUN_ram_00034014(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = (uint)*(byte *)(param_4 + 0x27) + (uint)*(byte *)(param_4 + 0x26);
  FUN_ram_0004070c(&DAT_ram_000b592c,0x750);
  uVar2 = *(uint *)(param_4 + 0x14);
  if (*(int *)(param_4 + 8) == 2) {
    if (uVar2 == 0) {
      puVar5 = &DAT_ram_0005b138;
      puVar4 = &DAT_ram_0005b224;
    }
    else {
      puVar5 = &DAT_ram_0005b224;
      puVar4 = &DAT_ram_0005b2a0;
    }
  }
  else if (uVar2 == 0) {
    puVar5 = &DAT_ram_0005b070;
    puVar4 = &DAT_ram_0005b0dc;
  }
  else {
    puVar5 = &DAT_ram_0005b0dc;
    puVar4 = &DAT_ram_0005b118;
  }
  uVar8 = (uint)*(byte *)(param_4 + 0x26);
  iVar6 = 0;
  iVar3 = 0;
  if (uVar8 != 0) {
    uVar11 = *(uint *)(param_4 + 0xc);
    do {
      if ((puVar4[iVar3] == puVar5[iVar6]) || (iVar6 == 0)) {
        uVar12 = 0;
        do {
          uVar10 = uVar12 + 1 & 0xff;
          (&DAT_ram_000b592c)[iVar6 * 4 + uVar12] =
               *(short *)(param_1 + uVar12 * 2) + *(short *)(param_2 + (iVar3 * 4 + uVar12) * 2);
          uVar12 = uVar10;
        } while (uVar10 <= uVar11);
        iVar3 = (int)(short)((short)iVar3 + 1);
      }
      else {
        uVar12 = 0;
        do {
          uVar10 = uVar12 + 1 & 0xff;
          (&DAT_ram_000b592c)[iVar6 * 4 + uVar12] =
               *(undefined2 *)(&DAT_ram_000b5924 + iVar6 * 8 + uVar12 * 2);
          uVar12 = uVar10;
        } while (uVar10 <= uVar11);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < (int)uVar8);
  }
  iVar3 = (int)uVar13 >> 1;
  iVar6 = 0;
  iVar7 = (int)(short)((int)uVar8 >> 1);
  if (iVar3 != 0) {
    do {
      if (iVar6 << (uVar2 & 0x1f) == (int)(char)puVar5[iVar7]) {
        uVar11 = *(uint *)(param_4 + 0xc);
        uVar8 = 0;
        do {
          iVar1 = iVar7 * 4 + uVar8;
          iVar9 = iVar6 * 4 + uVar8;
          uVar8 = uVar8 + 1 & 0xff;
          *(undefined4 *)(iVar9 * 4 + param_3) =
               *(undefined4 *)(&DAT_ram_0005b9ec + (short)(&DAT_ram_000b592c)[iVar1] * 4);
        } while (uVar8 <= uVar11);
        iVar7 = (int)(short)((short)iVar7 + 1);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < iVar3);
  }
  uVar8 = (uint)(short)iVar3;
  iVar3 = 0;
  if (uVar8 < uVar13) {
    do {
      if (uVar8 - uVar13 << (uVar2 & 0x1f) == (int)(char)puVar5[iVar3]) {
        uVar12 = *(uint *)(param_4 + 0xc);
        uVar11 = 0;
        do {
          iVar6 = iVar3 * 4 + uVar11;
          iVar7 = uVar8 * 4 + uVar11;
          uVar11 = uVar11 + 1 & 0xff;
          *(undefined4 *)(iVar7 * 4 + param_3) =
               *(undefined4 *)(&DAT_ram_0005b9ec + (short)(&DAT_ram_000b592c)[iVar6] * 4);
        } while (uVar11 <= uVar12);
        iVar3 = (int)(short)((short)iVar3 + 1);
      }
      uVar8 = (uint)(short)((short)uVar8 + 1);
    } while ((int)uVar8 < (int)uVar13);
  }
  return;
}


