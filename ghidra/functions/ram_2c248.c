/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002c248 */

void FUN_ram_0002c248(uint param_1,uint param_2,undefined2 *param_3,short *param_4)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  uint uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  
  uVar7 = param_1;
  if ((int)param_1 < 0) {
    uVar7 = ~param_1;
  }
  cVar6 = (char)LZCOUNT(uVar7) + -1;
  uVar7 = param_2;
  if ((int)param_2 < 0) {
    uVar7 = ~param_2;
  }
  cVar2 = (char)LZCOUNT(uVar7) + -1;
  if (-1 < (int)cVar6 - (int)cVar2) {
    cVar6 = cVar2;
  }
  uVar7 = (uint)(char)(cVar6 + -0x14);
  if ((int)uVar7 < 0) {
    uVar3 = (ushort)((int)param_1 >> (-uVar7 & 0x1f));
    uVar4 = (ushort)((int)param_2 >> (-uVar7 & 0x1f));
  }
  else {
    uVar3 = (ushort)(param_1 << (uVar7 & 0x1f));
    uVar4 = (ushort)(param_2 << (uVar7 & 0x1f));
  }
  uVar7 = (uint)(short)uVar3;
  iVar5 = (int)(short)uVar4;
  if (iVar5 == 0) {
    if ((int)uVar7 < 0) {
      *param_4 = 0x100;
    }
    else {
      *param_4 = 0;
    }
    if ((int)param_1 < 0) {
      param_1 = (uint)(short)-(short)param_1;
    }
    *param_3 = (short)param_1;
  }
  else {
    uVar14 = uVar7;
    if ((int)uVar7 < 0) {
      uVar14 = (int)(short)-uVar3;
    }
    sVar9 = 0;
    iVar10 = 0;
    iVar12 = iVar5;
    do {
      if (iVar12 < 0) {
        iVar17 = 1;
      }
      else {
        iVar17 = -1;
      }
      uVar8 = (uint)(byte)(&DAT_ram_00054cf4)[iVar10];
      sVar15 = (short)((int)uVar14 >> (uVar8 & 0x1f));
      sVar11 = (short)(iVar12 >> (uVar8 & 0x1f));
      if (0xfff < sVar15) {
        sVar15 = 0xfff;
      }
      if (sVar15 < -0x1000) {
        sVar15 = -0x1000;
      }
      if (0xfff < sVar11) {
        sVar11 = 0xfff;
      }
      if (sVar11 < -0x1000) {
        sVar11 = -0x1000;
      }
      sVar16 = (short)((int)uVar14 >> (uVar8 + (byte)(&DAT_ram_00054cdc)[iVar10] & 0x1f));
      sVar13 = (short)(iVar12 >> (uVar8 + (byte)(&DAT_ram_00054cdc)[iVar10] & 0x1f));
      if (0xfff < sVar16) {
        sVar16 = 0xfff;
      }
      if (sVar16 < -0x1000) {
        sVar16 = -0x1000;
      }
      if (0xfff < sVar13) {
        sVar13 = 0xfff;
      }
      if (sVar13 < -0x1000) {
        sVar13 = -0x1000;
      }
      sVar1 = (&DAT_ram_00054ce4)[iVar10];
      if (iVar17 == 1) {
        sVar13 = -sVar13;
        sVar1 = -sVar1;
      }
      else {
        sVar16 = -sVar16;
      }
      sVar9 = sVar9 + sVar1;
      uVar14 = (uint)(short)(sVar15 + sVar13);
      iVar12 = (int)(short)(sVar11 + sVar16);
      if (0xfff < (int)uVar14) {
        uVar14 = 0xfff;
      }
      if ((int)uVar14 < -0x1000) {
        uVar14 = 0xfffff000;
      }
      if (0xfff < iVar12) {
        iVar12 = 0xfff;
      }
      if (iVar12 < -0x1000) {
        iVar12 = -0x1000;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    if (((uint)(-1 < iVar5) & uVar7 >> 0x1f) != 0) {
      sVar9 = 0x100 - sVar9;
    }
    if ((short)(uVar4 & uVar3) < 0) {
      sVar9 = -0x100 - sVar9;
    }
    for (; 0x1ff < sVar9; sVar9 = sVar9 + -0x200) {
    }
    for (; sVar9 < -0x200; sVar9 = sVar9 + 0x200) {
    }
    if (0xff < sVar9) {
      sVar9 = sVar9 + -0x200;
    }
    *param_3 = (short)uVar14;
    *param_4 = sVar9;
  }
  return;
}


