/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003cf18 */

void FUN_ram_0003cf18(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint auStack_190 [8];
  uint auStack_170 [5];
  uint local_15c [83];
  
  iVar7 = 0;
  do {
    iVar8 = iVar7 * 4;
    iVar6 = iVar7 + 1;
    local_15c[iVar7 + 3] =
         (uint)*(byte *)((int)param_1 + iVar8 + 0x21) |
         (uint)*(byte *)((int)param_1 + iVar8 + 0x1e) << 0x18 |
         (uint)*(byte *)((int)param_1 + iVar8 + 0x1f) << 0x10 | (uint)(byte)param_1[iVar7 + 8] << 8;
    iVar7 = iVar6;
  } while (iVar6 < 0x10);
  iVar7 = 0x10;
  do {
    iVar6 = iVar7 + 1;
    uVar1 = auStack_190[iVar7] ^ auStack_190[iVar7 + 2] ^ auStack_170[iVar7] ^ local_15c[iVar7];
    local_15c[iVar7 + 3] = uVar1 << 1 | uVar1 >> 0x1f;
    iVar7 = iVar6;
  } while (iVar6 < 0x50);
  iVar7 = 0;
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar4 = param_1[1];
  uVar9 = *param_1;
  uVar10 = param_1[4];
  do {
    uVar5 = uVar9;
    uVar3 = uVar2;
    uVar11 = uVar1;
    iVar6 = iVar7 + 3;
    iVar7 = iVar7 + 1;
    uVar9 = local_15c[iVar6] +
            uVar10 + (uVar5 << 5 | uVar5 >> 0x1b) + (uVar3 & uVar4 | uVar11 & ~uVar4) +
            DAT_ram_00054fd0;
    uVar2 = uVar4 << 0x1e | uVar4 >> 2;
    uVar1 = uVar3;
    uVar4 = uVar5;
    uVar10 = uVar11;
  } while (iVar7 < 0x14);
  iVar7 = 0x14;
  do {
    uVar4 = uVar9;
    uVar1 = uVar2;
    uVar10 = uVar3;
    iVar6 = iVar7 + 3;
    iVar7 = iVar7 + 1;
    uVar9 = local_15c[iVar6] + uVar11 + (uVar4 << 5 | uVar4 >> 0x1b) + (uVar1 ^ uVar5 ^ uVar10) +
            DAT_ram_00054fd4;
    uVar2 = uVar5 << 0x1e | uVar5 >> 2;
    uVar3 = uVar1;
    uVar5 = uVar4;
    uVar11 = uVar10;
  } while (iVar7 < 0x28);
  iVar7 = 0x28;
  do {
    uVar5 = uVar9;
    uVar3 = uVar2;
    uVar11 = uVar1;
    iVar6 = iVar7 + 3;
    iVar7 = iVar7 + 1;
    uVar9 = local_15c[iVar6] +
            uVar10 + (uVar5 << 5 | uVar5 >> 0x1b) + (uVar11 & uVar3 | uVar4 & (uVar11 | uVar3)) +
            DAT_ram_00054fd8;
    uVar2 = uVar4 << 0x1e | uVar4 >> 2;
    uVar1 = uVar3;
    uVar4 = uVar5;
    uVar10 = uVar11;
  } while (iVar7 < 0x3c);
  iVar7 = 0x3c;
  do {
    uVar10 = uVar9;
    uVar4 = uVar2;
    uVar1 = uVar3;
    iVar6 = iVar7 + 3;
    iVar7 = iVar7 + 1;
    uVar9 = local_15c[iVar6] + uVar11 + (uVar10 << 5 | uVar10 >> 0x1b) + (uVar4 ^ uVar5 ^ uVar1) +
            DAT_ram_00054fdc;
    uVar2 = uVar5 << 0x1e | uVar5 >> 2;
    uVar3 = uVar4;
    uVar5 = uVar10;
    uVar11 = uVar1;
  } while (iVar7 < 0x50);
  *param_1 = uVar9 + *param_1;
  param_1[1] = uVar10 + param_1[1];
  param_1[2] = param_1[2] + uVar2;
  param_1[3] = uVar4 + param_1[3];
  param_1[4] = param_1[4] + uVar1;
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}


