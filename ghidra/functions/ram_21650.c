/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00021650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00021650(int param_1)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint local_40;
  
  piVar12 = *(int **)(_DAT_ram_e00000bc + 100);
  puVar4 = (uint *)0x0;
  uVar7 = 0;
  uVar11 = 10000;
  bVar3 = false;
  if (param_1 == 1) {
    puVar4 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar4 = (uint *)&DAT_ram_e00000a4;
  }
  else if (param_1 == 4) {
    puVar4 = (uint *)&DAT_ram_e00000a8;
  }
  if (param_1 == 1) {
    puVar8 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar8 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar8 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar8 = (uint *)0x0;
  }
  local_40 = STATUS32;
  if ((local_40 & 6) != 0) {
    STATUS32 = local_40 & 0xfffffff9;
  }
  bVar1 = false;
  if ((puVar4 == (uint *)0x0) || (*puVar4 = *puVar4 | 0x80000000, (*puVar4 & 0x80000000) != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    bVar1 = false;
    if ((puVar8 == (uint *)0x0) || (*puVar8 = *puVar8 | 0x80000000, (*puVar8 & 0x80000000) != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_ram_0002178c;
    }
    if (puVar4 != (uint *)0x0) {
      *puVar4 = *puVar4 & 0x7fffffff;
    }
  }
  STATUS32 = local_40;
  bVar1 = false;
LAB_ram_0002178c:
  if (!bVar1) {
    uVar2 = (param_1 + 1) * 10;
    do {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      iVar6 = 0;
      if (*(int *)(_DAT_ram_e00000bc + 0xd8) != 0) {
        iVar6 = 2;
      }
      iVar10 = 0;
      iVar9 = 10 << (iVar6 + param_1 & 0x1fU);
      if (0 < iVar9) {
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar9);
      }
      if ((iVar6 == 0) && (uVar7 = uVar7 + 1, uVar11 <= uVar7)) {
        uVar11 = uVar11 << 1;
        uVar7 = 0;
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        if ((319999 < uVar11) && (!bVar3)) {
          bVar3 = true;
        }
      }
      if (param_1 == 1) {
        puVar4 = (uint *)&DAT_ram_e000009c;
      }
      else if (param_1 == 2) {
        puVar4 = (uint *)&DAT_ram_e00000a4;
      }
      else if (param_1 == 4) {
        puVar4 = (uint *)&DAT_ram_e00000a8;
      }
      else {
        puVar4 = (uint *)0x0;
      }
      if (param_1 == 1) {
        puVar8 = (uint *)&DAT_ram_e0000094;
      }
      else if (param_1 == 2) {
        puVar8 = (uint *)&DAT_ram_e0000098;
      }
      else if (param_1 == 4) {
        puVar8 = (uint *)&DAT_ram_e00000a0;
      }
      else {
        puVar8 = (uint *)0x0;
      }
      local_40 = STATUS32;
      if ((local_40 & 6) != 0) {
        STATUS32 = local_40 & 0xfffffff9;
      }
      bVar1 = false;
      if ((puVar4 == (uint *)0x0) || (*puVar4 = *puVar4 | 0x80000000, (*puVar4 & 0x80000000) != 0))
      {
        bVar1 = true;
      }
      if (bVar1) {
        bVar1 = false;
        if ((puVar8 == (uint *)0x0) || (*puVar8 = *puVar8 | 0x80000000, (*puVar8 & 0x80000000) != 0)
           ) {
          bVar1 = true;
        }
        if (!bVar1) {
          if (puVar4 != (uint *)0x0) {
            *puVar4 = *puVar4 & 0x7fffffff;
          }
          goto LAB_ram_000218f2;
        }
        bVar1 = true;
      }
      else {
LAB_ram_000218f2:
        STATUS32 = local_40;
        bVar1 = false;
      }
    } while (!bVar1);
  }
  iVar6 = *piVar12;
  if (iVar6 != 0) {
    *piVar12 = iVar6 + -1;
  }
  if (param_1 == 1) {
    puVar4 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar4 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar4 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar4 = (uint *)0x0;
  }
  if (puVar4 != (uint *)0x0) {
    *puVar4 = *puVar4 & 0x7fffffff;
  }
  if (param_1 == 1) {
    puVar4 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar4 = (uint *)&DAT_ram_e00000a4;
  }
  else if (param_1 == 4) {
    puVar4 = (uint *)&DAT_ram_e00000a8;
  }
  else {
    puVar4 = (uint *)0x0;
  }
  if (puVar4 != (uint *)0x0) {
    *puVar4 = *puVar4 & 0x7fffffff;
  }
  STATUS32 = local_40;
  return 0;
}


