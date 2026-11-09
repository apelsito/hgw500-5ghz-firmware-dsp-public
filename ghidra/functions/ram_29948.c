/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00029948 */

/* WARNING: Removing unreachable block (ram,0x00029fae) */

void FUN_ram_00029948(uint *param_1,int param_2,uint param_3,ushort *param_4,int param_5,int param_6
                     )

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ushort uVar18;
  ushort uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  short sVar27;
  short sVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  uint *puVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint *puVar39;
  ushort *puVar40;
  short sVar41;
  int iVar42;
  ushort *puVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  int iVar49;
  int iStack_f0;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_c0 [9];
  uint local_9c [18];
  uint local_54;
  ushort local_48;
  ushort local_46;
  
  local_c0[5] = DAT_ram_00054a38;
  local_c0[6] = DAT_ram_00054a3c;
  local_c0[7] = DAT_ram_00054a40;
  local_c0[8] = DAT_ram_00054a44;
  local_e0 = 0;
  uStack_dc = (int)param_3 >> 2 & 1;
  uStack_d8 = param_3 & 1;
  uStack_d4 = (int)param_3 >> 3 & 1;
  if (2 < param_6) {
    uStack_dc = 1;
    uStack_d8 = 0;
    uStack_d4 = 0;
  }
  bVar11 = param_6 == 2;
  iVar48 = 0;
  puVar26 = param_1;
  do {
    iVar20 = 0;
    iVar37 = 0;
    uVar15 = 0;
    do {
      uVar22 = (uint)(short)(ushort)*puVar26;
      uVar36 = (uint)(short)*(ushort *)((int)puVar26 + 2);
      uVar6 = (ulonglong)uVar22 * (ulonglong)(ushort)*puVar26;
      uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar22 & 0xffff0000);
      uVar8 = uVar6 + uVar7;
      if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
        uVar8 = 0x7fffffffffffffff;
      }
      uVar6 = (ulonglong)uVar36 * (ulonglong)*(ushort *)((int)puVar26 + 2);
      uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar36 & 0xffff0000);
      uVar9 = uVar6 + uVar7;
      if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
        uVar9 = 0x7fffffffffffffff;
      }
      iVar49 = (int)(uVar9 >> 0x20);
      iVar23 = (int)uVar9;
      uVar36 = (int)uVar8 + iVar23;
      uVar22 = uVar15 + uVar36;
      iVar20 = iVar20 + ((int)uVar36 >> 0x1f) + (uint)CARRY4(uVar15,uVar36);
      *puVar26 = (int)*puVar26 >> 1 & 0xffff0000U | (int)(*puVar26 << 0x10) >> 0x11 & 0xffffU;
      iVar37 = iVar37 + 1;
      puVar26 = puVar26 + 1;
      uVar15 = uVar22;
    } while (iVar37 < 4);
    uVar15 = FUN_ram_00029888(uVar22,iVar20,6);
    iVar20 = iVar48 + 1;
    local_c0[iVar48 + 1] = uVar15;
    iVar48 = iVar20;
  } while (iVar20 < 4);
  while (param_2 != 0) {
    iStack_f0 = param_2 + -1;
    iVar48 = 0;
    do {
      iVar20 = iVar48 + 1;
      if (iVar20 < 4) {
        puVar26 = param_1 + iVar48 * 4;
        do {
          puVar35 = param_1 + iVar20 * 4;
          muldw(*puVar35,*puVar26);
          macdw(puVar35[1],puVar26[1]);
          macdw(puVar35[2],puVar26[2]);
          uVar15 = puVar35[3];
          macdw(uVar15,puVar26[3]);
          local_54 = iVar49 + iVar23;
          muldw(uVar15 << 0x10 | uVar15 >> 0x10,puVar26[3]);
          macdw(*puVar35 << 0x10 | *puVar35 >> 0x10,*puVar26);
          macdw(puVar35[1] << 0x10 | puVar35[1] >> 0x10,puVar26[1]);
          macdw(puVar35[2] << 0x10 | puVar35[2] >> 0x10,puVar26[2]);
          uVar15 = iVar49 - iVar23;
          if ((local_54 != 0) || (uVar15 != 0)) {
            uVar47 = local_c0[iVar48 + 5];
            uVar22 = local_c0[iVar20 + 5];
            uVar36 = local_54;
            if ((int)local_54 < 0) {
              uVar36 = ~local_54;
            }
            uVar38 = uVar15;
            if ((int)uVar15 < 0) {
              uVar38 = ~uVar15;
            }
            iVar37 = LZCOUNT(uVar38) + -1;
            if (LZCOUNT(uVar36) + -1 < LZCOUNT(uVar38) + -1) {
              iVar37 = LZCOUNT(uVar36) + -1;
            }
            iVar23 = 0x10 - iVar37;
            if (iVar23 < 0x20) {
              if (iVar23 < -0x1f) {
                lVar5 = (longlong)(int)local_54 << 0x1f;
              }
              else if (iVar23 < 0) {
                lVar5 = (longlong)(int)local_54 << -iVar23;
              }
              else {
                lVar5 = (longlong)((int)local_54 >> iVar23);
              }
            }
            else {
              lVar5 = (longlong)((int)local_54 >> 0x1f);
            }
            local_54 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              local_54 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              local_54 = 0x80000000;
            }
            uVar36 = (uint)(short)local_54;
            uVar6 = (ulonglong)uVar36 * (ulonglong)(local_54 & 0xffff);
            uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar36 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            if (iVar23 < 0x20) {
              if (iVar23 < -0x1f) {
                lVar5 = (longlong)(int)uVar15 << 0x1f;
              }
              else if (iVar23 < 0) {
                lVar5 = (longlong)(int)uVar15 << -iVar23;
              }
              else {
                lVar5 = (longlong)((int)uVar15 >> iVar23);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar15 >> 0x1f);
            }
            uVar15 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              uVar15 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              uVar15 = 0;
            }
            uVar38 = (uint)(short)uVar15;
            uVar6 = (ulonglong)uVar38 * (ulonglong)(uVar15 & 0xffff);
            iVar37 = (uVar22 + uVar47) - iVar37;
            uVar7 = (longlong)(int)uVar38 * (longlong)(int)(uVar38 & 0xffff0000);
            uVar9 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
              uVar9 = 0x7fffffffffffffff;
            }
            uVar21 = (int)uVar8 + (int)uVar9;
            uVar24 = uVar21;
            if ((int)uVar21 < 0) {
              uVar24 = ~uVar21;
            }
            uVar29 = LZCOUNT(uVar24) - 1;
            if ((uVar29 & 1) == 0) {
              uVar29 = LZCOUNT(uVar24) - 2;
            }
            iVar23 = 0x10 - uVar29;
            if (iVar23 < 0x20) {
              if (iVar23 < -0x1f) {
                lVar5 = (longlong)(int)uVar21 << 0x1f;
              }
              else if (iVar23 < 0) {
                lVar5 = (longlong)(int)uVar21 << -iVar23;
              }
              else {
                lVar5 = (longlong)((int)uVar21 >> iVar23);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar21 >> 0x1f);
            }
            sVar28 = (short)lVar5;
            if (0x7fffffff < lVar5) {
              sVar28 = -1;
            }
            if (lVar5 < -0x80000000) {
              sVar28 = 0;
            }
            iVar49 = (int)((int)sVar28 - 0x2000U) >> 2;
            iVar23 = iVar49 * 2;
            uVar19 = *(ushort *)(&DAT_ram_dcfa1000 + iVar23);
            uVar18 = *(ushort *)(&DAT_ram_dcfa1002 + iVar23);
            if (0x17fe < iVar49) {
              uVar18 = uVar19;
            }
            uVar24 = (int)sVar28 - 0x2000U & 3;
            if (uVar24 != 0) {
              sVar28 = (short)uVar19 >> 1;
              if (uVar24 == 1) {
LAB_ram_00029bfc:
                uVar19 = ((short)uVar18 >> 2) + ((short)uVar19 >> 2) + sVar28;
              }
              else {
                sVar28 = (short)uVar18 >> 1;
                if (uVar24 == 2) {
                  uVar19 = ((short)uVar19 >> 1) + sVar28;
                }
                else {
                  if (uVar24 == 3) goto LAB_ram_00029bfc;
                  uVar19 = 0;
                }
              }
            }
            iVar16 = (iVar37 - ((int)uVar29 >> 1)) + 3;
            uVar21 = (int)(short)uVar19 - 0x4000;
            iVar23 = (int)uVar21 >> 2;
            iVar49 = iVar23 * 2;
            uVar29 = (uint)*(short *)(&DAT_ram_dcf81800 + iVar49);
            uVar24 = (int)*(short *)(&DAT_ram_dcf81802 + iVar49);
            if (0xffe < iVar23) {
              uVar24 = uVar29;
            }
            uVar21 = uVar21 & 3;
            if (uVar21 != 0) {
              sVar28 = (short)((int)uVar24 >> 2);
              sVar27 = (short)((int)uVar29 >> 2);
              sVar41 = (short)((int)uVar29 >> 1);
              if (uVar21 == 1) {
                sVar28 = sVar27 + sVar41 + sVar28;
              }
              else {
                sVar12 = (short)((int)uVar24 >> 1);
                if (uVar21 == 2) {
                  sVar28 = sVar41 + sVar12;
                }
                else {
                  if (uVar21 != 3) {
                    uVar29 = 0;
                    goto LAB_ram_00029c7c;
                  }
                  sVar28 = sVar27 + sVar12 + sVar28;
                }
              }
              uVar29 = (uint)sVar28;
            }
LAB_ram_00029c7c:
            iVar23 = -iVar16;
            uVar44 = local_c0[iVar48 + 1];
            uVar21 = local_c0[iVar20 + 1] - uVar44;
            uVar24 = uVar21;
            if ((int)uVar21 < 0) {
              uVar24 = ~uVar21;
            }
            iVar49 = 0x10 - (LZCOUNT(uVar24) + -1);
            if (iVar49 < 0x20) {
              if (iVar49 < -0x1f) {
                lVar5 = (longlong)(int)uVar21 << 0x1f;
              }
              else if (iVar49 < 0) {
                lVar5 = (longlong)(int)uVar21 << -iVar49;
              }
              else {
                lVar5 = (longlong)((int)uVar21 >> iVar49);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar21 >> 0x1f);
            }
            uVar21 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              uVar21 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              uVar21 = 0;
            }
            uVar6 = (ulonglong)(uint)(int)(short)uVar29 * (ulonglong)(uVar21 & 0xffff);
            uVar7 = (longlong)(int)(short)uVar29 * (longlong)(int)((int)(short)uVar21 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            uVar21 = (uint)uVar8;
            uVar32 = uVar21;
            if ((int)uVar21 < 0) {
              uVar32 = ~uVar21;
            }
            iVar49 = uVar21 << (LZCOUNT(uVar32) - 1U & 0x1f);
            iVar30 = ((-1 - (LZCOUNT(uVar24) + -1)) + iVar23) - (LZCOUNT(uVar32) - 1U);
            iVar46 = iVar49 >> 0x10;
            uVar18 = (ushort)((uint)iVar49 >> 0x10);
            uVar24 = (uint)(short)uVar18;
            uVar6 = (ulonglong)uVar24 * (ulonglong)uVar18;
            uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            uVar24 = (uint)uVar8;
            iVar42 = iVar30 + -7;
            uVar21 = uVar24;
            if ((int)uVar24 < 0) {
              uVar21 = ~uVar24;
            }
            iVar17 = LZCOUNT(uVar21) + -2;
            iVar30 = iVar30 * 2 - iVar17;
            uVar21 = iVar30 - 0xc;
            if (iVar17 < 0x20) {
              if (iVar17 < -0x1f) {
                lVar5 = (longlong)((int)uVar24 >> 0x1f);
              }
              else if (iVar17 < 0) {
                lVar5 = (longlong)((int)uVar24 >> -iVar17);
              }
              else {
                lVar5 = (longlong)(int)uVar24 << iVar17;
              }
            }
            else {
              lVar5 = (longlong)(int)uVar24 << 0x1f;
            }
            iVar17 = (int)lVar5;
            if (0x7fffffff < lVar5) {
              iVar17 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              iVar17 = -0x80000000;
            }
            if ((int)uVar21 < -0x1e) {
              iVar30 = -0x1e - uVar21;
              if (iVar30 < 0x20) {
                if (iVar30 < -0x1f) {
                  lVar5 = (longlong)iVar17 << 0x1f;
                }
                else if (iVar30 < 0) {
                  lVar5 = (longlong)iVar17 << -iVar30;
                }
                else {
                  lVar5 = (longlong)(iVar17 >> iVar30);
                }
              }
              else {
                lVar5 = (longlong)(iVar17 >> 0x1f);
              }
              iVar30 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar30 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar30 = -0x80000000;
              }
              uVar24 = iVar30 + 0x40000000;
              uVar21 = 0xffffffe2;
            }
            else {
              iVar30 = iVar30 + 0x12;
              if (iVar30 < 0x20) {
                if (iVar30 < -0x1f) {
                  lVar5 = 0x2000000000000000;
                }
                else if (iVar30 < 0) {
                  lVar5 = 0x40000000L << -iVar30;
                }
                else {
                  lVar5 = (longlong)(0x40000000 >> iVar30);
                }
              }
              else {
                lVar5 = 0;
              }
              iVar30 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar30 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar30 = -0x80000000;
              }
              uVar24 = iVar17 + iVar30;
            }
            uVar32 = uVar24;
            if ((int)uVar24 < 0) {
              uVar32 = ~uVar24;
            }
            uVar31 = LZCOUNT(uVar32) - 1;
            if ((uVar31 & 1) == (uVar21 & 1)) {
              uVar31 = LZCOUNT(uVar32) - 2;
            }
            iVar30 = 0x10 - uVar31;
            if (iVar30 < 0x20) {
              if (iVar30 < -0x1f) {
                lVar5 = (longlong)(int)uVar24 << 0x1f;
              }
              else if (iVar30 < 0) {
                lVar5 = (longlong)(int)uVar24 << -iVar30;
              }
              else {
                lVar5 = (longlong)((int)uVar24 >> iVar30);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar24 >> 0x1f);
            }
            sVar28 = (short)lVar5;
            if (0x7fffffff < lVar5) {
              sVar28 = -1;
            }
            if (lVar5 < -0x80000000) {
              sVar28 = 0;
            }
            iVar45 = (int)((int)sVar28 - 0x2000U) >> 2;
            iVar30 = iVar45 * 2;
            iVar17 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar30);
            iVar30 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar30);
            if (0x17fe < iVar45) {
              iVar30 = iVar17;
            }
            uVar24 = (int)sVar28 - 0x2000U & 3;
            if (uVar24 != 0) {
              sVar28 = (short)(iVar17 >> 1);
              sVar27 = sVar28;
              if (uVar24 == 1) {
LAB_ram_00029d98:
                iVar17 = (int)(short)(sVar27 + (short)(iVar17 >> 2) + (short)(iVar30 >> 2));
              }
              else {
                sVar27 = (short)(iVar30 >> 1);
                if (uVar24 == 2) {
                  iVar17 = (int)(short)(sVar28 + sVar27);
                }
                else {
                  if (uVar24 == 3) goto LAB_ram_00029d98;
                  iVar17 = 0;
                }
              }
            }
            iVar30 = ((int)((uVar21 - uVar31) + 0x1f) >> 1) + -0xf;
            iVar17 = iVar17 * 0x8000;
            if (iVar49 < 0) {
              iVar49 = -iVar49;
            }
            if (iVar42 < iVar30) {
              iVar42 = iVar30 - iVar42;
              if (iVar42 < 0x20) {
                if (iVar42 < -0x1f) {
                  lVar5 = (longlong)iVar49 << 0x1f;
                }
                else if (iVar42 < 0) {
                  lVar5 = (longlong)iVar49 << -iVar42;
                }
                else {
                  lVar5 = (longlong)(iVar49 >> iVar42);
                }
              }
              else {
                lVar5 = (longlong)(iVar49 >> 0x1f);
              }
              iVar49 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar49 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar49 = -0x80000000;
              }
              uVar24 = iVar49 + iVar17;
            }
            else {
              iVar30 = iVar42 - iVar30;
              if (iVar30 < 0x20) {
                if (iVar30 < -0x1f) {
                  lVar5 = (longlong)iVar17 << 0x1f;
                }
                else if (iVar30 < 0) {
                  lVar5 = (longlong)iVar17 << -iVar30;
                }
                else {
                  lVar5 = (longlong)(iVar17 >> iVar30);
                }
              }
              else {
                lVar5 = (longlong)(iVar17 >> 0x1f);
              }
              iVar30 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar30 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar30 = -0x80000000;
              }
              uVar24 = iVar49 + iVar30;
              iVar30 = iVar42;
            }
            uVar21 = uVar24;
            if ((int)uVar24 < 0) {
              uVar21 = ~uVar24;
            }
            iVar49 = 0x10 - (LZCOUNT(uVar21) + -1);
            if (iVar49 < 0x20) {
              if (iVar49 < -0x1f) {
                lVar5 = (longlong)(int)uVar24 << 0x1f;
              }
              else if (iVar49 < 0) {
                lVar5 = (longlong)(int)uVar24 << -iVar49;
              }
              else {
                lVar5 = (longlong)((int)uVar24 >> iVar49);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar24 >> 0x1f);
            }
            sVar28 = (short)lVar5;
            if (0x7fffffff < lVar5) {
              sVar28 = -1;
            }
            if (lVar5 < -0x80000000) {
              sVar28 = 0;
            }
            iVar42 = (iVar30 + 0x10) - (LZCOUNT(uVar21) + -1);
            iVar30 = (int)((int)sVar28 - 0x4000U) >> 2;
            iVar49 = iVar30 * 2;
            uVar21 = (uint)*(short *)(&DAT_ram_dcf81800 + iVar49);
            uVar24 = (int)*(short *)(&DAT_ram_dcf81802 + iVar49);
            if (0xffe < iVar30) {
              uVar24 = uVar21;
            }
            uVar32 = (int)sVar28 - 0x4000U & 3;
            if (uVar32 != 0) {
              sVar28 = (short)((int)uVar24 >> 2);
              sVar27 = (short)((int)uVar21 >> 1);
              sVar41 = (short)((int)uVar21 >> 2);
              if (uVar32 == 1) {
                sVar28 = sVar28 + sVar27 + sVar41;
              }
              else {
                sVar12 = (short)((int)uVar24 >> 1);
                if (uVar32 == 2) {
                  sVar28 = sVar12 + sVar27;
                }
                else {
                  if (uVar32 != 3) {
                    uVar21 = 0;
                    goto LAB_ram_00029e48;
                  }
                  sVar28 = sVar28 + sVar12 + sVar41;
                }
              }
              uVar21 = (uint)sVar28;
            }
