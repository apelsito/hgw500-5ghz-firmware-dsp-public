/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000212d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000212d0(int param_1)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint local_40;
  
  piVar12 = *(int **)(_DAT_ram_e00000bc + 100);
  puVar6 = (uint *)0x0;
  uVar9 = 0;
  uVar11 = 10000;
  bVar3 = false;
  if (param_1 == 1) {
    puVar6 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar6 = (uint *)&DAT_ram_e00000a4;
  }
  else if (param_1 == 4) {
    puVar6 = (uint *)&DAT_ram_e00000a8;
  }
  if (param_1 == 1) {
    puVar7 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar7 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar7 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar7 = (uint *)0x0;
  }
  local_40 = STATUS32;
  if ((local_40 & 6) != 0) {
    STATUS32 = local_40 & 0xfffffff9;
  }
  bVar1 = false;
  if ((puVar6 == (uint *)0x0) || (*puVar6 = *puVar6 | 0x80000000, (*puVar6 & 0x80000000) != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    bVar1 = false;
    if ((puVar7 == (uint *)0x0) || (*puVar7 = *puVar7 | 0x80000000, (*puVar7 & 0x80000000) != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_ram_00021402;
    }
    if (puVar6 != (uint *)0x0) {
      *puVar6 = *puVar6 & 0x7fffffff;
    }
  }
  STATUS32 = local_40;
  bVar1 = false;
LAB_ram_00021402:
  if (!bVar1) {
    uVar2 = (param_1 + 1) * 10;
    do {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      iVar5 = 0;
      if (*(int *)(_DAT_ram_e00000bc + 0xd8) != 0) {
        iVar5 = 2;
      }
      iVar8 = 0;
      iVar10 = 10 << (iVar5 + param_1 & 0x1fU);
      if (0 < iVar10) {
        do {
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar10);
      }
      if ((iVar5 == 0) && (uVar9 = uVar9 + 1, uVar11 <= uVar9)) {
        uVar11 = uVar11 << 1;
        uVar9 = 0;
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        if ((319999 < uVar11) && (!bVar3)) {
          bVar3 = true;
        }
      }
      if (param_1 == 1) {
        puVar6 = (uint *)&DAT_ram_e000009c;
      }
      else if (param_1 == 2) {
        puVar6 = (uint *)&DAT_ram_e00000a4;
      }
      else if (param_1 == 4) {
        puVar6 = (uint *)&DAT_ram_e00000a8;
      }
      else {
        puVar6 = (uint *)0x0;
      }
      if (param_1 == 1) {
        puVar7 = (uint *)&DAT_ram_e0000094;
      }
      else if (param_1 == 2) {
        puVar7 = (uint *)&DAT_ram_e0000098;
      }
      else if (param_1 == 4) {
        puVar7 = (uint *)&DAT_ram_e00000a0;
      }
      else {
        puVar7 = (uint *)0x0;
      }
      local_40 = STATUS32;
      if ((local_40 & 6) != 0) {
        STATUS32 = local_40 & 0xfffffff9;
      }
      bVar1 = false;
      if ((puVar6 == (uint *)0x0) || (*puVar6 = *puVar6 | 0x80000000, (*puVar6 & 0x80000000) != 0))
      {
        bVar1 = true;
      }
      if (bVar1) {
        bVar1 = false;
        if ((puVar7 == (uint *)0x0) || (*puVar7 = *puVar7 | 0x80000000, (*puVar7 & 0x80000000) != 0)
           ) {
          bVar1 = true;
        }
        if (!bVar1) {
          if (puVar6 != (uint *)0x0) {
            *puVar6 = *puVar6 & 0x7fffffff;
          }
          goto LAB_ram_00021558;
        }
        bVar1 = true;
      }
      else {
LAB_ram_00021558:
        STATUS32 = local_40;
        bVar1 = false;
      }
    } while (!bVar1);
  }
  if (*piVar12 == 0) {
    piVar12[2] = piVar12[2] + 1;
  }
  else {
    piVar12[1] = piVar12[1] + 1;
  }
  *piVar12 = *piVar12 + 1;
  if (param_1 == 1) {
    puVar6 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar6 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar6 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = *puVar6 & 0x7fffffff;
  }
  if (param_1 == 1) {
    puVar6 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar6 = (uint *)&DAT_ram_e00000a4;
  }
  else if (param_1 == 4) {
    puVar6 = (uint *)&DAT_ram_e00000a8;
  }
  else {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = *puVar6 & 0x7fffffff;
  }
  STATUS32 = local_40;
  return 0;
}


