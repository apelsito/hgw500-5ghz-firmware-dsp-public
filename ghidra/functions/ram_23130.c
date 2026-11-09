/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023130 */

/* WARNING: Removing unreachable block (ram,0x00023356) */
/* WARNING: Removing unreachable block (ram,0x00023346) */
/* WARNING: Removing unreachable block (ram,0x000239de) */
/* WARNING: Removing unreachable block (ram,0x000239fe) */

void FUN_ram_00023130(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  short sVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  int iStack_44;
  short local_38;
  ulonglong uVar8;
  
  if ((param_4 != 1) && (iStack_44 = 0, 0 < param_3)) {
    do {
      iVar44 = 0;
      if (0 < param_5) {
        iVar18 = *param_2;
        do {
          uVar28 = iStack_44 * 8 + iVar44 * 2;
          uVar5 = (ulonglong)uVar28 * (ulonglong)(param_4 & 0xffff);
          uVar8 = (longlong)(int)uVar28 * (longlong)(int)(param_4 & 0xffff0000);
          uVar9 = uVar5 + uVar8;
          if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          iVar6 = (int)uVar9;
          uVar23 = (uint)*(char *)(param_1 + iVar6);
          uVar26 = (uint)*(char *)(param_1 + iVar6 + 1);
          uVar5 = (ulonglong)uVar23 * (ulonglong)(uVar23 & 0xffff);
          uVar8 = (longlong)(int)uVar23 * (longlong)(int)(uVar23 & 0xffff0000);
          uVar9 = uVar5 + uVar8;
          if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          uVar5 = (ulonglong)uVar26 * (ulonglong)(uVar26 & 0xffff);
          uVar8 = (longlong)(int)uVar26 * (longlong)(int)(uVar26 & 0xffff0000);
          uVar10 = uVar5 + uVar8;
          if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar10) < 0) {
            uVar10 = 0x7fffffffffffffff;
          }
          uVar42 = (int)uVar10 + (int)uVar9;
          uVar31 = uVar42;
          if ((int)uVar42 < 0) {
            uVar31 = ~uVar42;
          }
          uVar31 = (uint)(short)((short)LZCOUNT(uVar31) + -1);
          if ((uVar31 & 1) == 0) {
            iVar19 = 0x11 - uVar31;
          }
          else {
            iVar19 = 0x10 - uVar31;
          }
          if (iVar19 < 0x20) {
            if (iVar19 < -0x1f) {
              lVar4 = (longlong)(int)uVar42 << 0x1f;
            }
            else if (iVar19 < 0) {
              lVar4 = (longlong)(int)uVar42 << -iVar19;
            }
            else {
              lVar4 = (longlong)((int)uVar42 >> iVar19);
            }
          }
          else {
            lVar4 = (longlong)((int)uVar42 >> 0x1f);
          }
          sVar27 = (short)lVar4;
          if (0x7fffffff < lVar4) {
            sVar27 = -1;
          }
          if (lVar4 < -0x80000000) {
            sVar27 = 0;
          }
          iVar37 = (int)((int)sVar27 - 0x2000U) >> 2;
          iVar19 = iVar37 * 2;
          iVar25 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar19);
          iVar19 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar19);
          if (0x17fe < iVar37) {
            iVar19 = iVar25;
          }
          uVar20 = (int)sVar27 - 0x2000U & 3;
          if (uVar20 != 0) {
            sVar27 = (short)(iVar19 >> 2);
            sVar15 = (short)(iVar25 >> 2);
            sVar16 = (short)(iVar25 >> 1);
            if (uVar20 == 1) {
              iVar25 = (int)(short)(sVar27 + sVar15 + sVar16);
            }
            else {
              sVar17 = (short)(iVar19 >> 1);
              if (uVar20 == 2) {
                iVar25 = (int)(short)(sVar16 + sVar17);
              }
              else if (uVar20 == 3) {
                iVar25 = (int)(short)(sVar17 + sVar15 + sVar27);
              }
              else {
                iVar25 = 0;
              }
            }
          }
          iVar37 = (int)(iVar25 - 0x4000U) >> 2;
          iVar19 = iVar37 * 2;
          local_38 = *(short *)(&DAT_ram_dcf81800 + iVar19);
          sVar27 = *(short *)(&DAT_ram_dcf81802 + iVar19);
          if (0xffe < iVar37) {
            sVar27 = local_38;
          }
          uVar20 = iVar25 - 0x4000U & 3;
          if (uVar20 != 0) {
            if (uVar20 == 1) {
              local_38 = (sVar27 >> 2) + (local_38 >> 1) + (local_38 >> 2);
            }
            else if (uVar20 == 2) {
              local_38 = (sVar27 >> 1) + (local_38 >> 1);
            }
            else if (uVar20 == 3) {
              local_38 = (local_38 >> 2) + (sVar27 >> 1) + (sVar27 >> 2);
            }
            else {
              local_38 = 0;
            }
          }
          uVar20 = (uint)local_38;
          uVar5 = (ulonglong)uVar20 * (ulonglong)(uVar23 & 0xffff);
          uVar8 = (longlong)(int)uVar20 * (longlong)(int)(uVar23 & 0xffff0000);
          uVar9 = uVar5 + uVar8;
          if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          iVar19 = (int)uVar9;
          uVar5 = (ulonglong)uVar20 * (ulonglong)(uVar26 & 0xffff);
          uVar8 = (longlong)(int)uVar20 * (longlong)(int)(uVar26 & 0xffff0000);
          uVar9 = uVar5 + uVar8;
          if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
            uVar9 = 0x7fffffffffffffff;
          }
          iVar25 = (int)uVar9;
          iVar37 = 0xe - (short)((short)((int)(uVar31 + 1) >> 1) + -9);
          if (iVar37 < 0x20) {
            if (iVar37 < -0x1f) {
              lVar4 = (longlong)iVar19 << 0x1f;
            }
            else if (iVar37 < 0) {
              lVar4 = (longlong)iVar19 << -iVar37;
            }
            else {
              lVar4 = (longlong)(iVar19 >> iVar37);
            }
          }
          else {
            lVar4 = (longlong)(iVar19 >> 0x1f);
          }
          iVar19 = (int)lVar4;
          if (0x7fffffff < lVar4) {
            iVar19 = 0x7fffffff;
          }
          if (lVar4 < -0x80000000) {
            iVar19 = -0x80000000;
          }
          iVar19 = iVar19 + 1 >> 1;
          uVar3 = (undefined1)iVar19;
          if (0x7fffffff < iVar19) {
            uVar3 = 0xff;
          }
          if (iVar19 < -0x80000000) {
            uVar3 = 0;
          }
          *(undefined1 *)(iVar18 + uVar28) = uVar3;
          if (iVar37 < 0x20) {
            if (iVar37 < -0x1f) {
              lVar4 = (longlong)iVar25 << 0x1f;
            }
            else if (iVar37 < 0) {
              lVar4 = (longlong)iVar25 << -iVar37;
            }
            else {
              lVar4 = (longlong)(iVar25 >> iVar37);
            }
          }
          else {
            lVar4 = (longlong)(iVar25 >> 0x1f);
          }
          iVar19 = (int)lVar4;
          if (0x7fffffff < lVar4) {
            iVar19 = 0x7fffffff;
          }
          if (lVar4 < -0x80000000) {
            iVar19 = -0x80000000;
          }
          iVar19 = iVar19 + 1 >> 1;
          uVar3 = (undefined1)iVar19;
          if (0x7fffffff < iVar19) {
            uVar3 = 0xff;
          }
          if (iVar19 < -0x80000000) {
            uVar3 = 0;
          }
          ((undefined1 *)(iVar18 + uVar28))[1] = uVar3;
          uVar23 = 2;
          iVar19 = iVar6;
          if (1 < (int)param_4) {
            do {
              uVar26 = (uint)*(char *)(param_1 + iVar19 + 2);
              uVar31 = (uint)*(char *)(param_1 + iVar19 + 3);
              uVar5 = (ulonglong)uVar26 * (ulonglong)(uVar26 & 0xffff);
              uVar8 = (longlong)(int)uVar26 * (longlong)(int)(uVar26 & 0xffff0000);
              uVar9 = uVar5 + uVar8;
              if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                uVar9 = 0x7fffffffffffffff;
              }
              uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar31 & 0xffff);
              uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar31 & 0xffff0000);
              uVar10 = uVar5 + uVar8;
              if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar10) < 0) {
                uVar10 = 0x7fffffffffffffff;
              }
              uVar42 = uVar42 + (int)uVar9 + (int)uVar10;
              uVar26 = uVar42;
              if ((int)uVar42 < 0) {
                uVar26 = ~uVar42;
              }
              uVar26 = (uint)(short)((short)LZCOUNT(uVar26) + -1);
              if ((uVar26 & 1) == 0) {
                iVar25 = 0x11 - uVar26;
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar42 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar42 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar42 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar42 >> 0x1f);
                }
                sVar27 = (short)lVar4;
                if (0x7fffffff < lVar4) {
                  sVar27 = -1;
                }
                if (lVar4 < -0x80000000) {
                  sVar27 = 0;
                }
              }
              else {
                iVar25 = 0x10 - uVar26;
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar42 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar42 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar42 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar42 >> 0x1f);
                }
                sVar27 = (short)lVar4;
                if (0x7fffffff < lVar4) {
                  sVar27 = -1;
                }
                if (lVar4 < -0x80000000) {
                  sVar27 = 0;
                }
              }
              iVar34 = (int)((int)sVar27 - 0x2000U) >> 2;
              iVar25 = iVar34 * 2;
              iVar37 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar25);
              iVar25 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar25);
              if (0x17fe < iVar34) {
                iVar25 = iVar37;
              }
              uVar31 = (int)sVar27 - 0x2000U & 3;
              if (uVar31 != 0) {
                sVar27 = (short)(iVar25 >> 2);
                sVar15 = (short)(iVar37 >> 1);
                sVar16 = (short)(iVar37 >> 2);
                if (uVar31 == 1) {
                  iVar37 = (int)(short)(sVar15 + sVar16 + sVar27);
                }
                else {
                  sVar17 = (short)(iVar25 >> 1);
                  if (uVar31 == 2) {
                    iVar37 = (int)(short)(sVar15 + sVar17);
                  }
                  else if (uVar31 == 3) {
                    iVar37 = (int)(short)(sVar27 + sVar17 + sVar16);
                  }
                  else {
                    iVar37 = 0;
                  }
                }
              }
              iVar34 = (int)(iVar37 - 0x4000U) >> 2;
              iVar25 = iVar34 * 2;
              local_38 = *(short *)(&DAT_ram_dcf81800 + iVar25);
              sVar27 = *(short *)(&DAT_ram_dcf81802 + iVar25);
              if (0xffe < iVar34) {
                sVar27 = local_38;
              }
              uVar31 = iVar37 - 0x4000U & 3;
              if (uVar31 != 0) {
                if (uVar31 == 1) {
                  local_38 = (local_38 >> 1) + (local_38 >> 2) + (sVar27 >> 2);
                }
                else if (uVar31 == 2) {
                  local_38 = (sVar27 >> 1) + (local_38 >> 1);
                }
                else if (uVar31 == 3) {
                  local_38 = (sVar27 >> 2) + (sVar27 >> 1) + (local_38 >> 2);
                }
                else {
                  local_38 = 0;
                }
              }
              sVar27 = (short)((int)(uVar26 + 1) >> 1) + -9;
              if (param_4 == uVar23) {
                puVar21 = (undefined1 *)(iVar6 + param_1);
              }
              else {
                uVar5 = (ulonglong)uVar28 * (ulonglong)(uVar23 & 0xffff);
                uVar8 = (longlong)(int)uVar28 * (longlong)(int)(uVar23 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                puVar21 = (undefined1 *)(param_2[uVar23 - 1] + (int)uVar9);
              }
              if (param_6 == 0) {
                if (param_4 == uVar23) break;
                iVar25 = 0;
                if (0 < (int)uVar23) {
                  uVar26 = (uint)local_38;
                  iVar34 = 0xe - sVar27;
                  iVar37 = iVar6;
                  do {
                    pcVar1 = (char *)(param_1 + iVar37);
                    uVar31 = (uint)*(char *)(param_1 + iVar37 + 1);
                    iVar37 = iVar37 + 2;
                    uVar5 = (ulonglong)uVar26 * (ulonglong)((int)*pcVar1 & 0xffff);
                    uVar8 = (longlong)(int)uVar26 * (longlong)(int)((int)*pcVar1 & 0xffff0000);
                    uVar9 = uVar5 + uVar8;
                    if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                      uVar9 = 0x7fffffffffffffff;
                    }
                    iVar32 = (int)uVar9;
                    if (iVar34 < 0x20) {
                      if (iVar34 < -0x1f) {
                        lVar4 = (longlong)iVar32 << 0x1f;
                      }
                      else if (iVar34 < 0) {
                        lVar4 = (longlong)iVar32 << -iVar34;
                      }
                      else {
                        lVar4 = (longlong)(iVar32 >> iVar34);
                      }
                    }
                    else {
                      lVar4 = (longlong)(iVar32 >> 0x1f);
                    }
                    iVar32 = (int)lVar4;
                    if (0x7fffffff < lVar4) {
                      iVar32 = 0x7fffffff;
                    }
                    if (lVar4 < -0x80000000) {
                      iVar32 = -0x80000000;
                    }
                    iVar32 = iVar32 + 1 >> 1;
                    uVar3 = (undefined1)iVar32;
                    if (0x7fffffff < iVar32) {
                      uVar3 = 0xff;
                    }
                    if (iVar32 < -0x80000000) {
                      uVar3 = 0;
                    }
                    puVar22 = puVar21 + 1;
                    *puVar21 = uVar3;
                    uVar5 = (ulonglong)uVar26 * (ulonglong)(uVar31 & 0xffff);
                    uVar8 = (longlong)(int)uVar26 * (longlong)(int)(uVar31 & 0xffff0000);
                    uVar9 = uVar5 + uVar8;
                    if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                      uVar9 = 0x7fffffffffffffff;
                    }
                    iVar32 = (int)uVar9;
                    if (iVar34 < 0x20) {
                      if (iVar34 < -0x1f) {
                        lVar4 = (longlong)iVar32 << 0x1f;
                      }
                      else if (iVar34 < 0) {
                        lVar4 = (longlong)iVar32 << -iVar34;
                      }
                      else {
                        lVar4 = (longlong)(iVar32 >> iVar34);
                      }
                    }
                    else {
                      lVar4 = (longlong)(iVar32 >> 0x1f);
                    }
                    iVar32 = (int)lVar4;
                    if (0x7fffffff < lVar4) {
                      iVar32 = 0x7fffffff;
                    }
                    if (lVar4 < -0x80000000) {
                      iVar32 = -0x80000000;
                    }
                    iVar25 = iVar25 + 1;
                    iVar32 = iVar32 + 1 >> 1;
                    uVar3 = (undefined1)iVar32;
                    if (0x7fffffff < iVar32) {
                      uVar3 = 0xff;
                    }
                    if (iVar32 < -0x80000000) {
                      uVar3 = 0;
                    }
                    puVar21 = puVar21 + 2;
                    *puVar22 = uVar3;
                  } while (iVar25 < (int)uVar23);
                }
              }
              else if (uVar23 == 2) {
                cVar2 = *(char *)(param_1 + iVar6);
                iVar25 = (int)*(char *)(param_1 + iVar6 + 1);
                iVar34 = (int)*(char *)(param_1 + iVar6 + 2);
                iVar37 = (int)*(char *)(param_1 + iVar6 + 3);
                uVar26 = iVar34 + cVar2;
                uVar5 = (ulonglong)(uint)(int)(short)DAT_ram_00055940 * (ulonglong)(uVar26 & 0xffff)
                ;
                uVar8 = (longlong)(int)(short)DAT_ram_00055940 *
                        (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar26 = (uint)uVar9;
                uVar31 = uVar26;
                if ((int)uVar26 < 0) {
                  uVar31 = ~uVar26;
                }
                iVar32 = 0x10 - (LZCOUNT(uVar31) + -1);
                uVar20 = (uint)local_38;
                if (iVar32 < 0x20) {
                  if (iVar32 < -0x1f) {
                    lVar4 = (longlong)(int)uVar26 << 0x1f;
                  }
                  else if (iVar32 < 0) {
                    lVar4 = (longlong)(int)uVar26 << -iVar32;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar26 >> iVar32);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar26 >> 0x1f);
                }
                uVar26 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar26 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar26 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar20 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar20 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar32 = (int)uVar9;
                iVar35 = 0xd - sVar27;
                iVar38 = LZCOUNT(uVar31) + -1 + iVar35;
                if (iVar38 < 0x20) {
                  if (iVar38 < -0x1f) {
                    lVar4 = (longlong)iVar32 << 0x1f;
                  }
                  else if (iVar38 < 0) {
                    lVar4 = (longlong)iVar32 << -iVar38;
                  }
                  else {
                    lVar4 = (longlong)(iVar32 >> iVar38);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar32 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                *puVar21 = uVar3;
                uVar26 = iVar37 + iVar25;
                uVar5 = (ulonglong)uVar26 * (ulonglong)DAT_ram_00055940;
                uVar8 = (longlong)(int)uVar26 *
                        (longlong)(int)((int)(short)DAT_ram_00055940 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar26 = (uint)uVar9;
                uVar31 = uVar26;
                if ((int)uVar26 < 0) {
                  uVar31 = ~uVar26;
                }
                iVar32 = 0x10 - (LZCOUNT(uVar31) + -1);
                if (iVar32 < 0x20) {
                  if (iVar32 < -0x1f) {
                    lVar4 = (longlong)(int)uVar26 << 0x1f;
                  }
                  else if (iVar32 < 0) {
                    lVar4 = (longlong)(int)uVar26 << -iVar32;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar26 >> iVar32);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar26 >> 0x1f);
                }
                uVar26 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar26 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar26 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar20 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar20 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar32 = (int)uVar9;
                iVar38 = LZCOUNT(uVar31) + -1 + iVar35;
                if (iVar38 < 0x20) {
                  if (iVar38 < -0x1f) {
                    lVar4 = (longlong)iVar32 << 0x1f;
                  }
                  else if (iVar38 < 0) {
                    lVar4 = (longlong)iVar32 << -iVar38;
                  }
                  else {
                    lVar4 = (longlong)(iVar32 >> iVar38);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar32 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[1] = uVar3;
                uVar26 = cVar2 - iVar34;
                uVar5 = (ulonglong)uVar26 * (ulonglong)DAT_ram_00055940;
                uVar8 = (longlong)(int)uVar26 *
                        (longlong)(int)((int)(short)DAT_ram_00055940 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar26 = (uint)uVar9;
                uVar31 = uVar26;
                if ((int)uVar26 < 0) {
                  uVar31 = ~uVar26;
                }
                iVar34 = 0x10 - (LZCOUNT(uVar31) + -1);
                if (iVar34 < 0x20) {
                  if (iVar34 < -0x1f) {
                    lVar4 = (longlong)(int)uVar26 << 0x1f;
                  }
                  else if (iVar34 < 0) {
                    lVar4 = (longlong)(int)uVar26 << -iVar34;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar26 >> iVar34);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar26 >> 0x1f);
                }
                uVar26 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar26 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar26 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar20 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar20 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar34 = (int)uVar9;
                iVar32 = LZCOUNT(uVar31) + -1 + iVar35;
                if (iVar32 < 0x20) {
                  if (iVar32 < -0x1f) {
                    lVar4 = (longlong)iVar34 << 0x1f;
                  }
                  else if (iVar32 < 0) {
                    lVar4 = (longlong)iVar34 << -iVar32;
                  }
                  else {
                    lVar4 = (longlong)(iVar34 >> iVar32);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar34 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[2] = uVar3;
                uVar26 = iVar25 - iVar37;
                uVar5 = (ulonglong)uVar26 * (ulonglong)DAT_ram_00055940;
                uVar8 = (longlong)(int)uVar26 *
                        (longlong)(int)((int)(short)DAT_ram_00055940 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar26 = (uint)uVar9;
                uVar31 = uVar26;
                if ((int)uVar26 < 0) {
                  uVar31 = ~uVar26;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar31) + -1);
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar26 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar26 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar26 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar26 >> 0x1f);
                }
                uVar26 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar26 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar26 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar20 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar20 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar35 = LZCOUNT(uVar31) + -1 + iVar35;
                if (iVar35 < 0x20) {
                  if (iVar35 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar35 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar35;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar35);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[3] = uVar3;
              }
              else if (uVar23 == 3) {
                uVar31 = (uint)*(char *)(param_1 + iVar6);
                uVar39 = (uint)*(char *)(param_1 + iVar6 + 1);
                uVar36 = (uint)*(char *)(param_1 + iVar6 + 2);
                uVar33 = (uint)*(char *)(param_1 + iVar6 + 3);
                uVar30 = (uint)*(char *)(param_1 + iVar6 + 4);
                uVar20 = (uint)*(char *)(param_1 + iVar6 + 5);
                uVar26 = uVar36 + uVar31 + uVar30;
                uVar5 = (ulonglong)(uint)(int)(short)DAT_ram_00055a00 * (ulonglong)(uVar26 & 0xffff)
                ;
                uVar8 = (longlong)(int)(short)DAT_ram_00055a00 *
                        (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar26 = (uint)uVar9;
                uVar43 = uVar26;
                if ((int)uVar26 < 0) {
                  uVar43 = ~uVar26;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar43) + -1);
                uVar41 = (uint)local_38;
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar26 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar26 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar26 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar26 >> 0x1f);
                }
                uVar26 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar26 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar26 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar41 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar41 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar37 = 0xd - sVar27;
                iVar34 = LZCOUNT(uVar43) + -1 + iVar37;
                if (iVar34 < 0x20) {
                  if (iVar34 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar34 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar34;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar34);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                *puVar21 = uVar3;
                uVar26 = uVar33 + uVar39 + uVar20;
                uVar5 = (ulonglong)uVar26 * (ulonglong)DAT_ram_00055a00;
                uVar8 = (longlong)(int)uVar26 *
                        (longlong)(int)((int)(short)DAT_ram_00055a00 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar26 = (uint)uVar9;
                uVar43 = uVar26;
                if ((int)uVar26 < 0) {
                  uVar43 = ~uVar26;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar43) + -1);
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar26 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar26 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar26 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar26 >> 0x1f);
                }
                uVar26 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar26 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar26 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar41 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar41 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar34 = LZCOUNT(uVar43) + -1 + iVar37;
                if (iVar34 < 0x20) {
                  if (iVar34 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar34 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar34;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar34);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[1] = uVar3;
                uVar5 = (ulonglong)(uint)(int)(short)DAT_ram_00055a00 * (ulonglong)(uVar31 & 0xffff)
                ;
                uVar8 = (longlong)(int)(short)DAT_ram_00055a00 *
                        (longlong)(int)(uVar31 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a02 * (ulonglong)(uVar39 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a02 * (longlong)(int)(uVar39 & 0xffff0000);
                uVar10 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar10) < 0) {
                  uVar10 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a04 * (ulonglong)(uVar36 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a04 * (longlong)(int)(uVar36 & 0xffff0000);
                uVar11 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar11) < 0) {
                  uVar11 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a06 * (ulonglong)(uVar33 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a06 * (longlong)(int)(uVar33 & 0xffff0000);
                uVar12 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar12) < 0) {
                  uVar12 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a08 * (ulonglong)(uVar30 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a08 * (longlong)(int)(uVar30 & 0xffff0000);
                uVar13 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar13) < 0) {
                  uVar13 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a0a * (ulonglong)(uVar20 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a0a * (longlong)(int)(uVar20 & 0xffff0000);
                uVar14 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar14) < 0) {
                  uVar14 = 0x7fffffffffffffff;
                }
                uVar43 = (((((int)uVar9 - (int)uVar10) + (int)uVar11) - (int)uVar12) + (int)uVar13)
                         - (int)uVar14;
                uVar26 = uVar43;
                if ((int)uVar43 < 0) {
                  uVar26 = ~uVar43;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar26) + -1);
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar43 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar43 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar43 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar43 >> 0x1f);
                }
                uVar43 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar43 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar43 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar41 * (ulonglong)(uVar43 & 0xffff);
                uVar8 = (longlong)(int)uVar41 * (longlong)(int)(uVar43 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar34 = LZCOUNT(uVar26) + -1 + iVar37;
                if (iVar34 < 0x20) {
                  if (iVar34 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar34 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar34;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar34);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[2] = uVar3;
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a02 * (ulonglong)(uVar31 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a02 * (longlong)(int)(uVar31 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)(short)DAT_ram_00055a00 * (ulonglong)(uVar39 & 0xffff)
                ;
                uVar8 = (longlong)(int)(short)DAT_ram_00055a00 *
                        (longlong)(int)(uVar39 & 0xffff0000);
                uVar10 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar10) < 0) {
                  uVar10 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a06 * (ulonglong)(uVar36 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a06 * (longlong)(int)(uVar36 & 0xffff0000);
                uVar11 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar11) < 0) {
                  uVar11 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a04 * (ulonglong)(uVar33 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a04 * (longlong)(int)(uVar33 & 0xffff0000);
                uVar12 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar12) < 0) {
                  uVar12 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a0a * (ulonglong)(uVar30 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a0a * (longlong)(int)(uVar30 & 0xffff0000);
                uVar13 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar13) < 0) {
                  uVar13 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a08 * (ulonglong)(uVar20 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a08 * (longlong)(int)(uVar20 & 0xffff0000);
                uVar14 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar14) < 0) {
                  uVar14 = 0x7fffffffffffffff;
                }
                uVar43 = (int)uVar9 + (int)uVar10 + (int)uVar11 + (int)uVar12 + (int)uVar13 +
                         (int)uVar14;
                uVar26 = uVar43;
                if ((int)uVar43 < 0) {
                  uVar26 = ~uVar43;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar26) + -1);
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar43 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar43 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar43 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar43 >> 0x1f);
                }
                uVar43 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar43 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar43 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar41 * (ulonglong)(uVar43 & 0xffff);
                uVar8 = (longlong)(int)uVar41 * (longlong)(int)(uVar43 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar34 = LZCOUNT(uVar26) + -1 + iVar37;
                if (iVar34 < 0x20) {
                  if (iVar34 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar34 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar34;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar34);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[3] = uVar3;
                uVar5 = (ulonglong)(uint)(int)(short)DAT_ram_00055a00 * (ulonglong)(uVar31 & 0xffff)
                ;
                uVar8 = (longlong)(int)(short)DAT_ram_00055a00 *
                        (longlong)(int)(uVar31 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a02 * (ulonglong)(uVar39 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a02 * (longlong)(int)(uVar39 & 0xffff0000);
                uVar10 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar10) < 0) {
                  uVar10 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a08 * (ulonglong)(uVar36 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a08 * (longlong)(int)(uVar36 & 0xffff0000);
                uVar11 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar11) < 0) {
                  uVar11 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a0a * (ulonglong)(uVar33 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a0a * (longlong)(int)(uVar33 & 0xffff0000);
                uVar12 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar12) < 0) {
                  uVar12 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a04 * (ulonglong)(uVar30 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a04 * (longlong)(int)(uVar30 & 0xffff0000);
                uVar13 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar13) < 0) {
                  uVar13 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a06 * (ulonglong)(uVar20 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a06 * (longlong)(int)(uVar20 & 0xffff0000);
                uVar14 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar14) < 0) {
                  uVar14 = 0x7fffffffffffffff;
                }
                uVar43 = ((int)uVar13 + ((((int)uVar9 - (int)uVar10) + (int)uVar11) - (int)uVar12))
                         - (int)uVar14;
                uVar26 = uVar43;
                if ((int)uVar43 < 0) {
                  uVar26 = ~uVar43;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar26) + -1);
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar43 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar43 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar43 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar43 >> 0x1f);
                }
                uVar43 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar43 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar43 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar41 * (ulonglong)(uVar43 & 0xffff);
                uVar8 = (longlong)(int)uVar41 * (longlong)(int)(uVar43 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar34 = LZCOUNT(uVar26) + -1 + iVar37;
                if (iVar34 < 0x20) {
                  if (iVar34 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar34 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar34;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar34);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[4] = uVar3;
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a02 * (ulonglong)(uVar31 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a02 * (longlong)(int)(uVar31 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)(short)DAT_ram_00055a00 * (ulonglong)(uVar39 & 0xffff)
                ;
                uVar8 = (longlong)(int)(short)DAT_ram_00055a00 *
                        (longlong)(int)(uVar39 & 0xffff0000);
                uVar10 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar10) < 0) {
                  uVar10 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a0a * (ulonglong)(uVar36 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a0a * (longlong)(int)(uVar36 & 0xffff0000);
                uVar11 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar11) < 0) {
                  uVar11 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a08 * (ulonglong)(uVar33 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a08 * (longlong)(int)(uVar33 & 0xffff0000);
                uVar12 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar12) < 0) {
                  uVar12 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a06 * (ulonglong)(uVar30 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a06 * (longlong)(int)(uVar30 & 0xffff0000);
                uVar13 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar13) < 0) {
                  uVar13 = 0x7fffffffffffffff;
                }
                uVar5 = (ulonglong)(uint)(int)DAT_ram_00055a04 * (ulonglong)(uVar20 & 0xffff);
                uVar8 = (longlong)(int)DAT_ram_00055a04 * (longlong)(int)(uVar20 & 0xffff0000);
                uVar14 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar14) < 0) {
                  uVar14 = 0x7fffffffffffffff;
                }
                uVar31 = (int)uVar14 +
                         (int)uVar9 + (int)uVar10 + (int)uVar11 + (int)uVar12 + (int)uVar13;
                uVar26 = uVar31;
                if ((int)uVar31 < 0) {
                  uVar26 = ~uVar31;
                }
                iVar25 = 0x10 - (LZCOUNT(uVar26) + -1);
                if (iVar25 < 0x20) {
                  if (iVar25 < -0x1f) {
                    lVar4 = (longlong)(int)uVar31 << 0x1f;
                  }
                  else if (iVar25 < 0) {
                    lVar4 = (longlong)(int)uVar31 << -iVar25;
                  }
                  else {
                    lVar4 = (longlong)((int)uVar31 >> iVar25);
                  }
                }
                else {
                  lVar4 = (longlong)((int)uVar31 >> 0x1f);
                }
                uVar31 = (uint)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar31 = 0x7fffffff;
                }
                if (lVar4 < -0x80000000) {
                  uVar31 = 0x80000000;
                }
                uVar5 = (ulonglong)uVar41 * (ulonglong)(uVar31 & 0xffff);
                uVar8 = (longlong)(int)uVar41 * (longlong)(int)(uVar31 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                iVar37 = LZCOUNT(uVar26) + -1 + iVar37;
                if (iVar37 < 0x20) {
                  if (iVar37 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar37 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar37;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar37);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[5] = uVar3;
              }
              else if (uVar23 == 4) {
                iVar35 = (int)*(char *)(param_1 + iVar6 + 1);
                iVar34 = (int)*(char *)(param_1 + iVar6 + 2);
                iVar38 = (int)*(char *)(param_1 + iVar6 + 3);
                iVar40 = (int)*(char *)(param_1 + iVar6 + 4);
                iVar45 = (int)*(char *)(param_1 + iVar6 + 5);
                iVar25 = (int)*(char *)(param_1 + iVar6 + 6);
                iVar32 = (int)*(char *)(param_1 + iVar6 + 7);
                iVar37 = iVar34 + *(char *)(param_1 + iVar6);
                uVar31 = (uint)local_38;
                uVar26 = iVar37 + iVar40 + iVar25;
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar24 = (int)uVar9;
                iVar34 = *(char *)(param_1 + iVar6) - iVar34;
                iVar29 = 0xf - sVar27;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar24 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar24 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar24 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar24 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                *puVar21 = uVar3;
                iVar24 = iVar38 + iVar35;
                uVar26 = iVar24 + iVar45 + iVar32;
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar7 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar7 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar7 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar7 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar7 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[1] = uVar3;
                uVar26 = (iVar34 + iVar40) - iVar25;
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar7 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar7 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar7 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar7 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar7 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[2] = uVar3;
                iVar35 = iVar35 - iVar38;
                uVar26 = (iVar35 + iVar45) - iVar32;
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar38 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar38 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar38 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar38 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar38 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[3] = uVar3;
                uVar26 = (iVar37 - iVar40) - iVar25;
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar37 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar37 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar37 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar37 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar37 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[4] = uVar3;
                uVar26 = (iVar24 - iVar45) - iVar32;
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar37 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar37 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar37 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar37 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar37 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[5] = uVar3;
                uVar26 = iVar25 + (iVar34 - iVar40);
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[6] = uVar3;
                uVar26 = iVar32 + (iVar35 - iVar45);
                uVar5 = (ulonglong)uVar31 * (ulonglong)(uVar26 & 0xffff);
                uVar8 = (longlong)(int)uVar31 * (longlong)(int)(uVar26 & 0xffff0000);
                uVar9 = uVar5 + uVar8;
                if (-1 < (longlong)(uVar5 ^ uVar8) && (longlong)(uVar5 ^ uVar9) < 0) {
                  uVar9 = 0x7fffffffffffffff;
                }
                iVar25 = (int)uVar9;
                if (iVar29 < 0x20) {
                  if (iVar29 < -0x1f) {
                    lVar4 = (longlong)iVar25 << 0x1f;
                  }
                  else if (iVar29 < 0) {
                    lVar4 = (longlong)iVar25 << -iVar29;
                  }
                  else {
                    lVar4 = (longlong)(iVar25 >> iVar29);
                  }
                }
                else {
                  lVar4 = (longlong)(iVar25 >> 0x1f);
                }
                uVar3 = (undefined1)lVar4;
                if (0x7fffffff < lVar4) {
                  uVar3 = 0xff;
                }
                if (lVar4 < -0x80000000) {
                  uVar3 = 0;
                }
                puVar21[7] = uVar3;
              }
              uVar23 = uVar23 + 1;
              iVar19 = iVar19 + 2;
            } while ((int)uVar23 <= (int)param_4);
          }
          iVar44 = iVar44 + 1;
        } while (iVar44 < param_5);
      }
      iStack_44 = iStack_44 + 1;
    } while (iStack_44 < param_3);
  }
  return;
}