LAB_ram_00029e48:
            if (iVar46 < 0) {
              uVar21 = -uVar21;
            }
            iVar30 = -iVar42;
            uVar24 = (uint)(short)uVar21;
            uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar21 & 0xffff);
            iVar42 = iVar42 * -2;
            iVar49 = iVar42 + -0x1c;
            uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            iVar46 = (int)uVar8;
            if (iVar49 < -0x1e) {
              iVar49 = -0x1e - iVar49;
              if (iVar49 < 0x20) {
                if (iVar49 < -0x1f) {
                  lVar5 = (longlong)iVar46 << 0x1f;
                }
                else if (iVar49 < 0) {
                  lVar5 = (longlong)iVar46 << -iVar49;
                }
                else {
                  lVar5 = (longlong)(iVar46 >> iVar49);
                }
              }
              else {
                lVar5 = (longlong)(iVar46 >> 0x1f);
              }
              iVar49 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar49 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar49 = -0x80000000;
              }
              uVar32 = iVar49 + 0x40000000;
              iVar49 = -0x1e;
            }
            else {
              iVar42 = iVar42 + 2;
              if (iVar42 < 0x20) {
                if (iVar42 < -0x1f) {
                  lVar5 = 0x2000000000000000;
                }
                else if (iVar42 < 0) {
                  lVar5 = 0x40000000L << -iVar42;
                }
                else {
                  lVar5 = (longlong)(0x40000000 >> iVar42);
                }
              }
              else {
                lVar5 = 0;
              }
              iVar42 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar42 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar42 = -0x80000000;
              }
              uVar32 = iVar42 + iVar46;
            }
            uVar31 = uVar32;
            if ((int)uVar32 < 0) {
              uVar31 = ~uVar32;
            }
            uVar33 = LZCOUNT(uVar31) - 1;
            if ((uVar33 & 1) == 0) {
              uVar33 = LZCOUNT(uVar31) - 2;
            }
            iVar46 = 0x10 - uVar33;
            if (iVar46 < 0x20) {
              if (iVar46 < -0x1f) {
                lVar5 = (longlong)(int)uVar32 << 0x1f;
              }
              else if (iVar46 < 0) {
                lVar5 = (longlong)(int)uVar32 << -iVar46;
              }
              else {
                lVar5 = (longlong)((int)uVar32 >> iVar46);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar32 >> 0x1f);
            }
            sVar28 = (short)lVar5;
            if (0x7fffffff < lVar5) {
              sVar28 = -1;
            }
            if (lVar5 < -0x80000000) {
              sVar28 = 0;
            }
            iVar42 = (int)((int)sVar28 - 0x2000U) >> 2;
            iVar46 = iVar42 * 2;
            sVar27 = *(short *)(&DAT_ram_dcfa1000 + iVar46);
            sVar41 = *(short *)(&DAT_ram_dcfa1002 + iVar46);
            if (0x17fe < iVar42) {
              sVar41 = sVar27;
            }
            uVar32 = (int)sVar28 - 0x2000U & 3;
            if (uVar32 != 0) {
              if (uVar32 == 1) {
                sVar27 = (sVar27 >> 1) + (sVar27 >> 2) + (sVar41 >> 2);
              }
              else if (uVar32 == 2) {
                sVar27 = (sVar27 >> 1) + (sVar41 >> 1);
              }
              else if (uVar32 == 3) {
                sVar27 = (sVar27 >> 2) + (sVar41 >> 1) + (sVar41 >> 2);
              }
              else {
                sVar27 = 0;
              }
            }
            iVar17 = (int)((int)sVar27 - 0x4000U) >> 2;
            iVar46 = iVar17 * 2;
            iVar42 = (int)*(short *)(&DAT_ram_dcf81800 + iVar46);
            iVar46 = (int)*(short *)(&DAT_ram_dcf81802 + iVar46);
            if (0xffe < iVar17) {
              iVar46 = iVar42;
            }
            uVar32 = (int)sVar27 - 0x4000U & 3;
            if (uVar32 != 0) {
              sVar28 = (short)(iVar46 >> 2);
              sVar27 = (short)(iVar42 >> 1);
              sVar41 = (short)(iVar42 >> 2);
              if (uVar32 == 1) {
                iVar42 = (int)(short)(sVar28 + sVar27 + sVar41);
              }
              else {
                sVar12 = (short)(iVar46 >> 1);
                if (uVar32 == 2) {
                  sVar28 = sVar27 + sVar12;
                }
                else {
                  if (uVar32 != 3) {
                    iVar42 = 0;
                    goto LAB_ram_00029f96;
                  }
                  sVar28 = sVar41 + sVar12 + sVar28;
                }
                iVar42 = (int)sVar28;
              }
            }
