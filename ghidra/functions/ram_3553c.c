/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003553c */

void FUN_ram_0003553c(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_18 [6];
  
  local_18[0] = *(int *)(param_3 + 0xc) + 8;
  local_18[1] = *(int *)(param_3 + 0x10) + 8;
  local_18[2] = *(int *)(param_3 + 0x14) + 8;
  local_18[3] = *(int *)(param_3 + 0x18) + 8;
  local_18[4] = *(int *)(param_3 + 0x1c) + 8;
  iVar12 = 0;
  local_18[5] = *(int *)(param_3 + 0x20) + 8;
  do {
    iVar10 = 0;
    iVar11 = local_18[iVar12];
    uVar6 = (&DAT_ram_00054d94)[iVar12] + (&DAT_ram_00054d7c)[iVar12];
    do {
      uVar5 = iVar10 * 2 + param_2 * 8;
      uVar1 = (ulonglong)uVar5 * (ulonglong)(uVar6 & 0xffff);
      uVar2 = (longlong)(int)uVar5 * (longlong)(int)(uVar6 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      puVar7 = (undefined1 *)((int)uVar3 + iVar11);
      iVar9 = 0;
      if (0 < (int)uVar6) {
        do {
          iVar4 = (iVar10 * 4 + iVar9) * 4;
          iVar9 = iVar9 + 1;
          puVar8 = puVar7 + 1;
          *puVar7 = (char)*(undefined2 *)(param_1 + iVar4);
          puVar7 = puVar7 + 2;
          *puVar8 = (char)*(undefined2 *)(iVar4 + param_1 + 2);
        } while (iVar9 < (int)uVar6);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 6);
  return;
}


