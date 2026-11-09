/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033868 */

void FUN_ram_00033868(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6
                     ,uint param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int local_54 [4];
  int local_44 [4];
  uint uStack_34;
  short local_30 [2];
  
  FUN_ram_0004070c(local_54,0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar9 = 0;
  iVar7 = 0;
  do {
    piVar6 = (int *)(uVar9 * 4 + param_1);
    if ((param_5 < (int)(*(byte *)(&DAT_ram_00054d7c + uVar9) - 1)) ||
       (param_6 < (int)(*(byte *)(&DAT_ram_00054d94 + uVar9) - 1))) {
      *piVar6 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    uVar9 = uVar9 + 1 & 0xff;
    if (iVar5 < iVar7) {
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
  } while (uVar9 < 6);
  *(int *)(param_1 + 0x18) = iVar5;
  uVar9 = 0;
  if (-1 < param_5) {
    do {
      uVar4 = FUN_ram_0003bb34((*(int *)(param_3 + uVar9 * 4) >> 8) + 1,10);
      uVar1 = (ulonglong)uVar4 * (ulonglong)(param_7 & 0xffff);
      uVar2 = (longlong)(int)uVar4 * (longlong)(int)(param_7 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar4 = uVar9 + 1 & 0xff;
      local_54[uVar9] = (int)uVar3 >> 1;
      uVar9 = uVar4;
    } while ((int)uVar4 <= param_5);
  }
  uVar9 = 0;
  if (-1 < param_6) {
    do {
      uVar4 = FUN_ram_0003bb34((*(int *)(param_4 + uVar9 * 4) >> 8) + 1,10);
      uVar1 = (ulonglong)uVar4 * (ulonglong)(param_7 & 0xffff);
      uVar2 = (longlong)(int)uVar4 * (longlong)(int)(param_7 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar4 = uVar9 + 1 & 0xff;
      local_44[uVar9] = (int)uVar3 >> 1;
      uVar9 = uVar4;
    } while ((int)uVar4 <= param_6);
  }
  uVar9 = 0;
  do {
    uVar8 = (uint)*(byte *)(&DAT_ram_00054d7c + uVar9);
    uVar4 = (uint)*(byte *)(&DAT_ram_00054d94 + uVar9);
    piVar6 = (int *)(param_1 + uVar9 * 4);
    piVar6[7] = 0;
    iVar7 = 0;
    if (((int)(uVar8 - 1) <= param_5) && ((int)(uVar4 - 1) <= param_6)) {
      uVar10 = 0;
      if (uVar8 != 0) {
        do {
          piVar11 = local_54 + uVar10;
          uVar10 = uVar10 + 1 & 0xff;
          iVar7 = *piVar11 + iVar7;
        } while (uVar10 < uVar8);
        piVar6[7] = iVar7;
      }
      uVar8 = 0;
      if (uVar4 != 0) {
        do {
          piVar11 = local_44 + uVar8;
          uVar8 = uVar8 + 1 & 0xff;
          iVar7 = *piVar11 + iVar7;
        } while (uVar8 < uVar4);
        piVar6[7] = iVar7;
      }
      piVar11 = (int *)(param_1 + 0x38 + uVar9 * 4);
      uVar8 = *piVar6 - iVar7 >> 10;
      FUN_ram_000358a8(iVar7,10,&uStack_34,local_30);
      uVar4 = (uint)(short)(local_30[0] + -6);
      uVar1 = (ulonglong)uStack_34 * (ulonglong)(uVar8 & 0xffff);
      uVar2 = (longlong)(int)uStack_34 * (longlong)(int)(uVar8 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      if ((int)uVar4 < 1) {
        *piVar11 = (int)uVar3 << (-uVar4 & 0x1f);
      }
      else {
        *piVar11 = (1 << (uVar4 - 1 & 0x1f)) + (int)uVar3 >> (uVar4 & 0x1f);
      }
    }
    uVar9 = uVar9 + 1 & 0xff;
  } while (uVar9 < 6);
  iVar7 = *(int *)(param_1 + 0x34);
  uVar9 = 0;
  if (-1 < param_5) {
    do {
      uVar4 = uVar9 + 1 & 0xff;
      iVar7 = iVar7 + local_54[uVar9];
      uVar9 = uVar4;
    } while ((int)uVar4 <= param_5);
    *(int *)(param_1 + 0x34) = iVar7;
  }
  if (-1 < param_6) {
    iVar7 = *(int *)(param_1 + 0x34);
    uVar9 = 0;
    do {
      uVar4 = uVar9 + 1 & 0xff;
      iVar7 = iVar7 + local_44[uVar9];
      uVar9 = uVar4;
    } while ((int)uVar4 <= param_6);
    *(int *)(param_1 + 0x34) = iVar7;
  }
  uVar4 = *(int *)(param_1 + 0x18) - iVar7 >> 10;
  FUN_ram_000358a8(iVar7,10,&uStack_34,local_30);
  uVar9 = (uint)(short)(local_30[0] + -6);
  uVar1 = (ulonglong)uStack_34 * (ulonglong)(uVar4 & 0xffff);
  uVar2 = (longlong)(int)uStack_34 * (longlong)(int)(uVar4 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  if ((int)uVar9 < 1) {
    *(int *)(param_1 + 0x50) = (int)uVar3 << (-uVar9 & 0x1f);
  }
  else {
    *(int *)(param_1 + 0x50) = (1 << (uVar9 - 1 & 0x1f)) + (int)uVar3 >> (uVar9 & 0x1f);
  }
  if (*(int *)(param_1 + 0x58) == 6) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x58) * 4 + param_1 + 0x38)
    ;
  }
  return;
}


