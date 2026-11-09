/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002fa3c */

void FUN_ram_0002fa3c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  byte *pbVar8;
  ushort uVar9;
  ushort local_3c [16];
  
  bVar1 = (&DAT_ram_00055970)[param_3];
  iVar4 = 0;
  iVar5 = 0;
  if (0 < param_4) {
    do {
      uVar9 = (ushort)((int)((uint)(byte)(&DAT_ram_00055980)[param_3] +
                            (int)*(short *)(param_2 + iVar5 * 2)) >> (9 - bVar1 & 0x1f));
      if ((&DAT_ram_00054a98)[param_6 * 0x10 + iVar5] == '\x01') {
        uVar7 = (ushort)(byte)(&DAT_ram_0005597c)[param_3];
        if ((short)uVar7 <= (short)uVar9) {
          uVar9 = uVar7;
        }
        local_3c[iVar5] = uVar7 & uVar9;
      }
      else if ((&DAT_ram_00054a98)[param_6 * 0x10 + iVar5] == '\0') {
        uVar7 = (&DAT_ram_00055974)[param_3];
        if ((short)uVar7 <= (short)uVar9) {
          uVar9 = uVar7;
        }
        local_3c[iVar5] = uVar7 & uVar9;
      }
      puVar2 = (undefined1 *)(param_1 + iVar5);
      iVar5 = iVar5 + 1;
      *puVar2 = 0;
    } while (iVar5 < param_4);
  }
  iVar5 = 0;
  if (0 < param_4) {
    do {
      uVar3 = (uint)(byte)(&DAT_ram_00055970)[param_3];
      pbVar8 = (byte *)(param_1 + iVar4);
      uVar6 = (uint)(param_5 >> 2) >> 0x1d;
      uVar9 = local_3c[iVar5];
      uVar6 = (uVar6 + param_5 & 7) - uVar6;
      if ((&DAT_ram_00054a98)[param_6 * 0x10 + iVar5] == '\x01') {
        uVar3 = uVar3 - 2;
      }
      bVar1 = (byte)uVar9 << (uVar6 & 0x1f);
      if ((int)(8 - uVar6) < (int)uVar3) {
        *pbVar8 = *pbVar8 | bVar1;
        iVar4 = iVar4 + 1;
        *(byte *)(param_1 + iVar4) =
             *(byte *)(param_1 + iVar4) | (byte)((int)(uint)(byte)uVar9 >> (8 - uVar6 & 0x1f));
      }
      else {
        *pbVar8 = *pbVar8 | bVar1;
        if (7 < (int)(uVar6 + uVar3)) {
          iVar4 = iVar4 + 1;
        }
      }
      iVar5 = iVar5 + 1;
      param_5 = param_5 + uVar3;
    } while (iVar5 < param_4);
  }
  return;
}


