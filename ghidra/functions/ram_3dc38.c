/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003dc38 */

void FUN_ram_0003dc38(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  byte *extraout_r2;
  uint uVar10;
  uint uVar11;
  uint *extraout_r3;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  uint *puStack00000030;
  byte local_100 [32];
  undefined1 local_e0 [8];
  byte *local_d8;
  byte *local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_1c;
  
  uVar22 = FUN_ram_000297a8();
  uVar6 = (undefined4)((ulonglong)uVar22 >> 0x20);
  pcVar1 = (code *)uVar22;
  local_c4 = 0;
  local_c0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  uVar15 = 0;
  uVar17 = 0;
  uVar14 = 0;
  iVar16 = 0;
  iVar18 = 0;
  puStack00000030 = extraout_r3;
  local_d4 = extraout_r2;
LAB_ram_0003e412:
  while( true ) {
    if (*local_d4 == 0) goto LAB_ram_0003e41e;
    local_d0 = FUN_ram_0003ed5c(local_d4,0,DAT_ram_0003e028);
    if (local_d0 == 0) {
      local_cc = 0x7fffffff;
    }
    else {
      local_cc = local_d0 - (int)local_d4;
    }
    local_d8 = (byte *)FUN_ram_0003ed5c(local_d4,0x25);
    if (local_d8 == (byte *)0x0) {
      local_d8 = local_d4 + local_cc;
    }
    local_cc = (int)local_d8 - (int)local_d4;
    if ((local_cc != 0) && (iVar2 = (*pcVar1)(uVar6), iVar2 == -1)) break;
    iVar18 = iVar18 + local_cc;
    if (*local_d8 == 0) goto LAB_ram_0003e41e;
    if (local_d8[1] != 0) {
      local_c8 = 0;
      pbVar8 = local_d8;
      do {
        local_b0 = (uint)pbVar8[1];
        local_d4 = pbVar8 + 1;
        switch(local_b0) {
        case 0x20:
          local_c8 = local_c8 | 4;
          pbVar8 = local_d4;
          break;
        default:
          goto switchD_ram_0003dd3c_caseD_21;
        case 0x23:
          local_c8 = local_c8 | 8;
          pbVar8 = local_d4;
          break;
        case 0x2b:
          local_c8 = local_c8 | 2;
          pbVar8 = local_d4;
          break;
        case 0x2d:
          local_c8 = local_c8 | 1;
          pbVar8 = local_d4;
        }
      } while( true );
    }
    local_d4 = (byte *)*puStack00000030;
    puStack00000030 = puStack00000030 + 1;
  }
  goto LAB_ram_0003dfd0;
switchD_ram_0003dd3c_caseD_21:
  uVar12 = (uint)*local_d4;
  if (((PTR_DAT_ram_0005500d_ram_0003e02c[uVar12] & 4) != 0) || (uVar12 == 0x2a)) {
    local_c8 = local_c8 | 0x20;
    local_c0 = 0;
    if (uVar12 == 0x30) {
      local_c0 = 0x31;
      local_d4 = pbVar8 + 2;
    }
    iVar16 = FUN_ram_0003d76c();
    if (iVar16 < 0) {
      iVar16 = -iVar16;
      local_c8 = local_c8 | 1;
    }
  }
  local_a8 = 6;
  local_ac = 1;
  if (*local_d4 == 0x2e) {
    if (local_d4[1] == 0x2d) {
      local_d4 = local_d4 + 2;
      FUN_ram_0003d76c();
    }
    else {
      local_d4 = local_d4 + 1;
      local_ac = FUN_ram_0003d76c();
      if (-1 < local_ac) {
        local_c8 = local_c8 | 0x40;
        local_a8 = local_ac;
      }
    }
  }
  pbVar7 = local_d4 + 1;
  uVar12 = (uint)*local_d4;
  pbVar8 = pbVar7;
  if (uVar12 == 0x68 || uVar12 == 0x4c) {
LAB_ram_0003de3a:
    local_d4 = pbVar8 + 1;
    local_b0 = (uint)*pbVar8;
    uVar11 = uVar12;
  }
  else if (uVar12 == 0x6c) {
    pbVar8 = local_d4 + 2;
    local_b0 = (uint)*pbVar7;
    uVar11 = uVar12;
    local_d4 = pbVar8;
    if (local_b0 == 0x6c) {
      uVar12 = 0x4c;
      goto LAB_ram_0003de3a;
    }
  }
  else {
    uVar11 = 0;
    local_d4 = pbVar7;
    local_b0 = uVar12;
  }
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 0;
  local_a0 = 0;
  if (local_b0 == 0x25) {
LAB_ram_0003df2c:
    local_d8 = local_100;
    local_100[0] = (byte)local_b0;
    local_c4 = 1;
    local_98 = 1;
LAB_ram_0003e1fe:
    bVar20 = false;
LAB_ram_0003e202:
    uVar12 = 0;
    uVar13 = uVar12;
    goto LAB_ram_0003e204;
  }
  switch(local_b0) {
  default:
    puVar3 = (undefined4 *)FUN_ram_000406b4();
    *puVar3 = 0x16;
    goto LAB_ram_0003e412;
  case 0x47:
  case 0x67:
    if (local_a8 == 0) {
      local_a8 = 1;
    }
  case 0x45:
  case 0x65:
  case 0x66:
    local_bc = local_b0 + 0x20;
    if ((PTR_DAT_ram_0005500d_ram_0003e02c[local_b0] & 1) == 0) {
      local_bc = local_b0;
    }
    FUN_ram_0003d814();
    goto LAB_ram_0003e1fe;
  case 0x58:
  case 0x78:
    uVar10 = 2;
    if ((local_c8 & 8) == 0) {
      uVar10 = 0;
    }
    local_cc = 0x10;
    uVar12 = local_b0;
    break;
  case 99:
    local_b0 = *puStack00000030;
    puStack00000030 = puStack00000030 + 1;
    goto LAB_ram_0003df2c;
  case 100:
  case 0x69:
    local_b8 = local_b0;
  case 0x75:
    if (uVar11 == 0x4c) {
      uVar12 = *puStack00000030;
      uVar17 = puStack00000030[1];
      uVar15 = uVar12;
      if ((local_b0 != 0x75) && ((int)uVar17 < 0)) {
        uVar15 = -uVar12;
        uVar17 = -(uint)(uVar12 != 0) - uVar17;
        local_a0 = -1;
      }
      local_d8 = (byte *)FUN_ram_0003e674(local_100,uVar15,uVar17,&local_98);
      puStack00000030 = puStack00000030 + 2;
    }
    else {
      uVar14 = *puStack00000030;
      if ((local_b0 != 0x75) && ((int)uVar14 < 0)) {
        uVar14 = -uVar14;
        local_a0 = -1;
      }
      local_d8 = (byte *)FUN_ram_0003e504(local_100,uVar14,&local_98);
      puStack00000030 = puStack00000030 + 1;
    }
    local_bc = 0x69;
    uVar13 = 0;
    goto LAB_ram_0003e164;
  case 0x6e:
    puVar4 = puStack00000030 + 1;
    piVar9 = (int *)*puStack00000030;
    puStack00000030 = puVar4;
    if (uVar11 == 0x68) {
      *(short *)piVar9 = (short)iVar18;
    }
    else if ((uVar11 == 0x6c) || (uVar11 != 0x4c)) {
      *piVar9 = iVar18;
    }
    else {
      *piVar9 = iVar18;
      piVar9[1] = iVar18 >> 0x1f;
    }
    goto LAB_ram_0003e412;
  case 0x6f:
    uVar12 = 0x6f;
    uVar10 = (uint)((local_c8 & 8) != 0);
    local_cc = 8;
    break;
  case 0x70:
    uVar14 = *puStack00000030;
    local_d8 = (byte *)FUN_ram_0003e55c(local_100,uVar14,&local_98);
    uVar12 = 0;
    bVar20 = false;
    local_c4 = local_98;
    uVar13 = 0;
    puStack00000030 = puStack00000030 + 1;
    goto LAB_ram_0003e204;
  case 0x73:
    puVar4 = puStack00000030 + 1;
    pbVar8 = (byte *)*puStack00000030;
    puStack00000030 = puVar4;
    local_d8 = pbVar8;
    if (pbVar8 == (byte *)0x0) {
      iVar2 = (*pcVar1)(uVar6,PTR_s__null__ram_00054fe0_ram_0003e030,6);
      if (iVar2 == -1) {
LAB_ram_0003dfd0:
        iVar18 = -1;
LAB_ram_0003e41e:
        FUN_ram_000297ea(iVar18);
        return;
      }
      goto LAB_ram_0003e412;
    }
    if (uVar11 == 0x6c) {
      iVar2 = thunk_FUN_ram_0003e8f8();
      local_c4 = DAT_ram_0003e028;
      if (iVar2 != 0) {
        local_c4 = iVar2 - (int)pbVar8 >> 1;
      }
      bVar20 = true;
    }
    else {
      local_d0 = FUN_ram_0003ed5c(pbVar8,0,DAT_ram_0003e028);
      if (local_d0 == 0) {
        local_c4 = 0x7fffffff;
      }
      else {
        local_c4 = local_d0 - (int)local_d8;
      }
      bVar20 = false;
    }
    local_98 = local_c4;
    if (((local_c8 & 0x40) != 0) && (local_ac < local_c4)) {
      local_c4 = local_ac;
      local_98 = local_c4;
    }
    goto LAB_ram_0003e202;
  }
  if (uVar11 == 0x4c) {
    uVar17 = puStack00000030[1];
    uVar15 = *puStack00000030;
    uVar13 = 0;
    if (uVar15 != 0 || uVar17 != 0) {
      uVar13 = uVar10;
    }
    local_d8 = (byte *)FUN_ram_0003e574(local_100,local_cc,uVar15,uVar17,&local_98,uVar12 == 0x78);
    puStack00000030 = puStack00000030 + 2;
  }
  else {
    uVar14 = *puStack00000030 & 0xffff;
    if (uVar11 != 0x68) {
      uVar14 = *puStack00000030;
    }
    uVar13 = (uint)(uVar14 != 0);
    if (uVar14 != 0) {
      uVar13 = uVar10;
    }
    local_d8 = (byte *)FUN_ram_0003e430(local_100,local_cc,uVar14,&local_98,uVar12 == 0x78);
    puStack00000030 = puStack00000030 + 1;
  }
  local_bc = 0x78;
LAB_ram_0003e164:
  if ((local_c0 != 0) && ((local_c8 & 1) != 0 || (local_c8 & 0x40) != 0)) {
    local_c0 = 0;
  }
  if (local_ac == 0) {
    if (uVar11 == 0x4c) {
      bVar20 = uVar15 == 0 && uVar17 == 0;
    }
    else {
      bVar20 = uVar14 == 0;
    }
    if (bVar20) {
      local_100[0] = 0;
      local_98 = 0;
      local_c4 = 0;
      uVar12 = 0;
      bVar20 = false;
      goto LAB_ram_0003e204;
    }
  }
  iVar2 = local_98 + (uint)(local_98 == 0);
  local_c4 = local_ac;
  if (local_ac <= iVar2) {
    local_c4 = iVar2;
  }
  local_c4 = local_c4 + uVar13;
  uVar12 = local_ac - local_98;
  if (local_ac <= iVar2) {
    uVar12 = (uint)(local_98 == 0);
  }
  bVar20 = false;
LAB_ram_0003e204:
  if ((local_bc != 0) && ((local_a0 != 0 || (local_b8 != 0 && (local_c8 & 6) != 0)))) {
    local_c4 = local_c4 + 1;
    bVar21 = local_a0 == 0;
    uVar13 = uVar13 + 1;
    local_a0 = 0x2d;
    if ((bVar21) && (local_a0 = 0x20, (local_c8 & 2) != 0)) {
      local_a0 = 0x2b;
    }
  }
  if (((local_c8 & 0x20) == 0) || (iVar16 <= local_c4)) {
    iVar2 = 0;
    iVar5 = iVar16;
    iVar19 = 0;
  }
  else {
    iVar5 = iVar16 - local_c4;
    iVar19 = 0;
    iVar2 = iVar5;
    local_c4 = iVar16;
    if ((local_c8 & 1) != 0) {
      local_c0 = 0;
      iVar2 = 0;
      iVar19 = iVar5;
    }
  }
  iVar16 = iVar5;
  if (((iVar2 != 0) && (local_c0 == 0)) && (iVar5 = FUN_ram_0003d7b4(iVar2), iVar5 != 0))
  goto LAB_ram_0003dfd0;
  if (local_bc != 0) {
    if (uVar13 != 0) {
      if (local_a0 != 0) {
        local_e0[0] = (undefined1)local_a0;
        uVar13 = uVar13 - 1;
      }
      uVar10 = (uint)(local_a0 != 0);
      uVar11 = uVar10;
      if (uVar13 != 0) {
        local_e0[uVar10] = 0x30;
        uVar11 = uVar10 + 1;
        if (1 < (int)uVar13) {
          uVar11 = uVar10 + 2;
          local_e0[uVar10 + 1] = (char)local_b0;
        }
      }
      iVar5 = (*pcVar1)(uVar6,local_e0,uVar11);
      if (iVar5 == -1) goto LAB_ram_0003dfd0;
    }
    if ((uVar12 != 0) && (iVar5 = FUN_ram_0003d7b4(uVar12,1), iVar5 != 0)) goto LAB_ram_0003dfd0;
  }
  if ((iVar2 != 0) && ((local_c0 != 0 && (iVar2 = FUN_ram_0003d7b4(iVar2), iVar2 != 0))))
  goto LAB_ram_0003dfd0;
  if (local_98 != 0) {
    if (bVar20) {
      iVar2 = FUN_ram_0003d6f4(pcVar1,uVar6);
    }
    else {
      iVar2 = (*pcVar1)(uVar6,local_d8,local_98);
    }
    if (iVar2 == -1) goto LAB_ram_0003dfd0;
  }
  if (local_b4 != 0) {
    local_d8 = local_d8 + local_98;
    if ((local_90 != 0) && (iVar2 = FUN_ram_0003d7b4(local_90,1), iVar2 != 0))
    goto LAB_ram_0003dfd0;
    if (local_9c != 0) {
      local_e0[0] = 0x2e;
      iVar2 = (*pcVar1)(uVar6,local_e0,1);
      if (iVar2 == -1) goto LAB_ram_0003dfd0;
    }
    if (((((local_8c != 0) && (iVar2 = FUN_ram_0003d7b4(local_8c,1), iVar2 != 0)) ||
         ((local_94 != 0 && (iVar2 = (*pcVar1)(uVar6,local_d8), iVar2 == -1)))) ||
        ((local_88 != 0 && (iVar2 = FUN_ram_0003d7b4(local_88,1), iVar2 != 0)))) ||
       ((local_b4 == 0x65 && ((local_1c != 0 && (iVar2 = (*pcVar1)(uVar6,local_d0), iVar2 == -1)))))
       ) goto LAB_ram_0003dfd0;
  }
  if ((iVar19 != 0) && (iVar2 = FUN_ram_0003d7b4(iVar19,local_c0), iVar2 != 0))
  goto LAB_ram_0003dfd0;
  iVar18 = iVar18 + local_c4;
  goto LAB_ram_0003e412;
}


