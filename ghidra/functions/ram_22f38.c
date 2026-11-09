/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00022f38 */

void FUN_ram_00022f38(int param_1,int param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [48];
  char local_58 [4];
  char local_54 [4];
  undefined1 auStack_50 [32];
  
  puVar18 = auStack_a8;
  FUN_ram_0003ec60(auStack_a8,&DAT_ram_00054920,0x20);
  FUN_ram_0003ec60(auStack_88,&DAT_ram_00054940,0x30);
  if ((param_4 != 2) && (puVar18 = (undefined1 *)0x0, param_4 == 3)) {
    puVar18 = auStack_88;
  }
  iVar17 = 0;
  if (0 < param_2) {
    do {
      FUN_ram_0004070c(auStack_50,0x20);
      uVar1 = (ulonglong)param_3 * (ulonglong)(iVar17 << 3 & 0xffff);
      uVar2 = (longlong)(int)param_3 * (longlong)(int)(iVar17 << 3 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      iVar7 = (int)uVar3 + param_1;
      uVar20 = 0;
      if (0 < (int)param_3) {
        do {
          iVar15 = 0;
          if (0 < (int)param_4) {
            uVar1 = (ulonglong)param_3 * (ulonglong)(uVar20 & 0xffff);
            uVar2 = (longlong)(int)param_3 * (longlong)(int)(uVar20 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            do {
              iVar13 = iVar15 * 2;
              local_58[0] = *(char *)(iVar7 + iVar13);
              iVar9 = param_3 * 2 + iVar13;
              local_54[0] = *(char *)(iVar7 + iVar13 + 1);
              local_58[1] = *(undefined1 *)(iVar7 + iVar9);
              iVar8 = param_3 * 4 + iVar13;
              local_54[1] = *(undefined1 *)(iVar9 + iVar7 + 1);
              local_58[2] = *(undefined1 *)(iVar7 + iVar8);
              iVar10 = 0;
              iVar9 = 0;
              local_54[2] = *(undefined1 *)(iVar8 + iVar7 + 1);
              iVar8 = 0;
              if (0 < (int)param_4) {
                uVar1 = (ulonglong)uVar20 * (ulonglong)(param_4 & 0xffff);
                uVar2 = (longlong)(int)uVar20 * (longlong)(int)(param_4 & 0xffff0000);
                uVar4 = uVar1 + uVar2;
                if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                  uVar4 = 0x7fffffffffffffff;
                }
                do {
                  iVar11 = ((int)uVar4 + iVar8) * 2;
                  uVar14 = (uint)(byte)puVar18[iVar11];
                  uVar12 = (uint)(byte)puVar18[iVar11 + 1];
                  if (0x7f < uVar14) {
                    uVar14 = (uint)(short)((byte)puVar18[iVar11] - 0x100);
                  }
                  if (0x7f < uVar12) {
                    uVar12 = (uint)(short)((byte)puVar18[iVar11 + 1] - 0x100);
                  }
                  uVar16 = (uint)local_58[iVar8];
                  uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar14 & 0xffff);
                  uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar14 & 0xffff0000);
                  uVar5 = uVar1 + uVar2;
                  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                    uVar5 = 0x7fffffffffffffff;
                  }
                  uVar19 = (uint)local_54[iVar8];
                  iVar8 = iVar8 + 1;
                  uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
                  uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
                  uVar6 = uVar1 + uVar2;
                  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                    uVar6 = 0x7fffffffffffffff;
                  }
                  iVar10 = (iVar10 + (int)uVar5) - (int)uVar6;
                  uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar14 & 0xffff);
                  uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar14 & 0xffff0000);
                  uVar5 = uVar1 + uVar2;
                  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                    uVar5 = 0x7fffffffffffffff;
                  }
                  uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
                  uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
                  uVar6 = uVar1 + uVar2;
                  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                    uVar6 = 0x7fffffffffffffff;
                  }
                  iVar9 = iVar9 + (int)uVar5 + (int)uVar6;
                } while (iVar8 < (int)param_4);
              }
              iVar13 = iVar13 + (int)uVar3 * 2;
              iVar15 = iVar15 + 1;
              auStack_50[iVar13] = (char)(iVar10 + 0x40 >> 7);
              auStack_50[iVar13 + 1] = (char)(iVar9 + 0x40 >> 7);
            } while (iVar15 < (int)param_4);
          }
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)param_3);
      }
      FUN_ram_0003ec60(iVar7,auStack_50,0x20);
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_2);
  }
  return;
}


