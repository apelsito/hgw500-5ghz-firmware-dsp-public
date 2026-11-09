/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002fba0 */

void FUN_ram_0002fba0(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                     int param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar7 = 0;
  iVar3 = *param_5;
  if (0 < param_4) {
    pbVar6 = (byte *)*param_2;
    bVar2 = (&DAT_ram_00055980)[param_3];
    do {
      cVar1 = (&DAT_ram_00054a98)[param_6 * 0x10 + iVar7];
      uVar5 = (uint)(byte)(&DAT_ram_00055970)[param_3];
      if (cVar1 == '\x01') {
        uVar5 = uVar5 - 2;
      }
      uVar8 = (uint)(iVar3 >> 2) >> 0x1d;
      uVar8 = (iVar3 + uVar8 & 7) - uVar8;
      uVar12 = 8 - uVar8;
      uVar11 = (int)(uint)*pbVar6 >> (uVar8 & 0x1f) & 0xff;
      puVar4 = (ushort *)(iVar7 * 2 + param_1);
      if ((int)uVar12 < (int)uVar5) {
        pbVar6 = pbVar6 + 1;
        *param_2 = pbVar6;
        uVar10 = (ushort)(*pbVar6 & (&DAT_ram_00054a90)[uVar5 - uVar12]) << (uVar12 & 0x1f) |
                 (ushort)uVar11;
        *puVar4 = uVar10;
        if (cVar1 == '\x01') {
          uVar11 = 7 - uVar5;
LAB_ram_0002fccc:
          uVar10 = (ushort)((int)(short)uVar10 << (uVar11 & 0x1f));
          *puVar4 = uVar10;
        }
        else if (cVar1 == '\0') {
          uVar11 = 9 - uVar5;
          goto LAB_ram_0002fccc;
        }
      }
      else {
        if (cVar1 == '\x01') {
          uVar12 = (uint)(byte)(&DAT_ram_0005597c)[param_3];
          uVar9 = 7 - uVar5;
LAB_ram_0002fc66:
          uVar10 = (ushort)((uVar12 & uVar11) << (uVar9 & 0x1f));
          *puVar4 = uVar10;
        }
        else {
          if (cVar1 == '\0') {
            uVar12 = (uint)(short)(&DAT_ram_00055974)[param_3];
            uVar9 = 9 - uVar5;
            goto LAB_ram_0002fc66;
          }
          uVar10 = *puVar4;
        }
        if (7 < (int)(uVar8 + uVar5)) {
          pbVar6 = pbVar6 + 1;
          *param_2 = pbVar6;
        }
      }
      iVar3 = uVar8 + uVar5;
      uVar10 = bVar2 + uVar10;
      *puVar4 = uVar10;
      if (0xff < (short)uVar10) {
        *puVar4 = uVar10 - 0x200;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_4);
  }
  *param_5 = iVar3;
  return;
}


