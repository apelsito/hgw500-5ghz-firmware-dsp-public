/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00037f30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00037f30(int param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_b4;
  short local_a8;
  undefined2 local_a6;
  ushort auStack_a4 [32];
  int aiStack_64 [4];
  int iStack_54;
  int aiStack_50 [4];
  int iStack_40;
  int local_3c;
  
  aiStack_50[0] = *(int *)(param_4 + 0xc) + 8;
  aiStack_50[1] = *(int *)(param_4 + 0x10) + 8;
  aiStack_50[2] = *(int *)(param_4 + 0x14) + 8;
  aiStack_50[3] = *(int *)(param_4 + 0x18) + 8;
  iStack_40 = *(int *)(param_4 + 0x1c) + 8;
  uStack_b4 = 0;
  local_3c = *(int *)(param_4 + 0x20) + 8;
  do {
    uVar13 = (uint)*(byte *)(&DAT_ram_00054d7c + uStack_b4);
    uVar14 = (uint)*(byte *)(&DAT_ram_00054d94 + uStack_b4);
    uVar10 = uVar14 + uVar13 & 0xff;
    if (((int)uVar13 <= param_2 + 1) && ((int)uVar14 <= param_3 + 1)) {
      iVar6 = aiStack_50[uStack_b4];
      FUN_ram_0004070c(aiStack_64,0x10);
      iVar12 = 0;
      do {
        iVar11 = 0;
        do {
          iVar9 = iVar12 * 0x40 + param_1 + iVar11 * 0x10;
          FUN_ram_0003ec60(auStack_a4 + iVar11 * 8,iVar9,uVar13 * 4);
          FUN_ram_0003ec60(auStack_a4 + uVar13 * 2 + iVar11 * 8,iVar9 + param_2 * 4 + 4,uVar14 << 2)
          ;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 4);
        iVar11 = 0;
        do {
          iVar9 = 0;
          if (uVar10 != 0) {
            iVar8 = aiStack_64[iVar11];
            do {
              uVar7 = (uint)(short)auStack_a4[iVar11 * 8 + iVar9 * 2];
              uVar1 = (ulonglong)uVar7 * (ulonglong)auStack_a4[iVar11 * 8 + iVar9 * 2];
              uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              iVar5 = iVar9 * 2;
              uVar7 = (uint)(short)auStack_a4[iVar11 * 8 + iVar5 + 1];
              iVar9 = iVar9 + 1;
              uVar1 = (ulonglong)uVar7 * (ulonglong)auStack_a4[iVar11 * 8 + iVar5 + 1];
              uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              iVar8 = iVar8 + ((int)uVar3 + 0x200 >> 10) + ((int)uVar4 + 0x200 >> 10);
            } while (iVar9 < (int)uVar10);
            aiStack_64[iVar11] = iVar8;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 4);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x80);
      iVar12 = aiStack_64[0];
      iVar11 = 1;
      do {
        iVar8 = iVar11 + 1;
        iVar9 = aiStack_64[iVar11];
        if (aiStack_64[iVar11] < iVar12) {
          iVar9 = iVar12;
        }
        iVar12 = iVar9;
        iVar11 = iVar8;
      } while (iVar8 < 4);
      FUN_ram_00034784(iVar9,&local_a6);
      FUN_ram_000358a8(local_a6,9,&iStack_54,&local_a8);
      uVar10 = (uint)local_a8;
      if ((int)uVar10 < 1) {
        iStack_54 = iStack_54 * 0x2c2e << (-uVar10 & 0x1f);
      }
      else {
        iStack_54 = iStack_54 * 0x2c2e + (1 << (uVar10 - 1 & 0x1f)) >> (uVar10 & 0x1f);
      }
      FUN_ram_00037b9c(param_1,iStack_54,iVar6,param_2,param_3,uVar13,uVar14);
    }
    uStack_b4 = uStack_b4 + 1 & 0xff;
  } while (uStack_b4 < 6);
  *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
       *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xffffbfff;
  return;
}


