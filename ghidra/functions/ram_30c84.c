/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00030c84 */

void FUN_ram_00030c84(int param_1,short *param_2,uint param_3,uint param_4,undefined4 param_5,
                     int param_6,int param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = DAT_ram_00054d14;
  iVar8 = (param_3 & 7) * 8;
  iVar14 = 0;
  local_10 = DAT_ram_00054d18;
  do {
    iVar13 = *(int *)(param_1 + iVar14 * 4);
    uVar12 = 0;
    if (param_7 == -1) {
      if (0 < param_6) {
        do {
          uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
          uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar11 = *(uint *)(iVar13 + (int)uVar3 * 4);
          iVar9 = uVar12 * 2;
          uVar12 = uVar12 + 1;
          *(ushort *)((int)&local_14 + iVar9) = -(((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800);
          *(ushort *)((int)&local_10 + iVar9) = -(((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800);
        } while ((int)uVar12 < param_6);
      }
    }
    else if (0 < param_6) {
      do {
        uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = *(uint *)(iVar13 + (int)uVar3 * 4);
        iVar9 = uVar12 * 2;
        uVar12 = uVar12 + 1;
        *(ushort *)((int)&local_14 + iVar9) = ((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800;
        *(ushort *)((int)&local_10 + iVar9) = ((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800;
      } while ((int)uVar12 < param_6);
    }
    iVar14 = iVar14 + 1;
    *param_2 = (short)local_14 - local_14._2_2_;
    uVar10 = (short)local_14 + local_14._2_2_;
    param_2[1] = (short)local_10 - local_10._2_2_;
    uVar7 = (short)local_10 + local_10._2_2_;
    uVar12 = (uint)*(short *)(&DAT_ram_0005ac9c + iVar8);
    uVar1 = (ulonglong)uVar12 * (ulonglong)uVar10;
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar10 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar8);
    uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
    uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = (ulonglong)uVar11 * (ulonglong)uVar10;
    uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar10 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    param_2[2] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
    param_2[3] = (short)((int)uVar5 + (int)uVar6 >> 0xf);
    param_2 = param_2 + 4;
  } while (iVar14 < 4);
  return;
}


