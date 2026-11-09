/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002c580 */

void FUN_ram_0002c580(undefined4 *param_1,byte *param_2,int *param_3,int param_4,int param_5,
                     int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = (uint)*(byte *)((int)&DAT_ram_00054a50 + param_5 + param_6 * 4 + 3);
  iVar5 = 0;
  iVar7 = 0;
  if (uVar6 != 0) {
    do {
      if ((&DAT_ram_00054a88)[param_6 * 0x10 + iVar7] == '\x01') {
        uVar4 = (byte)(&DAT_ram_00055970)[param_4] - 2;
LAB_ram_0002c5dc:
        iVar5 = iVar5 + uVar4;
      }
      else if ((&DAT_ram_00054a88)[param_6 * 0x10 + iVar7] == '\0') {
        uVar4 = (uint)(byte)(&DAT_ram_00055970)[param_4];
        goto LAB_ram_0002c5dc;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar6);
  }
  iVar5 = *param_3 + iVar5;
  uVar6 = (uint)(iVar5 >> 2) >> 0x1d;
  iVar7 = (uVar6 + iVar5 & 7) - uVar6;
  iVar5 = iVar5 >> 3;
  if (iVar7 != 0) {
    iVar5 = iVar5 + 1;
  }
  pbVar2 = (byte *)*param_1;
  iVar8 = 1;
  pbVar3 = pbVar2 + 1;
  *pbVar2 = *param_2 | *pbVar2;
  *param_1 = pbVar3;
  pbVar2 = pbVar3;
  if (1 < iVar5) {
    do {
      pbVar1 = param_2 + iVar8;
      iVar8 = iVar8 + 1;
      pbVar3 = pbVar2 + 1;
      *pbVar2 = *pbVar1;
      pbVar2 = pbVar3;
    } while (iVar8 < iVar5);
    *param_1 = pbVar3;
  }
  if (0 < iVar7) {
    *param_1 = pbVar3 + -1;
  }
  *param_3 = iVar7;
  return;
}