LAB_ram_00029f96:
            iVar46 = -((int)((iVar49 - uVar33) + 0x1f) >> 1);
            iVar49 = iVar46 + 1;
            if (iVar49 < 0x20) {
              if (iVar49 < -0x1f) {
                lVar5 = (longlong)(iVar42 >> 0x1f);
              }
              else if (iVar49 < 0) {
                lVar5 = (longlong)(iVar42 >> -iVar49);
              }
              else {
                lVar5 = (longlong)iVar42 << iVar49;
              }
            }
            else {
              lVar5 = (longlong)iVar42 << 0x1f;
            }
            uVar32 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              uVar32 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              uVar32 = 0;
            }
            uVar6 = (ulonglong)(uint)(int)(short)iVar42 * (ulonglong)(uVar21 & 0xffff);
            uVar7 = (longlong)(int)(short)iVar42 * (longlong)(int)(uVar24 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            iVar49 = (int)uVar8 >> 0x10;
            sVar28 = (short)(uVar8 >> 0x10);
            if (0x7fffffff < iVar49) {
              sVar28 = -1;
            }
            if (iVar49 < -0x80000000) {
              sVar28 = 0;
            }
            uVar21 = (uint)sVar28;
            uVar6 = (ulonglong)uVar21 * (ulonglong)(local_54 & 0xffff);
            uVar7 = (longlong)(int)uVar21 * (longlong)(int)(uVar36 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            uVar36 = (uint)uVar8;
            uVar6 = (ulonglong)uVar21 * (ulonglong)(uVar15 & 0xffff);
            uVar7 = (longlong)(int)uVar21 * (longlong)(int)(uVar38 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            uVar15 = (uint)uVar8;
            uVar38 = uVar36;
            if ((int)uVar36 < 0) {
              uVar38 = ~uVar36;
            }
            uVar21 = uVar15;
            if ((int)uVar15 < 0) {
              uVar21 = ~uVar15;
            }
            iVar49 = LZCOUNT(uVar21) + -1;
            if (LZCOUNT(uVar38) + -1 < LZCOUNT(uVar21) + -1) {
              iVar49 = LZCOUNT(uVar38) + -1;
            }
            iVar42 = 0x10 - iVar49;
            if (iVar42 < 0x20) {
              if (iVar42 < -0x1f) {
                lVar5 = (longlong)(int)uVar36 << 0x1f;
              }
              else if (iVar42 < 0) {
                lVar5 = (longlong)(int)uVar36 << -iVar42;
              }
              else {
                lVar5 = (longlong)((int)uVar36 >> iVar42);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar36 >> 0x1f);
            }
            uVar36 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              uVar36 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              uVar36 = 0x80000000;
            }
            if (iVar42 < 0x20) {
              if (iVar42 < -0x1f) {
                lVar5 = (longlong)(int)uVar15 << 0x1f;
              }
              else if (iVar42 < 0) {
                lVar5 = (longlong)(int)uVar15 << -iVar42;
              }
              else {
                lVar5 = (longlong)((int)uVar15 >> iVar42);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar15 >> 0x1f);
            }
            uVar15 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              uVar15 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              uVar15 = 0x80000000;
            }
            uVar6 = (ulonglong)uVar36 * (ulonglong)(uVar29 & 0xffff);
            uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar29 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            uVar36 = (uint)uVar8;
            uVar6 = (ulonglong)uVar15 * (ulonglong)(uVar29 & 0xffff);
            uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar29 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            uVar21 = (uint)(uVar8 >> 0x20);
            uVar15 = (uint)uVar8;
            uVar38 = uVar36;
            if ((int)uVar36 < 0) {
              uVar38 = ~uVar36;
            }
            uVar29 = uVar15;
            if ((int)uVar15 < 0) {
              uVar29 = ~uVar15;
            }
            iVar42 = LZCOUNT(uVar29) + -1;
            if (LZCOUNT(uVar38) + -1 < LZCOUNT(uVar29) + -1) {
              iVar42 = LZCOUNT(uVar38) + -1;
            }
            iVar17 = 0x10 - iVar42;
            if (iVar17 < 0x20) {
              if (iVar17 < -0x1f) {
                lVar5 = (longlong)(int)uVar36 << 0x1f;
              }
              else if (iVar17 < 0) {
                lVar5 = (longlong)(int)uVar36 << -iVar17;
              }
              else {
                lVar5 = (longlong)((int)uVar36 >> iVar17);
              }
            }
            else {
              lVar5 = (longlong)((int)uVar36 >> 0x1f);
            }
            iVar17 = (int)lVar5;
            if (0x7fffffff < lVar5) {
              iVar17 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              iVar17 = -0x80000000;
            }
            iVar37 = ((iVar23 + ((iVar46 + iVar37 + iVar30) - iVar49)) - iVar42) + 9;
            if (iVar37 < 0x20) {
              if (iVar37 < -0x1f) {
                lVar5 = (longlong)(iVar17 >> 0x1f);
              }
              else if (iVar37 < 0) {
                lVar5 = (longlong)(iVar17 >> -iVar37);
              }
              else {
                lVar5 = (longlong)iVar17 << iVar37;
              }
            }
            else {
              lVar5 = (longlong)iVar17 << 0x1f;
            }
            uVar36 = (uint)lVar5;
            if (0x7fffffff < lVar5) {
              uVar36 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              uVar36 = 0;
            }
            uVar38 = uVar47 - uVar22;
            if ((int)uVar38 < 0) {
              uVar29 = uVar38 - 0x10;
            }
            else {
              uVar29 = uVar38 + 0x10;
            }
            iVar37 = 100;
            iVar23 = 100;
            uVar32 = (int)(short)uVar32 << 0x10 | uVar32 & 0xffff;
            uVar36 = (int)(short)uVar36 << 0x10 | uVar36 & 0xffff;
            iVar49 = 4;
            LP_START = 0x2a09c;
            LP_END = 0x2a140;
            puVar13 = puVar26;
            puVar14 = local_9c;
            do {
              puVar39 = puVar14;
              puVar34 = puVar13;
              puVar25 = puVar35;
              uVar33 = *puVar34;
              uVar31 = *puVar25;
              if ((int)uVar38 < 0) {
                iVar46 = uVar33 << 0x10;
                if ((int)uVar29 < 0x20) {
                  if ((int)uVar29 < -0x1f) {
                    lVar5 = (longlong)(iVar46 >> 0x1f);
                  }
                  else if ((int)uVar29 < 0) {
                    lVar5 = (longlong)(iVar46 >> -uVar29);
                  }
                  else {
                    lVar5 = (longlong)iVar46 << uVar29;
                  }
                }
                else {
                  lVar5 = (longlong)iVar46 << 0x1f;
                }
                uVar10 = (uint)lVar5;
                if (0x7fffffff < lVar5) {
                  uVar10 = 0x7fffffff;
                }
                if (lVar5 < -0x80000000) {
                  uVar10 = 0;
                }
                if ((int)uVar38 < 0x20) {
                  if ((int)uVar38 < -0x1f) {
                    lVar5 = (longlong)((int)uVar33 >> 0x1f);
                  }
                  else if ((int)uVar38 < 0) {
                    lVar5 = (longlong)((int)uVar33 >> -uVar38);
                  }
                  else {
                    lVar5 = (longlong)(int)uVar33 << uVar38;
                  }
                }
                else {
                  lVar5 = (longlong)(int)uVar33 << 0x1f;
                }
                uVar33 = (uint)lVar5;
                if (0x7fffffff < lVar5) {
                  uVar33 = 0x7fffffff;
                }
                if (lVar5 < -0x80000000) {
                  uVar33 = 0x80000000;
                }
                uVar33 = uVar33 & 0xffff0000 | uVar10 & 0xffff;
              }
              else {
                uVar31 = (int)uVar31 >> (uVar38 & 0x1f) & 0xffff0000U |
                         (int)(uVar31 << 0x10) >> (uVar29 & 0x1f) & 0xffffU;
              }
              muldw(uVar33,uVar32);
              msubdw(uVar31,uVar36);
              *puVar39 = uVar15;
              puVar39[1] = uVar21;
              uVar10 = uVar15;
              if ((int)uVar15 < 0) {
                uVar10 = ~uVar15;
              }
              if (LZCOUNT(uVar10) + -1 < iVar37) {
                iVar37 = LZCOUNT(uVar10) + -1;
              }
              uVar10 = uVar21;
              if ((longlong)uVar8 < 0) {
                uVar10 = ~uVar21;
              }
              if (LZCOUNT(uVar10) + -1 < iVar37) {
                iVar37 = LZCOUNT(uVar10) + -1;
              }
              muldw(uVar31,uVar32);
              macdw(uVar33,uVar36);
              puVar39[2] = uVar15;
              puVar39[3] = uVar21;
              uVar31 = uVar15;
              if ((int)uVar15 < 0) {
                uVar31 = ~uVar15;
              }
              if (LZCOUNT(uVar31) + -1 < iVar23) {
                iVar23 = LZCOUNT(uVar31) + -1;
              }
              uVar31 = uVar21;
              if ((longlong)uVar8 < 0) {
                uVar31 = ~uVar21;
              }
              if (LZCOUNT(uVar31) + -1 < iVar23) {
                iVar23 = LZCOUNT(uVar31) + -1;
              }
              iVar49 = iVar49 + -1;
              puVar35 = puVar25 + 1;
              puVar13 = puVar34 + 1;
              puVar14 = puVar39 + 4;
            } while (iVar49 != 0);
            puVar34 = puVar34 + -3;
            puVar25 = puVar25 + -3;
            puVar39 = puVar39 + -0xc;
            iVar37 = iVar37 + -1;
            uVar15 = iVar23 - 1;
            iVar23 = 4;
            LP_START = 0x2a15c;
            LP_END = 0x2a1c0;
            do {
              uVar38 = puVar39[1];
              uVar36 = *puVar39;
              if (iVar37 < 0x20) {
                if (iVar37 < -0x1f) {
                  lVar5 = (longlong)((int)uVar38 >> 0x1f);
                }
                else if (iVar37 < 0) {
                  lVar5 = (longlong)((int)uVar38 >> -iVar37);
                }
                else {
                  lVar5 = (longlong)(int)uVar38 << iVar37;
                }
              }
              else {
                lVar5 = (longlong)(int)uVar38 << 0x1f;
              }
              uVar38 = (uint)lVar5;
              if (0x7fffffff < lVar5) {
                uVar38 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                uVar38 = 0x80000000;
              }
              if (iVar37 < 0x20) {
                if (iVar37 < -0x1f) {
                  lVar5 = (longlong)((int)uVar36 >> 0x1f);
                }
                else if (iVar37 < 0) {
                  lVar5 = (longlong)((int)uVar36 >> -iVar37);
                }
                else {
                  lVar5 = (longlong)(int)uVar36 << iVar37;
                }
              }
              else {
                lVar5 = (longlong)(int)uVar36 << 0x1f;
              }
              iVar49 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar49 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar49 = -0x80000000;
              }
              *puVar34 = uVar38 & 0xffff0000 | iVar49 >> 0x10 & 0xffffU;
              uVar38 = puVar39[3];
              uVar36 = puVar39[2];
              if ((int)uVar15 < 0x20) {
                if ((int)uVar15 < -0x1f) {
                  lVar5 = (longlong)((int)uVar38 >> 0x1f);
                }
                else if ((int)uVar15 < 0) {
                  lVar5 = (longlong)((int)uVar38 >> -uVar15);
                }
                else {
                  lVar5 = (longlong)(int)uVar38 << uVar15;
                }
              }
              else {
                lVar5 = (longlong)(int)uVar38 << 0x1f;
              }
              uVar38 = (uint)lVar5;
              if (0x7fffffff < lVar5) {
                uVar38 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                uVar38 = 0x80000000;
              }
              if ((int)uVar15 < 0x20) {
                if ((int)uVar15 < -0x1f) {
                  lVar5 = (longlong)((int)uVar36 >> 0x1f);
                }
                else if ((int)uVar15 < 0) {
                  lVar5 = (longlong)((int)uVar36 >> -uVar15);
                }
                else {
                  lVar5 = (longlong)(int)uVar36 << uVar15;
                }
              }
              else {
                lVar5 = (longlong)(int)uVar36 << 0x1f;
              }
              iVar49 = (int)lVar5;
              if (0x7fffffff < lVar5) {
                iVar49 = 0x7fffffff;
              }
              if (lVar5 < -0x80000000) {
                iVar49 = -0x80000000;
              }
              *puVar25 = uVar38 & 0xffff0000 | iVar49 >> 0x10 & 0xffffU;
              puVar34 = puVar34 + 1;
              puVar25 = puVar25 + 1;
              puVar39 = puVar39 + 4;
              iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
            if ((int)uVar22 < (int)uVar47) {
              uVar22 = uVar47;
            }
            local_c0[iVar48 + 5] = (uVar22 - (int)(short)iVar37) + 1;
            local_c0[iVar20 + 5] = (uVar22 - (uVar15 & 0xffff)) + 1;
            uVar6 = (ulonglong)uVar24 * (ulonglong)uVar19;
            uVar7 = (longlong)(int)uVar24 * (longlong)(int)((int)(short)uVar19 & 0xffff0000);
            uVar8 = uVar6 + uVar7;
            if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
              uVar8 = 0x7fffffffffffffff;
            }
            iVar49 = (int)(uVar8 >> 0x20);
            iVar23 = (int)uVar8;
            iVar37 = 5 - (iVar16 + iVar30);
            if (iVar37 < 0x20) {
              if (iVar37 < -0x1f) {
                lVar5 = (longlong)iVar23 << 0x1f;
              }
              else if (iVar37 < 0) {
                lVar5 = (longlong)iVar23 << -iVar37;
              }
              else {
                lVar5 = (longlong)(iVar23 >> iVar37);
              }
            }
            else {
              lVar5 = (longlong)(iVar23 >> 0x1f);
            }
            iVar37 = (int)lVar5;
            if (0x7fffffff < lVar5) {
              iVar37 = 0x7fffffff;
            }
            if (lVar5 < -0x80000000) {
              iVar37 = -0x80000000;
            }
            local_c0[iVar48 + 1] = uVar44 - iVar37;
            local_c0[iVar20 + 1] = local_c0[iVar20 + 1] + iVar37;
            uVar15 = local_c0[iVar48 + 1];
            if ((int)uVar15 < 1) {
              uVar15 = 1;
            }
            local_c0[iVar48 + 1] = uVar15;
            uVar15 = local_c0[iVar20 + 1];
            if ((int)uVar15 < 1) {
              uVar15 = 1;
            }
            local_c0[iVar20 + 1] = uVar15;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < 4);
      }
      iVar48 = iVar48 + 1;
      param_2 = iStack_f0;
    } while (iVar48 < 4);
  }
  iVar20 = 0;
  iVar48 = -1;
  if (0 < param_6) {
    do {
      uVar15 = 0xfffffc18;
      iVar37 = 0;
      do {
        if ((int)uVar15 < (int)local_c0[iVar37 + 1]) {
          uVar15 = local_c0[iVar37 + 1];
          iVar48 = iVar37;
        }
        iVar37 = iVar37 + 1;
      } while (iVar37 < 4);
      local_c0[iVar48 + 1] = 0xfffffc18;
      uVar22 = uVar15;
      if ((int)uVar15 < 0) {
        uVar22 = ~uVar15;
      }
      iVar37 = LZCOUNT(uVar22);
      iVar16 = 0x10 - (iVar37 + -1);
      if (iVar16 < 0x20) {
        if (iVar16 < -0x1f) {
          lVar5 = (longlong)(int)uVar15 << 0x1f;
        }
        else if (iVar16 < 0) {
          lVar5 = (longlong)(int)uVar15 << -iVar16;
        }
        else {
          lVar5 = (longlong)((int)uVar15 >> iVar16);
        }
      }
      else {
        lVar5 = (longlong)((int)uVar15 >> 0x1f);
      }
      sVar28 = (short)lVar5;
      if (0x7fffffff < lVar5) {
        sVar28 = -1;
      }
      if (lVar5 < -0x80000000) {
        sVar28 = 0;
      }
      iVar46 = (int)((int)sVar28 - 0x4000U) >> 2;
      iVar16 = iVar46 * 2;
      iVar30 = (int)*(short *)(&DAT_ram_dcf81800 + iVar16);
      iVar16 = (int)*(short *)(&DAT_ram_dcf81802 + iVar16);
      if (0xffe < iVar46) {
        iVar16 = iVar30;
      }
      uVar15 = (int)sVar28 - 0x4000U & 3;
      if (uVar15 != 0) {
        sVar28 = (short)(iVar16 >> 2);
        sVar27 = (short)(iVar30 >> 1);
        sVar41 = (short)(iVar30 >> 2);
        if (uVar15 == 1) {
          iVar30 = (int)(short)(sVar28 + sVar27 + sVar41);
        }
        else {
          sVar12 = (short)(iVar16 >> 1);
          if (uVar15 == 2) {
            iVar30 = (int)(short)(sVar27 + sVar12);
          }
          else if (uVar15 == 3) {
            iVar30 = (int)(short)(sVar12 + sVar41 + sVar28);
          }
          else {
            iVar30 = 0;
          }
        }
      }
      uVar36 = (int)(short)(iVar30 >> (iVar37 - 7U & 1)) - 0x2000;
      iVar30 = (int)uVar36 >> 2;
      iVar16 = iVar30 * 2;
      uVar22 = (uint)*(short *)(&DAT_ram_dcfa1000 + iVar16);
      uVar15 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar16);
      if (0x17fe < iVar30) {
        uVar15 = uVar22;
      }
      uVar36 = uVar36 & 3;
      if (uVar36 != 0) {
        sVar28 = (short)((int)uVar15 >> 2);
        sVar27 = (short)((int)uVar22 >> 1);
        sVar41 = (short)((int)uVar22 >> 2);
        if (uVar36 == 1) {
          sVar28 = sVar28 + sVar27 + sVar41;
        }
        else {
          sVar12 = (short)((int)uVar15 >> 1);
          if (uVar36 == 2) {
            sVar28 = sVar12 + sVar27;
          }
          else {
            if (uVar36 != 3) {
              uVar22 = 0;
              goto LAB_ram_0002a3a6;
            }
            sVar28 = sVar28 + sVar12 + sVar41;
          }
        }
        uVar22 = (uint)sVar28;
      }
LAB_ram_0002a3a6:
      uVar36 = (iVar37 + -6 >> 1) - 1;
      uVar15 = local_c0[iVar48 + 5];
      *(uint *)(iVar20 * 4 + param_5) = uVar22 << 0x10 | uVar36 & 0xffff;
      iVar37 = uVar36 + uVar15;
      iVar16 = iVar37 + -0xd;
      puVar35 = param_1 + iVar48 * 4;
      puVar26 = (uint *)(param_4 + iVar20 * 8);
      iVar37 = iVar37 + 3;
      iVar30 = 4;
      LP_START = 0x2a3f8;
      LP_END = 0x2a428;
      do {
        muldw(uVar22 | uVar22 << 0x10,*puVar35);
        if (iVar37 < 0x20) {
          if (iVar37 < -0x1f) {
            lVar5 = (longlong)(iVar49 >> 0x1f);
          }
          else if (iVar37 < 0) {
            lVar5 = (longlong)(iVar49 >> -iVar37);
          }
          else {
            lVar5 = (longlong)iVar49 << iVar37;
          }
        }
        else {
          lVar5 = (longlong)iVar49 << 0x1f;
        }
        uVar15 = (uint)lVar5;
        if (0x7fffffff < lVar5) {
          uVar15 = 0x7fffffff;
        }
        if (lVar5 < -0x80000000) {
          uVar15 = 0x80000000;
        }
        if (iVar16 < 0x20) {
          if (iVar16 < -0x1f) {
            lVar5 = (longlong)(iVar23 >> 0x1f);
          }
          else if (iVar16 < 0) {
            lVar5 = (longlong)(iVar23 >> -iVar16);
          }
          else {
            lVar5 = (longlong)iVar23 << iVar16;
          }
        }
        else {
          lVar5 = (longlong)iVar23 << 0x1f;
        }
        uVar36 = (uint)lVar5;
        if (0x7fffffff < lVar5) {
          uVar36 = 0x7fffffff;
        }
        if (lVar5 < -0x80000000) {
          uVar36 = 0;
        }
        *puVar26 = uVar15 & 0xffff0000 | uVar36 & 0xffff;
        puVar35 = puVar35 + 1;
        puVar26 = puVar26 + 1;
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
      iVar20 = iVar20 + 1;
    } while (iVar20 < param_6);
  }
  if ((uStack_d4 == 0) && (param_6 != 4)) {
    if (uStack_dc == 0) {
      iVar48 = 0;
      local_e0 = 0;
      puVar43 = param_4 + 8;
      puVar40 = param_4;
      do {
        uVar19 = *puVar40;
        puVar1 = puVar40 + 1;
        puVar40 = puVar40 + 2;
        uVar18 = *puVar43;
        puVar2 = puVar43 + 1;
        uVar15 = (uint)(short)uVar19;
        puVar43 = puVar43 + 2;
        uVar6 = (ulonglong)uVar15 * (ulonglong)uVar19;
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar15 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar15 = (uint)(short)*puVar1;
        uVar6 = (ulonglong)uVar15 * (ulonglong)*puVar1;
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar15 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar15 = (int)uVar8 + (int)uVar9;
        if (bVar11) {
          uVar22 = (uint)(short)uVar18;
          uVar36 = (uint)(short)*puVar2;
          uVar6 = (ulonglong)uVar22 * (ulonglong)uVar18;
          uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar22 & 0xffff0000);
          uVar8 = uVar6 + uVar7;
          if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
            uVar8 = 0x7fffffffffffffff;
          }
          uVar6 = (ulonglong)uVar36 * (ulonglong)*puVar2;
          uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar36 & 0xffff0000);
          uVar9 = uVar6 + uVar7;
          if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          uVar15 = uVar15 + (int)uVar8 + (int)uVar9;
        }
        iVar48 = iVar48 + 1;
        if ((int)local_e0 < (int)uVar15) {
          local_e0 = uVar15;
        }
      } while (iVar48 < 4);
    }
    iVar48 = 0;
    puVar40 = param_4 + 8;
    puVar43 = param_4 + 0x10;
    do {
      uVar22 = (uint)(short)*param_4;
      uVar47 = (uint)(short)*puVar40;
      uVar15 = (uint)(short)param_4[1];
      uVar38 = (uint)(short)puVar40[1];
      uVar36 = local_e0;
      if (uStack_dc != 0) {
        uVar6 = (ulonglong)uVar22 * (ulonglong)*param_4;
        uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar22 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar15 * (ulonglong)param_4[1];
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar15 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar36 = (int)uVar8 + (int)uVar9;
        if (1 < param_6) {
          uVar6 = (ulonglong)uVar47 * (ulonglong)*puVar40;
          uVar7 = (longlong)(int)uVar47 * (longlong)(int)(uVar47 & 0xffff0000);
          uVar8 = uVar6 + uVar7;
          if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
            uVar8 = 0x7fffffffffffffff;
          }
          uVar6 = (ulonglong)uVar38 * (ulonglong)puVar40[1];
          uVar7 = (longlong)(int)uVar38 * (longlong)(int)(uVar38 & 0xffff0000);
          uVar9 = uVar6 + uVar7;
          if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          uVar36 = uVar36 + (int)uVar8 + (int)uVar9;
        }
        if (2 < param_6) {
          local_48 = *puVar43;
          local_46 = puVar43[1];
          uVar24 = (uint)(short)local_48;
          uVar6 = (ulonglong)uVar24 * (ulonglong)local_48;
          uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
          uVar8 = uVar6 + uVar7;
          if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
            uVar8 = 0x7fffffffffffffff;
          }
          uVar24 = (uint)(short)local_46;
          uVar6 = (ulonglong)uVar24 * (ulonglong)local_46;
          uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
          uVar9 = uVar6 + uVar7;
          if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          uVar36 = ((int)uVar36 >> 1) + ((int)uVar8 + (int)uVar9 >> 1);
        }
      }
      uVar24 = uVar36;
      if ((int)uVar36 < 0) {
        uVar24 = ~uVar36;
      }
      iVar20 = LZCOUNT(uVar24);
      uVar24 = iVar20 - 1;
      if (((uStack_d8 != 0) && (bVar11)) || (2 < param_6)) {
        if ((uVar24 & 1) != 0) {
          uVar24 = iVar20 - 2;
        }
        iVar20 = 2 - uVar24;
      }
      else {
        if ((uVar24 & 1) == 0) {
          uVar24 = iVar20 - 2;
        }
        iVar20 = 1 - uVar24;
      }
      iVar37 = 0x10 - uVar24;
      if (iVar37 < 0x20) {
        if (iVar37 < -0x1f) {
          lVar5 = (longlong)(int)uVar36 << 0x1f;
        }
        else if (iVar37 < 0) {
          lVar5 = (longlong)(int)uVar36 << -iVar37;
        }
        else {
          lVar5 = (longlong)((int)uVar36 >> iVar37);
        }
      }
      else {
        lVar5 = (longlong)((int)uVar36 >> 0x1f);
      }
      sVar28 = (short)lVar5;
      if (0x7fffffff < lVar5) {
        sVar28 = -1;
      }
      if (lVar5 < -0x80000000) {
        sVar28 = 0;
      }
      iVar23 = (int)((int)sVar28 - 0x2000U) >> 2;
      iVar37 = iVar23 * 2;
      sVar27 = *(short *)(&DAT_ram_dcfa1000 + iVar37);
      sVar41 = *(short *)(&DAT_ram_dcfa1002 + iVar37);
      if (0x17fe < iVar23) {
        sVar41 = sVar27;
      }
      uVar36 = (int)sVar28 - 0x2000U & 3;
      if (uVar36 != 0) {
        if (uVar36 == 1) {
          sVar27 = (sVar27 >> 2) + (sVar27 >> 1) + (sVar41 >> 2);
        }
        else if (uVar36 == 2) {
          sVar27 = (sVar41 >> 1) + (sVar27 >> 1);
        }
        else if (uVar36 == 3) {
          sVar27 = (sVar41 >> 2) + (sVar41 >> 1) + (sVar27 >> 2);
        }
        else {
          sVar27 = 0;
        }
      }
      iVar23 = (int)((int)sVar27 - 0x4000U) >> 2;
      iVar37 = iVar23 * 2;
      sVar28 = *(short *)(&DAT_ram_dcf81800 + iVar37);
      sVar41 = *(short *)(&DAT_ram_dcf81802 + iVar37);
      if (0xffe < iVar23) {
        sVar41 = sVar28;
      }
      uVar36 = (int)sVar27 - 0x4000U & 3;
      if (uVar36 != 0) {
        if (uVar36 == 1) {
          sVar28 = (sVar41 >> 2) + (sVar28 >> 1) + (sVar28 >> 2);
        }
        else if (uVar36 == 2) {
          sVar28 = (sVar41 >> 1) + (sVar28 >> 1);
        }
        else if (uVar36 == 3) {
          sVar28 = (sVar41 >> 1) + (sVar28 >> 2) + (sVar41 >> 2);
        }
        else {
          sVar28 = 0;
        }
      }
      if ((uStack_d8 == 0) || (!bVar11)) {
        iVar20 = (iVar20 >> 1) + 0xe;
      }
      else {
        iVar23 = uVar47 + uVar22;
        iVar37 = uVar38 + uVar15;
        uVar47 = (uint)(short)((int)(uVar22 - uVar47) >> 1);
        uVar38 = (uint)(short)((int)(uVar15 - uVar38) >> 1);
        iVar20 = (iVar20 >> 1) + 0xd;
        uVar15 = (int)(short)(iVar37 >> 1);
        uVar22 = (int)(short)(iVar23 >> 1);
      }
      uVar36 = (uint)sVar28;
      uVar6 = (ulonglong)uVar36 * (ulonglong)(uVar22 & 0xffff);
      uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar22 & 0xffff0000);
      uVar8 = uVar6 + uVar7;
      if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
        uVar8 = 0x7fffffffffffffff;
      }
      iVar37 = (int)uVar8;
      uVar6 = (ulonglong)uVar36 * (ulonglong)(uVar15 & 0xffff);
      uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar15 & 0xffff0000);
      uVar8 = uVar6 + uVar7;
      if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
        uVar8 = 0x7fffffffffffffff;
      }
      iVar23 = (int)uVar8;
      if (iVar20 < 0x20) {
        if (iVar20 < -0x1f) {
          lVar5 = (longlong)iVar23 << 0x1f;
        }
        else if (iVar20 < 0) {
          lVar5 = (longlong)iVar23 << -iVar20;
        }
        else {
          lVar5 = (longlong)(iVar23 >> iVar20);
        }
      }
      else {
        lVar5 = (longlong)(iVar23 >> 0x1f);
      }
      uVar19 = (ushort)lVar5;
      if (0x7fffffff < lVar5) {
        uVar19 = 0xffff;
      }
      if (lVar5 < -0x80000000) {
        uVar19 = 0;
      }
      uVar6 = (ulonglong)uVar36 * (ulonglong)(uVar47 & 0xffff);
      uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar47 & 0xffff0000);
      uVar8 = uVar6 + uVar7;
      if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
        uVar8 = 0x7fffffffffffffff;
      }
      iVar23 = (int)uVar8;
      if (iVar20 < 0x20) {
        if (iVar20 < -0x1f) {
          lVar5 = (longlong)iVar23 << 0x1f;
        }
        else if (iVar20 < 0) {
          lVar5 = (longlong)iVar23 << -iVar20;
        }
        else {
          lVar5 = (longlong)(iVar23 >> iVar20);
        }
      }
      else {
        lVar5 = (longlong)(iVar23 >> 0x1f);
      }
      uVar18 = (ushort)lVar5;
      if (0x7fffffff < lVar5) {
        uVar18 = 0xffff;
      }
      if (lVar5 < -0x80000000) {
        uVar18 = 0;
      }
      uVar6 = (ulonglong)uVar36 * (ulonglong)(uVar38 & 0xffff);
      uVar7 = (longlong)(int)uVar36 * (longlong)(int)(uVar38 & 0xffff0000);
      uVar8 = uVar6 + uVar7;
      if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
        uVar8 = 0x7fffffffffffffff;
      }
      iVar23 = (int)uVar8;
      if (iVar20 < 0x20) {
        if (iVar20 < -0x1f) {
          lVar5 = (longlong)iVar23 << 0x1f;
        }
        else if (iVar20 < 0) {
          lVar5 = (longlong)iVar23 << -iVar20;
        }
        else {
          lVar5 = (longlong)(iVar23 >> iVar20);
        }
      }
      else {
        lVar5 = (longlong)(iVar23 >> 0x1f);
      }
      uVar3 = (ushort)lVar5;
      if (0x7fffffff < lVar5) {
        uVar3 = 0xffff;
      }
      if (lVar5 < -0x80000000) {
        uVar3 = 0;
      }
      if (iVar20 < 0x20) {
        if (iVar20 < -0x1f) {
          lVar5 = (longlong)iVar37 << 0x1f;
        }
        else if (iVar20 < 0) {
          lVar5 = (longlong)iVar37 << -iVar20;
        }
        else {
          lVar5 = (longlong)(iVar37 >> iVar20);
        }
      }
      else {
        lVar5 = (longlong)(iVar37 >> 0x1f);
      }
      uVar4 = (ushort)lVar5;
      if (0x7fffffff < lVar5) {
        uVar4 = 0xffff;
      }
      if (lVar5 < -0x80000000) {
        uVar4 = 0;
      }
      *param_4 = uVar4;
      param_4[1] = uVar19;
      *puVar40 = uVar18;
      puVar40[1] = uVar3;
      param_4 = param_4 + 2;
      puVar40 = puVar40 + 2;
      if (param_6 == 3) {
        uVar6 = (ulonglong)uVar36 * (ulonglong)local_48;
        uVar7 = (longlong)(int)uVar36 * (longlong)(int)((int)(short)local_48 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        iVar37 = (int)uVar8;
        if (iVar20 < 0x20) {
          if (iVar20 < -0x1f) {
            lVar5 = (longlong)iVar37 << 0x1f;
          }
          else if (iVar20 < 0) {
            lVar5 = (longlong)iVar37 << -iVar20;
          }
          else {
            lVar5 = (longlong)(iVar37 >> iVar20);
          }
        }
        else {
          lVar5 = (longlong)(iVar37 >> 0x1f);
        }
        uVar19 = (ushort)lVar5;
        if (0x7fffffff < lVar5) {
          uVar19 = 0xffff;
        }
        if (lVar5 < -0x80000000) {
          uVar19 = 0;
        }
        uVar6 = (ulonglong)uVar36 * (ulonglong)local_46;
        uVar7 = (longlong)(int)uVar36 * (longlong)(int)((int)(short)local_46 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        iVar37 = (int)uVar8;
        if (iVar20 < 0x20) {
          if (iVar20 < -0x1f) {
            lVar5 = (longlong)iVar37 << 0x1f;
          }
          else if (iVar20 < 0) {
            lVar5 = (longlong)iVar37 << -iVar20;
          }
          else {
            lVar5 = (longlong)(iVar37 >> iVar20);
          }
        }
        else {
          lVar5 = (longlong)(iVar37 >> 0x1f);
        }
        uVar18 = (ushort)lVar5;
        if (0x7fffffff < lVar5) {
          uVar18 = 0xffff;
        }
        if (lVar5 < -0x80000000) {
          uVar18 = 0;
        }
        *puVar43 = uVar19;
        puVar43[1] = uVar18;
        puVar43 = puVar43 + 2;
      }
      iVar48 = iVar48 + 1;
    } while (iVar48 < 4);
  }
  return;
}


