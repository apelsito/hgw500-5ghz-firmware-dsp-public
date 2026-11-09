/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003c4d8 */

void FUN_ram_0003c4d8(undefined4 param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  
  lVar14 = FUN_ram_0003cd1c();
  iVar6 = FUN_ram_0003c248(param_1,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
  if (-1 < iVar6) {
    iVar7 = FUN_ram_0004046c((int)(lVar14 - *(longlong *)(&DAT_ram_000b8188 + iVar6 * 5)),
                             (int)((ulonglong)
                                   (lVar14 - *(longlong *)(&DAT_ram_000b8188 + iVar6 * 5)) >> 0x20),
                             0xbebc,0);
    uVar13 = (uint)(iVar7 >> 9) >> 0x16;
    uVar8 = iVar7 + uVar13;
    uVar11 = 0x800 >> ((int)uVar8 >> 10 & 0x1fU);
    uVar8 = 0x7ff - ((uVar8 & 0x3ff) - uVar13);
    uVar2 = (ulonglong)uVar8 * (ulonglong)(uVar11 & 0xffff);
    uVar3 = (longlong)(int)uVar8 * (longlong)(int)(uVar11 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar8 = (uint)uVar4;
    uVar2 = (longlong)(int)(uVar8 & 0xffff) * -0x7feffdff;
    uVar3 = (longlong)(int)(uVar8 & 0xffff0000) * -0x7feffdff;
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = (longlong)uVar2 >> 0x3f ^ 0x7fffffffffffffff;
    }
    uVar8 = ((int)(uVar8 + (int)(uVar4 >> 0x20)) >> 10) - ((int)uVar8 >> 0x1f);
    if ((int)uVar8 < 0x800) {
      uVar11 = 0;
      do {
        iVar9 = uVar11 * 2;
        uVar1 = *(ushort *)(param_2 + iVar9);
        uVar13 = (uint)(short)(&DAT_ram_000b817c)[iVar6 * 10 + uVar11];
        iVar7 = iVar6 * 10 + uVar11;
        uVar11 = uVar11 + 1;
        uVar2 = (ulonglong)(0x800 - uVar8) * (ulonglong)uVar1;
        uVar3 = (longlong)(int)(0x800 - uVar8) * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
        uVar4 = uVar2 + uVar3;
        if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar2 = (ulonglong)uVar13 * (ulonglong)(uVar8 & 0xffff);
        uVar3 = (longlong)(int)uVar13 * (longlong)(int)(uVar8 & 0xffff0000);
        uVar5 = uVar2 + uVar3;
        if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        iVar12 = (int)uVar4 + (int)uVar5;
        if (iVar12 < 0) {
          iVar12 = iVar12 + 0x7ff;
        }
        uVar10 = (undefined2)(iVar12 >> 0xb);
        *(undefined2 *)(iVar9 + param_2) = uVar10;
        (&DAT_ram_000b817c)[iVar7] = uVar10;
      } while (uVar11 <= param_3);
      *(longlong *)(&DAT_ram_000b8188 + iVar6 * 5) = lVar14;
    }
    FUN_ram_0003c428();
  }
  return;
}


