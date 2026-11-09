/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00023b14(int param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  uint3 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(param_2 + 9) = *(undefined2 *)(param_1 + 0x60);
  if (iVar10 == 0) {
    return 0;
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  *param_3 = uVar8;
  FUN_ram_00020aa0(uVar8 & 0xfffffffc,*(undefined4 *)(param_1 + 0x18));
  uVar11 = *param_3;
  cVar1 = *(char *)(uVar11 + 0x18);
  uVar8 = (uint)*(byte *)(uVar11 + 0x19);
  uVar12 = uVar11 + 0x1a;
  *param_3 = uVar12;
  if (cVar1 == '\x15') {
    bVar2 = *(byte *)(uVar11 + 0x1a);
    bVar3 = *(byte *)(uVar11 + 0x1c);
    iVar10 = 1 - uVar8;
    uVar7 = CONCAT12(bVar3,CONCAT11(*(undefined1 *)(uVar11 + 0x1b),bVar2));
    param_2[4] = (uVar7 & 0x38) >> 3;
    if (1 < uVar8) {
      iVar10 = 0;
    }
    *param_2 = 1;
    param_2[1] = iVar10;
    param_2[3] = uVar7 & 7;
    param_2[5] = (uVar7 & 0x300) >> 8;
    uVar8 = (uVar7 & 0x800) >> 0xb;
    param_2[6] = uVar8;
    param_2[7] = (uVar7 & 0x400) >> 10;
    param_2[8] = (uint)(bVar3 >> 2);
    param_2[0xb] = (uVar7 & 0x8000) >> 0xf;
    param_2[0xc] = (uVar7 & 0x7000) >> 0xc;
    if ((bVar2 & 0x80) == 0) {
      if ((bVar2 & 0x40) == 0) {
        uVar9 = 0;
        goto LAB_ram_00023c0e;
      }
      param_2[2] = 1;
      uVar9 = 1;
    }
    else {
      uVar9 = 2;
LAB_ram_00023c0e:
      param_2[2] = uVar9;
    }
    if (uVar8 != 0) {
      if (uVar9 == 2) {
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1180) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1180) + 1;
      }
      else if (uVar9 == 1) {
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1184) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1184) + 1;
      }
      else {
        if (uVar9 != 0) goto LAB_ram_00023c90;
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1188) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1188) + 1;
      }
      uVar8 = param_2[6];
      uVar9 = param_2[2];
    }
LAB_ram_00023c90:
    if (uVar9 == 0) {
      if (uVar8 != 0) {
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x118c) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x118c) + 1;
        goto LAB_ram_00023ce8;
      }
    }
    else {
      iVar10 = (param_2[5] + (uVar9 - 1) * 2) * 3;
      uVar4 = (&DAT_ram_0005b8a1)[iVar10];
      uVar5 = (&DAT_ram_0005b8a2)[iVar10];
      *(undefined *)((int)param_2 + 0x26) = (&DAT_ram_0005b8a0)[iVar10];
      *(undefined1 *)((int)param_2 + 0x27) = uVar4;
      *(undefined1 *)(param_2 + 10) = uVar5;
      uVar12 = *param_3;
    }
    uVar12 = uVar12 + 3;
  }
  else {
    bVar2 = *(byte *)(uVar11 + 0x1a);
    uVar12 = (uint)CONCAT11(*(undefined1 *)(uVar11 + 0x1b),bVar2);
    *param_2 = 0;
    param_2[1] = (uint)(uVar8 == 6);
    param_2[4] = (int)(uVar12 & 0xc) >> 2;
    param_2[3] = uVar12 & 3;
    param_2[5] = (int)(uVar12 & 0x60) >> 5;
    param_2[6] = 0;
    uVar8 = 0;
    param_2[8] = 0x20;
    bVar6 = (bVar2 & 0x10) == 0;
    param_2[7] = (int)(uVar12 & 0x600) >> 9;
    if (bVar6) {
      param_2[2] = 0;
    }
    else {
      param_2[2] = 1;
    }
    uVar9 = (uint)!bVar6;
    uVar12 = uVar11 + 0x20;
  }
  *param_3 = uVar12;
  if (((uVar8 != 0) || ((param_2[8] & 0x20) == 0)) || (uVar9 == *(byte *)(param_1 + 0x7c))) {
    *(undefined4 *)(param_1 + 0x54) = param_2[1];
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x9a);
    return 1;
  }
LAB_ram_00023ce8:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}


