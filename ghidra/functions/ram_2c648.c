/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002c648 */

void FUN_ram_0002c648(int param_1,short *param_2)

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
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ushort local_9c [32];
  undefined1 auStack_5c [2];
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c [4];
  
  FUN_ram_0002c248((int)*(short *)(param_1 + 0xc),(int)*(short *)(param_1 + 0xe),auStack_5c,
                   &local_5a);
  FUN_ram_0002c248((int)*(short *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0x1e),auStack_5c,
                   &local_58);
  FUN_ram_0002c248((int)*(short *)(param_1 + 0x2c),(int)*(short *)(param_1 + 0x2e),auStack_5c,
                   &local_56);
  FUN_ram_0002c248((int)*(short *)(param_1 + 0x3c),(int)*(short *)(param_1 + 0x3e),auStack_5c,
                   &local_54);
  iVar13 = 0;
  do {
    iVar22 = iVar13 * 4;
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c4a8((int)-local_5a);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c514((int)-local_5a);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c514((int)-local_5a);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c4a8((int)-local_5a);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_9c[iVar13 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar22 = iVar13 + 1;
    local_9c[iVar13 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar13 = iVar22;
  } while (iVar22 < 4);
  iVar13 = 4;
  do {
    iVar22 = iVar13 * 4;
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c4a8((int)-local_58);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c514((int)-local_58);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c514((int)-local_58);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c4a8((int)-local_58);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_9c[iVar13 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar22 = iVar13 + 1;
    local_9c[iVar13 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar13 = iVar22;
  } while (iVar22 < 8);
  iVar13 = 8;
  do {
    iVar22 = iVar13 * 4;
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c4a8((int)-local_56);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c514((int)-local_56);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c514((int)-local_56);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c4a8((int)-local_56);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_9c[iVar13 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar22 = iVar13 + 1;
    local_9c[iVar13 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar13 = iVar22;
  } while (iVar22 < 0xc);
  iVar13 = 0xc;
  do {
    iVar22 = iVar13 * 4;
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c4a8((int)-local_54);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c514((int)-local_54);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar5 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22);
    uVar12 = FUN_ram_0002c514((int)-local_54);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar6 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(param_1 + iVar22 + 2);
    uVar12 = FUN_ram_0002c4a8((int)-local_54);
    uVar2 = (ulonglong)uVar12 * (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar1 & 0xffff0000);
    uVar7 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    local_9c[iVar13 * 2] = (ushort)((uint)(((int)uVar4 - (int)uVar5) + 0x2000) >> 0x10);
    iVar22 = iVar13 + 1;
    local_9c[iVar13 * 2 + 1] = (ushort)((uint)((int)uVar6 + (int)uVar7 + 0x2000) >> 0x10);
    iVar13 = iVar22;
  } while (iVar22 < 0x10);
  FUN_ram_0002c248((int)(short)local_9c[0],(int)(short)local_9c[1],auStack_5c,&local_52);
  FUN_ram_0002c248((int)(short)local_9c[2],(int)(short)local_9c[3],auStack_5c,&local_50);
  uVar16 = (uint)(short)local_9c[4];
  uVar14 = (uint)(short)local_9c[5];
  FUN_ram_0002c248(uVar16,uVar14,auStack_5c,&local_4e);
  uVar12 = FUN_ram_0002c4a8((int)-local_52);
  uVar2 = (ulonglong)uVar12 * (ulonglong)local_9c[0];
  uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)local_9c[0] & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_52);
  uVar2 = (ulonglong)uVar12 * (ulonglong)local_9c[1];
  uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)local_9c[1] & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_50);
  uVar2 = (ulonglong)uVar12 * (ulonglong)local_9c[2];
  uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)local_9c[2] & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_50);
  uVar2 = (ulonglong)uVar12 * (ulonglong)local_9c[3];
  uVar3 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)local_9c[3] & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_4e);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4e);
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar14 = (uint)(short)(((int)uVar8 - (int)uVar9) + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c4a8((int)-local_52);
  uVar23 = (uint)(short)local_9c[8];
  uVar16 = (uint)(short)(((int)uVar6 - (int)uVar7) + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_52);
  uVar17 = (uint)(short)local_9c[9];
  uVar27 = (uint)(short)(((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_52);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_52);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_52);
  uVar23 = (uint)(short)local_9c[0x10];
  uVar17 = (uint)(short)((int)uVar5 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_52);
  uVar15 = (uint)(short)local_9c[0x11];
  uVar29 = (uint)(short)(((int)uVar6 - (int)uVar4) + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_52);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_52);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar23 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar24 = (uint)(short)(((int)uVar5 - (int)uVar4) + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c4a8((int)-local_50);
  uVar15 = (uint)(short)local_9c[10];
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_50);
  uVar18 = (uint)(short)local_9c[0xb];
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_50);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_50);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_50);
  uVar15 = (uint)(short)local_9c[0x12];
  uVar18 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_50);
  uVar19 = (uint)(short)local_9c[0x13];
  uVar25 = (uint)(short)(((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_50);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_50);
  uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar19 = (uint)(short)(((int)uVar6 - (int)uVar4) + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c4a8((int)-local_4e);
  uVar15 = (uint)(short)local_9c[0xc];
  uVar28 = (uint)(short)((int)uVar5 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4e);
  uVar20 = (uint)(short)local_9c[0xd];
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4e);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_4e);
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar15 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar20 = (uint)(short)(((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c4a8((int)-local_4e);
  uVar21 = (uint)(short)local_9c[0x14];
  uVar2 = (ulonglong)uVar21 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar21 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4e);
  uVar26 = (uint)(short)local_9c[0x15];
  uVar2 = (ulonglong)uVar26 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar26 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4e);
  uVar2 = (ulonglong)uVar21 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar21 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_4e);
  uVar2 = (ulonglong)uVar26 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar26 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar21 = (uint)(short)(((int)uVar4 - (int)uVar5) + 0x4000 >> 0xf);
  uVar26 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  FUN_ram_0002c248(uVar27,uVar16,auStack_5c,&local_46);
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar2 = (ulonglong)uVar27 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar27 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_46);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar16 = (uint)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar29 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar29 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_46);
  uVar2 = (ulonglong)uVar25 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar25 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_46);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_46);
  uVar2 = (ulonglong)uVar29 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar29 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar2 = (ulonglong)uVar25 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar25 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_46);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar10 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar10) < 0) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar17 = (uint)(short)((int)uVar8 + (int)uVar9 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar29 = (uint)(short)((int)uVar10 + (int)uVar8 + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c514((int)-local_46);
  uVar27 = (uint)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar24 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar24 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_46);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar2 = (ulonglong)uVar28 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar28 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar18 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar24 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar24 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_46);
  uVar24 = (uint)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_46);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_46);
  uVar23 = (uint)(short)((int)uVar8 + (int)uVar9 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar28 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar28 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar25 = (uint)(short)((int)uVar5 + (int)uVar7 + 0x4000 >> 0xf);
  FUN_ram_0002c248(uVar16,uVar14,auStack_5c,&local_44);
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar19 = (uint)(short)((int)uVar6 + (int)uVar4 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_44);
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar2 = (ulonglong)uVar27 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar27 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_44);
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c4a8((int)local_44);
  FUN_ram_0002c514((int)local_44);
  uVar12 = FUN_ram_0002c514((int)-local_44);
  uVar2 = (ulonglong)uVar27 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar27 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar2 = (ulonglong)uVar20 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar20 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_44);
  uVar2 = (ulonglong)uVar18 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar18 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar10 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar10) < 0) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar11 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar11) < 0) {
    uVar11 = 0x7fffffffffffffff;
  }
  uVar14 = (uint)(short)((int)uVar8 + (int)uVar9 + 0x4000 >> 0xf);
  uVar16 = (uint)(short)((int)uVar10 + (int)uVar11 + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c514((int)-local_44);
  uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar27 = (uint)(short)((int)uVar6 + (int)uVar7 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar21 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar21 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_44);
  uVar2 = (ulonglong)uVar25 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar25 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar2 = (ulonglong)uVar26 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar26 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_44);
  uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar10 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar10) < 0) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_44);
  uVar2 = (ulonglong)uVar21 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar21 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar11 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar11) < 0) {
    uVar11 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c4a8((int)local_44);
  FUN_ram_0002c514((int)local_44);
  uVar15 = (uint)(short)((int)uVar10 + (int)uVar11 + 0x4000 >> 0xf);
  FUN_ram_0002c248((int)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf),(int)(short)local_9c[6],
                   auStack_5c,&local_42);
  FUN_ram_0002c4a8((int)local_42);
  FUN_ram_0002c514((int)local_42);
  FUN_ram_0002c4a8((int)local_42);
  FUN_ram_0002c514((int)local_42);
  FUN_ram_0002c4a8((int)local_42);
  FUN_ram_0002c514((int)local_42);
  uVar12 = FUN_ram_0002c514((int)-local_42);
  uVar2 = (ulonglong)uVar27 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar27 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_42);
  uVar27 = (uint)(short)((int)uVar7 + (int)uVar9 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)(uint)(int)(short)local_9c[0xe] * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)(short)local_9c[0xe] * (longlong)(int)(uVar12 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_42);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_42);
  uVar2 = (ulonglong)(uint)(int)(short)local_9c[0x16] * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)(short)local_9c[0x16] * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c248(uVar17,uVar29,auStack_5c,&local_4c);
  FUN_ram_0002c248(uVar14,uVar16,auStack_5c,&local_4a);
  uVar12 = FUN_ram_0002c4a8((int)-local_4c);
  uVar15 = (uint)(short)((int)uVar7 + (int)uVar9 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4c);
  uVar17 = (uint)(short)((int)uVar8 + (int)uVar6 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar29 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar29 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_4c);
  uVar29 = (uint)(short)(((int)uVar7 - (int)uVar6) + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar24 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar24 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4c);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4c);
  uVar2 = (ulonglong)uVar24 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar24 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_4c);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar23 = (uint)(short)(((int)uVar6 - (int)uVar7) + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c4a8((int)-local_4a);
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4a);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar14 = (uint)(short)(((int)uVar6 - (int)uVar7) + 0x4000 >> 0xf);
  uVar12 = FUN_ram_0002c4a8((int)-local_4a);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4a);
  uVar2 = (ulonglong)uVar27 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar27 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_4a);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar10 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar10) < 0) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)-local_4a);
  uVar2 = (ulonglong)uVar27 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar27 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar11 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar11) < 0) {
    uVar11 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c248(uVar29,uVar14,auStack_5c,&local_40);
  uVar12 = FUN_ram_0002c4a8((int)local_40);
  uVar16 = (uint)(short)((int)uVar10 + (int)uVar11 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar29 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar29 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar10 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar10) < 0) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_40);
  uVar17 = (uint)(short)(((int)uVar6 - (int)uVar7) + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_40);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)local_40);
  uVar14 = (uint)(short)((int)uVar9 + (int)uVar8 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c4a8((int)local_40);
  FUN_ram_0002c514((int)local_40);
  uVar12 = FUN_ram_0002c514((int)-local_40);
  uVar2 = (ulonglong)uVar23 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar23 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar9 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_40);
  uVar23 = (int)uVar7 + (int)uVar8 + 0x4000 >> 0xf;
  uVar2 = (ulonglong)uVar17 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar17 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_40);
  uVar2 = (ulonglong)uVar14 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar14 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar8 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c4a8((int)local_40);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar11 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar11) < 0) {
    uVar11 = 0x7fffffffffffffff;
  }
  uVar12 = (uint)(short)((int)uVar9 + (int)uVar7 + 0x4000 >> 0xf);
  FUN_ram_0002c248((int)(short)((int)uVar10 + (int)uVar6 + 0x4000 >> 0xf),
                   (int)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf),auStack_5c,&local_3e);
  FUN_ram_0002c4a8((int)local_3e);
  FUN_ram_0002c514((int)local_3e);
  iVar13 = FUN_ram_0002c514((int)local_3e);
  uVar2 = (ulonglong)(uint)-iVar13 * (ulonglong)(uVar23 & 0xffff);
  uVar3 = (longlong)-iVar13 * (longlong)(int)((int)(short)uVar23 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar14 = FUN_ram_0002c4a8((int)local_3e);
  uVar16 = (uint)(short)((int)uVar8 + (int)uVar11 + 0x4000 >> 0xf);
  uVar2 = (ulonglong)uVar15 * (ulonglong)(uVar14 & 0xffff);
  uVar3 = (longlong)(int)uVar15 * (longlong)(int)(uVar14 & 0xffff0000);
  uVar5 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c248(uVar12,uVar16,auStack_5c,&local_48);
  uVar14 = FUN_ram_0002c4a8((int)-local_48);
  uVar2 = (ulonglong)uVar12 * (ulonglong)(uVar14 & 0xffff);
  uVar3 = (longlong)(int)uVar12 * (longlong)(int)(uVar14 & 0xffff0000);
  uVar6 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar12 = FUN_ram_0002c514((int)-local_48);
  uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
  uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar7 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar7) < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  FUN_ram_0002c248((int)(short)(((int)uVar6 - (int)uVar7) + 0x4000 >> 0xf),
                   (int)(short)((int)uVar4 + (int)uVar5 + 0x4000 >> 0xf),auStack_5c,local_3c);
  *param_2 = local_52;
  param_2[1] = local_50;
  param_2[2] = local_4e;
  param_2[3] = local_46;
  param_2[4] = local_44;
  param_2[5] = local_42;
  param_2[6] = local_4c;
  param_2[0xb] = local_3c[0];
  param_2[7] = local_4a;
  param_2[8] = local_40;
  param_2[9] = local_3e;
  param_2[10] = local_48;
  param_2[0xc] = local_5a;
  param_2[0xd] = local_58;
  param_2[0xe] = local_56;
  param_2[0xf] = local_54;
  return;
}


