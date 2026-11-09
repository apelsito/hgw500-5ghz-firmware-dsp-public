/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d814 */

void FUN_ram_0003d814(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_r11;
  int iVar9;
  uint uVar10;
  int extraout_lp_count;
  char in_is_in_loop;
  
  FUN_ram_000297cc();
  if ((*(int *)(extraout_r11 + -0xac) != 0) && ((*(uint *)(extraout_r11 + -0xb4) & 1) != 0)) {
    *(undefined4 *)(extraout_r11 + -0xac) = 0;
  }
  iVar8 = *(int *)(extraout_r11 + -0xa8);
  piVar5 = *(int **)(extraout_r11 + 0x44);
  *(int *)(extraout_r11 + -0xa4) = iVar8;
  *(int **)(extraout_r11 + 0x44) = piVar5 + 2;
  iVar9 = *piVar5;
  uVar10 = piVar5[1];
  iVar6 = *(int *)(extraout_r11 + -0x94) + 1;
  if (iVar8 != 0x65) {
    iVar6 = *(int *)(extraout_r11 + -0x94);
  }
  uVar3 = FUN_ram_0003edf0(extraout_r11 + -0x70,0x4f,iVar9,uVar10,iVar8,iVar6,extraout_r11 + -0x10,
                           extraout_r11 + -0x8c);
  *(undefined4 *)(extraout_r11 + -0xc4) = uVar3;
  puVar2 = PTR_DAT_ram_00055009_ram_0003dac0;
  *(uint *)(extraout_r11 + -4) = (uint)((uVar10 & 0x7fffffff) == 0 && iVar9 == 0);
  iVar6 = FUN_ram_0003e90c(uVar3,puVar2);
  if ((iVar6 == 0) && (*(int *)(extraout_r11 + -0x10) == 0)) {
    *(undefined4 *)(extraout_r11 + -0x10) = 1;
  }
  iVar6 = DAT_ram_0003dac4;
  iVar8 = FUN_ram_0003ed5c(uVar3,0,DAT_ram_0003dac4);
  *(int *)(extraout_r11 + -0xbc) = iVar8;
  puVar2 = PTR_DAT_ram_0005500d_ram_0003dac8;
  if (iVar8 != 0) {
    iVar6 = iVar8 - *(int *)(extraout_r11 + -0xc4);
  }
  bVar1 = PTR_DAT_ram_0005500d_ram_0003dac8[**(byte **)(extraout_r11 + -0xc4)];
  *(int *)(extraout_r11 + -0xc) = iVar6;
  if ((bVar1 & 4) == 0) {
    *(int *)(extraout_r11 + -0x84) = iVar6;
    goto LAB_ram_0003dc34;
  }
  *(undefined4 *)(extraout_r11 + -0x74) = 0;
  *(undefined4 *)(extraout_r11 + -0x78) = 0;
  *(undefined4 *)(extraout_r11 + -0x7c) = 0;
  *(undefined4 *)(extraout_r11 + -8) = 0;
  *(undefined4 *)(extraout_r11 + -0x80) = 0;
  *(undefined4 *)(extraout_r11 + -0x84) = 0;
  iVar9 = *(int *)(extraout_r11 + -0xa8);
  iVar8 = *(int *)(extraout_r11 + -0x94);
  *(int *)(extraout_r11 + -0x98) = iVar8;
  if (iVar9 == 0x65) {
LAB_ram_0003d9c4:
    *(undefined4 *)(extraout_r11 + -0x84) = 1;
    *(int *)(extraout_r11 + -0x80) = iVar6 + -1;
    if (*(int *)(extraout_r11 + -4) == 0) {
      iVar6 = *(int *)(extraout_r11 + -0x10) + -1;
      *(int *)(extraout_r11 + -0x10) = iVar6;
      *(uint *)(extraout_r11 + -0xb8) = (uint)(iVar6 < 0);
      if (iVar6 < 0 != 0) {
        iVar6 = -iVar6;
        *(int *)(extraout_r11 + -0x10) = iVar6;
      }
    }
    else {
      *(undefined4 *)(extraout_r11 + -0x10) = 0;
      *(undefined4 *)(extraout_r11 + -0xb8) = 0;
      iVar6 = 0;
    }
    puVar4 = (undefined1 *)FUN_ram_0003e51c(extraout_r11 + -0x1c,iVar6,extraout_r11 + -8);
    iVar8 = *(int *)(extraout_r11 + -8);
    iVar6 = extraout_lp_count;
    if (1 < iVar8) goto LAB_ram_0003db32;
    iVar6 = 2 - iVar8;
    LP_START = 0x3db2a;
    LP_END = 0x3db32;
    in_is_in_loop = '\x01';
    do {
      puVar4 = puVar4 + -1;
      *puVar4 = 0x30;
      iVar8 = iVar8 + 1;
LAB_ram_0003db32:
    } while ((in_is_in_loop != '\0') && (iVar6 = iVar6 + -1, iVar6 != 0));
    puVar4[-1] = (*(int *)(extraout_r11 + -0xb8) != 0) * '\x02' + '+';
    iVar8 = iVar8 + 2;
    bVar1 = puVar2[*(int *)(extraout_r11 + -0x9c)];
    *(undefined1 **)(extraout_r11 + -0xbc) = puVar4 + -2;
    *(int *)(extraout_r11 + -8) = iVar8;
    puVar4[-2] = ((bVar1 ^ 1) & 1) * ' ' + 'E';
    *(undefined4 *)(extraout_r11 + -0xa0) = 0x65;
  }
  else {
    if (iVar9 == 0x66) {
LAB_ram_0003da0c:
      iVar7 = *(int *)(extraout_r11 + -0x10);
      if (iVar7 < 1) {
        *(undefined4 *)(extraout_r11 + -0x7c) = 1;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
          *(int *)(extraout_r11 + -0x78) = iVar7;
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 < iVar8) {
          *(int *)(extraout_r11 + -0x80) = iVar6;
          if (iVar8 < iVar6 + iVar7) {
            iVar8 = iVar8 - iVar7;
LAB_ram_0003daa2:
            *(int *)(extraout_r11 + -0x80) = iVar8;
          }
        }
        else if (iVar9 == 0x67) {
          *(undefined4 *)(extraout_r11 + -0x78) = 0;
        }
        else {
          *(int *)(extraout_r11 + -0x78) = iVar8;
        }
      }
      else if (iVar6 < iVar7) {
        *(int *)(extraout_r11 + -0x84) = iVar6;
        *(int *)(extraout_r11 + -0x7c) = iVar7 - iVar6;
      }
      else {
        *(int *)(extraout_r11 + -0x84) = iVar7;
        *(int *)(extraout_r11 + -0x80) = iVar6 - iVar7;
        if (iVar8 < iVar6 - iVar7) goto LAB_ram_0003daa2;
      }
      *(undefined4 *)(extraout_r11 + -0xa0) = 0x66;
    }
    else if (iVar9 == 0x67) {
      iVar7 = *(int *)(extraout_r11 + -0x10);
      if ((iVar7 < -3) || (iVar8 < iVar7)) {
        *(int *)(extraout_r11 + -0x98) = iVar8 + -1;
        goto LAB_ram_0003d9c4;
      }
      iVar8 = iVar8 - iVar7;
      *(int *)(extraout_r11 + -0x98) = iVar8;
      goto LAB_ram_0003da0c;
    }
    iVar8 = 0;
  }
  iVar9 = *(int *)(extraout_r11 + -0x98);
  iVar6 = *(int *)(extraout_r11 + -0x80) + *(int *)(extraout_r11 + -0x78);
  if ((iVar6 < iVar9) &&
     ((*(int *)(extraout_r11 + -0xa8) != 0x67 || ((*(uint *)(extraout_r11 + -0xb4) & 8) != 0)))) {
    *(int *)(extraout_r11 + -0x74) = iVar9 - iVar6;
  }
  iVar6 = iVar6 + iVar8 + *(int *)(extraout_r11 + -0x84) + *(int *)(extraout_r11 + -0x7c) +
                          *(int *)(extraout_r11 + -0x74);
  *(int *)(extraout_r11 + -0xb0) = iVar6;
  iVar8 = 0;
  if (((*(uint *)(extraout_r11 + -0xb4) & 8) != 0) ||
     ((0 < iVar9 &&
      ((*(int *)(extraout_r11 + -0xa8) != 0x67 || *(int *)(extraout_r11 + -0x80) != 0) ||
       *(int *)(extraout_r11 + -0x78) != 0)))) {
    iVar8 = 1;
  }
  *(int *)(extraout_r11 + -0x88) = iVar8;
  if (iVar8 != 0) {
    *(int *)(extraout_r11 + -0xb0) = iVar6 + 1;
  }
LAB_ram_0003dc34:
  FUN_ram_00029830();
  return;
}


