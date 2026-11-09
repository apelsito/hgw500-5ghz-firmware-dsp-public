/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002d564 */

void FUN_ram_0002d564(int param_1,short *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ushort local_68 [18];
  undefined1 auStack_44 [2];
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  
  FUN_ram_0002c248((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10),auStack_44,&local_36);
  FUN_ram_0002c248((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),auStack_44,
                   &local_34);
  FUN_ram_0002c248((int)*(short *)(param_1 + 0x20),(int)*(short *)(param_1 + 0x22),auStack_44,
                   &local_32);
  iVar15 = 0;
  do {
    iVar13 = iVar15 * 4;
    uVar1 = *(ushort *)(param_1 + iVar13);
    uVar10 = FUN_ram_0002c4a8((int)-local_36);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13 + 2);
    uVar10 = FUN_ram_0002c514((int)-local_36);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13);
    uVar10 = FUN_ram_0002c514((int)-local_36);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13 + 2);
    uVar10 = FUN_ram_0002c4a8((int)-local_36);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_68[iVar15 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar13 = iVar15 + 1;
    local_68[iVar15 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar15 = iVar13;
  } while (iVar13 < 3);
  iVar15 = 3;
  do {
    iVar13 = iVar15 * 4;
    uVar1 = *(ushort *)(param_1 + iVar13);
    uVar10 = FUN_ram_0002c4a8((int)-local_34);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13 + 2);
    uVar10 = FUN_ram_0002c514((int)-local_34);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13);
    uVar10 = FUN_ram_0002c514((int)-local_34);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13 + 2);
    uVar10 = FUN_ram_0002c4a8((int)-local_34);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_68[iVar15 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar13 = iVar15 + 1;
    local_68[iVar15 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar15 = iVar13;
  } while (iVar13 < 6);
  iVar15 = 6;
  do {
    iVar13 = iVar15 * 4;
    uVar1 = *(ushort *)(param_1 + iVar13);
    uVar10 = FUN_ram_0002c4a8((int)-local_32);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13 + 2);
    uVar10 = FUN_ram_0002c514((int)-local_32);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13);
    uVar10 = FUN_ram_0002c514((int)-local_32);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar13 + 2);
    uVar10 = FUN_ram_0002c4a8((int)-local_32);
    uVar2 = (ulonglong)uVar10 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_68[iVar15 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar13 = iVar15 + 1;
    local_68[iVar15 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar15 = iVar13;
  } while (iVar13 < 9);
  FUN_ram_0002c248((int)(short)local_68[0],(int)(short)local_68[1],auStack_44,&local_42);
  FUN_ram_0002c248((int)(short)local_68[2],(int)(short)local_68[3],auStack_44,&local_40);
  uVar10 = FUN_ram_0002c4a8((int)-local_42);
  uVar2 = (ulonglong)uVar10 * (ulonglong)local_68[0];
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)local_68[0] & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_42);
  uVar2 = (ulonglong)uVar10 * (ulonglong)local_68[1];
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)local_68[1] & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar11 = ((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf;
  uVar16 = (uint)(short)uVar11;
  uVar10 = FUN_ram_0002c4a8((int)-local_40);
  uVar2 = (ulonglong)uVar10 * (ulonglong)local_68[2];
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)local_68[2] & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_40);
  uVar2 = (ulonglong)uVar10 * (ulonglong)local_68[3];
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)local_68[3] & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = ((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf;
  uVar10 = FUN_ram_0002c4a8((int)-local_42);
  uVar17 = (uint)(short)local_68[6];
  uVar19 = (uint)(short)uVar12;
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_42);
  uVar14 = (uint)(short)local_68[7];
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_42);
  uVar2 = (ulonglong)uVar10 * (ulonglong)local_68[6];
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar17 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c4a8((int)-local_42);
  uVar2 = (ulonglong)uVar10 * (ulonglong)local_68[7];
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar14 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar17 = ((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf;
  uVar14 = (uint)(short)uVar17;
  FUN_ram_0002c4a8((int)-local_42);
  FUN_ram_0002c514((int)-local_42);
  FUN_ram_0002c514((int)-local_42);
  FUN_ram_0002c4a8((int)-local_42);
  uVar10 = FUN_ram_0002c4a8((int)-local_40);
  uVar20 = (uint)(short)local_68[8];
  uVar21 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_40);
  uVar18 = (uint)(short)local_68[9];
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_40);
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c4a8((int)-local_40);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar18 = (uint)(short)(((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf);
  FUN_ram_0002c4a8((int)-local_40);
  FUN_ram_0002c514((int)-local_40);
  FUN_ram_0002c514((int)-local_40);
  FUN_ram_0002c4a8((int)-local_40);
  FUN_ram_0002c248(uVar16,uVar19,auStack_44,&local_3c);
  uVar10 = FUN_ram_0002c4a8((int)local_3c);
  uVar20 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar10 * (ulonglong)(uVar11 & 0xffff);
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar16 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)local_3c);
  uVar2 = (ulonglong)uVar10 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar19 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c4a8((int)local_3c);
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)local_3c);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c4a8((int)local_3c);
  FUN_ram_0002c514((int)local_3c);
  uVar10 = FUN_ram_0002c514((int)-local_3c);
  uVar2 = (ulonglong)uVar10 * (ulonglong)(uVar17 & 0xffff);
  uVar3 = (longlong)(int)uVar10 * (longlong)(int)(uVar14 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c4a8((int)local_3c);
  uVar11 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_3c);
  uVar2 = (ulonglong)uVar21 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar21 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c4a8((int)local_3c);
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar16 = (uint)(short)((int)uVar8 + (int)uVar6 + 0x4000 >> 0xf);
  FUN_ram_0002c514((int)-local_3c);
  FUN_ram_0002c4a8((int)local_3c);
  FUN_ram_0002c514((int)-local_3c);
  FUN_ram_0002c4a8((int)local_3c);
  FUN_ram_0002c4a8((int)local_3c);
  FUN_ram_0002c514((int)local_3c);
  FUN_ram_0002c4a8((int)local_3c);
  FUN_ram_0002c514((int)local_3c);
  FUN_ram_0002c248((int)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf),(int)(short)local_68[4],
                   auStack_44,&local_3a);
  FUN_ram_0002c4a8((int)local_3a);
  FUN_ram_0002c514((int)local_3a);
  FUN_ram_0002c4a8((int)local_3a);
  FUN_ram_0002c514((int)local_3a);
  FUN_ram_0002c4a8((int)local_3a);
  FUN_ram_0002c514((int)local_3a);
  uVar10 = FUN_ram_0002c514((int)-local_3a);
  uVar2 = (ulonglong)uVar11 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar11 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c4a8((int)local_3a);
  uVar11 = (uint)(short)((int)uVar7 + (int)uVar9 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)(uint)(int)(short)local_68[10] * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)(short)local_68[10] * (longlong)(int)(uVar10 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c248(uVar16,uVar11,auStack_44,&local_3e);
  uVar10 = FUN_ram_0002c4a8((int)-local_3e);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar10 = FUN_ram_0002c514((int)-local_3e);
  uVar2 = (ulonglong)uVar11 * (ulonglong)(uVar10 & 0xffff);
  uVar3 = (longlong)(int)uVar11 * (longlong)(int)(uVar10 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c248((int)(short)(((int)uVar6 - (int)uVar7) + 0x4000 >> 0xf),
                   (int)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf),auStack_44,&local_38);
  param_2[9] = 0;
  *param_2 = local_42;
  param_2[1] = local_40;
  param_2[5] = local_38;
  param_2[2] = local_3c;
  param_2[10] = 0;
  param_2[3] = local_3a;
  param_2[0xb] = 0;
  param_2[4] = local_3e;
  param_2[0xc] = 0;
  param_2[6] = local_36;
  param_2[0xd] = 0;
  param_2[7] = local_34;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = local_32;
  return;
}


