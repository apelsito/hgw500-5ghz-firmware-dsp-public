/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000347fc */

void FUN_ram_000347fc(int param_1,int param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_28;
  undefined2 local_24;
  short local_22;
  
  iVar12 = 0;
  iVar13 = 0;
  do {
    iVar6 = 0;
    iVar11 = 0;
    do {
      iVar7 = (iVar11 * 4 + iVar13) * 4;
      uVar1 = *(ushort *)(param_1 + iVar7);
      uVar10 = (uint)(short)uVar1;
      iVar11 = iVar11 + 1;
      uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
      uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar10 & 0xffff0000);
      uVar4 = uVar2 + uVar3;
      if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      uVar1 = *(ushort *)(iVar7 + param_1 + 2);
      uVar10 = (uint)(short)uVar1;
      uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
      uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar10 & 0xffff0000);
      uVar5 = uVar2 + uVar3;
      if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
        uVar5 = 0x7fffffffffffffff;
      }
      iVar6 = iVar6 + ((int)uVar4 + 1 >> 2) + ((int)uVar5 + 1 >> 2);
    } while (iVar11 < 4);
    FUN_ram_00034784(iVar6,&local_24);
    FUN_ram_000358a8(local_24,0xe,&local_28,&local_22);
    uVar10 = (uint)(short)(local_22 + 1);
    if (0 < (int)uVar10) {
      iVar12 = 1 << (uVar10 - 1 & 0x1f);
    }
    iVar6 = 0;
    do {
      iVar11 = (iVar6 * 4 + iVar13) * 4;
      uVar2 = (ulonglong)local_28 * (ulonglong)*(ushort *)(param_1 + iVar11);
      uVar3 = (longlong)(int)local_28 *
              (longlong)(int)((int)(short)*(ushort *)(param_1 + iVar11) & 0xffff0000);
      uVar4 = uVar2 + uVar3;
      if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      uVar1 = *(ushort *)(param_1 + iVar11 + 2);
      uVar2 = (ulonglong)local_28 * (ulonglong)uVar1;
      uVar3 = (longlong)(int)local_28 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
      uVar5 = uVar2 + uVar3;
      if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
        uVar5 = 0x7fffffffffffffff;
      }
      puVar8 = (undefined2 *)(iVar11 + param_2);
      if ((int)uVar10 < 1) {
        *puVar8 = (short)((int)uVar4 << (-uVar10 & 0x1f));
        uVar9 = (undefined2)((int)uVar5 << (-uVar10 & 0x1f));
      }
      else {
        *puVar8 = (short)((int)uVar4 + iVar12 >> (uVar10 & 0x1f));
        uVar9 = (undefined2)((int)uVar5 + iVar12 >> (uVar10 & 0x1f));
      }
      iVar6 = iVar6 + 1;
      puVar8[1] = uVar9;
    } while (iVar6 < 4);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  iVar12 = 0;
  do {
    iVar13 = 0;
    do {
      iVar6 = (iVar12 * 4 + iVar13) * 4;
      iVar13 = iVar13 + 1;
      *(undefined2 *)(param_1 + iVar6) = (short)(*(short *)(param_2 + iVar6) + 0x40 >> 7);
      ((undefined2 *)(param_1 + iVar6))[1] = (short)(*(short *)(iVar6 + param_2 + 2) + 0x40 >> 7);
    } while (iVar13 < 4);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  return;
}


