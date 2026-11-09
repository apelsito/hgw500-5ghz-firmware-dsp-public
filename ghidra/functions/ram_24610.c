/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00024610 */

byte * FUN_ram_00024610(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pbVar10 = *(byte **)(param_2 + 0x10);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(uint *)(param_2 + 0x38);
  uVar6 = 0;
  uVar3 = *(uint *)(param_2 + 0x3c);
  uVar9 = *(uint *)(param_2 + 0x40);
  *pbVar10 = 0;
  uVar3 = uVar3 & 3;
  *pbVar10 = *pbVar10 | 0xd0;
  uVar4 = 2;
  if (uVar3 < 2) {
    uVar4 = uVar3;
  }
  uVar1 = (ushort)uVar7;
  uVar5 = uVar1 & 3;
  pbVar10[1] = 0;
  FUN_ram_0003eb00(pbVar10 + 4,param_2 + 0x81,6);
  FUN_ram_0003eb00(pbVar10 + 10,param_2 + 0x8a,6);
  FUN_ram_0003eb00(pbVar10 + 0x10,param_2 + 0x90,6);
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar10[0x16] = 0;
  pbVar10[0x17] = 0;
  if (*(int *)(param_2 + 0xc) == 1) {
    pbVar10[0x18] = 0x15;
    pbVar10[0x19] = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x54);
    pbVar10[0x18] = 7;
    if (iVar2 == 0) {
      pbVar10[0x19] = 5;
    }
    else {
      pbVar10[0x19] = 6;
    }
  }
  *(undefined4 *)(param_2 + 0x18) = 0x1a;
  if (*(int *)(param_2 + 0xc) == 1) {
    if (*(char *)(param_2 + 0x7c) != '\0') {
      if (*(char *)(param_2 + 0x7c) == '\x02') {
        uVar6 = 0x80;
      }
      else {
        uVar6 = 0x40;
      }
    }
    uVar6 = uVar1 & 3 | (ushort)((uVar8 & 3) << 3) | uVar6 | (ushort)(uVar4 << 8);
    if (*(int *)(param_2 + 0x54) != 0) {
      uVar6 = uVar6 | 0x400;
    }
    pbVar10[0x1a] = (byte)uVar6;
    pbVar10[0x1b] = (byte)(uVar6 >> 8);
    pbVar11 = pbVar10 + 0x1d;
    pbVar10[0x1c] = 0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 3;
  }
  else {
    if (*(int *)(param_2 + 8) == 3) {
      uVar5 = 1;
    }
    uVar5 = (ushort)((uVar8 & 3) << 2) | uVar5;
    if (*(char *)(param_2 + 0x7c) != '\0') {
      uVar5 = uVar5 | 0x10;
    }
    uVar6 = (ushort)((uVar9 & 3) << 7) | (ushort)(uVar4 << 5) | uVar5;
    if (*(int *)(param_2 + 0x54) != 0) {
      uVar6 = (ushort)((*(uint *)(param_2 + 0x58) & 3) << 9) | uVar6;
    }
    pbVar10[0x1a] = (byte)uVar6;
    pbVar11 = pbVar10 + 0x1c;
    pbVar10[0x1b] = (byte)(uVar6 >> 8);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 6;
  }
  *pbVar11 = 0xad;
  pbVar11[1] = 0xba;
  pbVar11[2] = 0xed;
  pbVar11[3] = 0xfe;
  return pbVar11 + 4;
}


