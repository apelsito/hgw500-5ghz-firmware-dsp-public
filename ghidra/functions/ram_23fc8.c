/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023fc8 */

/* WARNING: Removing unreachable block (ram,0x000244b8) */
/* WARNING: Removing unreachable block (ram,0x00024576) */

undefined4 FUN_ram_00023fc8(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  int iStack_78;
  ushort local_70 [2];
  int local_6c [4];
  undefined1 auStack_5c [8];
  uint auStack_54 [4];
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  
  local_70[0] = 0x80;
  iStack_78 = 1;
  uVar15 = *(uint *)(param_1 + 0x3c);
  iVar21 = param_2[3] + 1;
  if ((int)uVar15 < 1) {
    uVar15 = 1;
  }
  puVar5 = (undefined1 *)FUN_ram_000284e4(0x400);
  uVar15 = uVar15 & 0xff;
  puStack_44 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000552c4,s_os_dsp_scheduler_c_ram_00055270
                     ,0x525);
    uVar10 = FUN_ram_00028530();
    uVar12 = 0x400;
  }
  else {
    puVar6 = (undefined1 *)FUN_ram_000284e4(0x800);
    puStack_40 = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000552c4,
                       s_os_dsp_scheduler_c_ram_00055270,0x529);
      uVar10 = FUN_ram_00028530();
      uVar12 = 0x800;
    }
    else {
      puVar7 = (undefined1 *)FUN_ram_000284e4(0xc00);
      puStack_3c = puVar7;
      if (puVar7 != (undefined1 *)0x0) {
        uVar13 = param_2[5];
        if (2 < uVar13) {
          uVar13 = 0;
          param_2[5] = 0;
        }
        if ((*(int *)(param_1 + 8) == 4) && (*param_2 == 1)) {
          iVar8 = FUN_ram_00025994(param_1,param_2);
          if (iVar8 != 0) {
            uVar13 = param_2[5];
            goto LAB_ram_0002408a;
          }
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        else {
LAB_ram_0002408a:
          iVar8 = param_2[4] + 1;
          if (uVar13 == 0) {
            iStack_78 = 2;
          }
          FUN_ram_00033e48(param_4,auStack_5c,param_2);
          iVar16 = param_2[3];
          puVar20 = (undefined1 *)(param_4 + iVar16 + 1);
          if (*(int *)(param_1 + 8) == 3) {
            iVar16 = 3;
            param_2[3] = 3;
          }
          uVar14 = param_2[2];
          uVar13 = 1 << (uVar14 & 0x1f) & 0xff;
          if (*(int *)(param_1 + 8) == 1) {
            puVar17 = puVar20 + uVar13 * 0x400;
            if (puVar20 < puVar17) {
              puVar9 = puVar20;
              do {
                if (puVar17 + 1 < puVar9 + 0x10) break;
                puVar9 = (undefined1 *)FUN_ram_00022dd8();
              } while (puVar9 < puVar17);
              uVar14 = param_2[2];
            }
            uVar18 = 2;
            FUN_ram_00032b3c(puVar20,&DAT_ram_0005c220,local_70[0],(char)param_2[5],uVar15,uVar14,
                             param_2[4] + 1);
            local_70[0] = local_70[0] >> 1;
            uVar14 = (uint)local_70[0];
            param_2[5] = 1;
LAB_ram_0002426a:
            puVar17 = &DAT_ram_0005c220;
            iVar16 = param_2[4];
          }
          else {
            puVar17 = puVar20;
            if (*(int *)(param_1 + 8) == 4) {
              FUN_ram_00032540(param_2,&DAT_ram_0005c220,local_70,puVar20,param_1);
              puVar17 = &DAT_ram_0005c220;
              iVar16 = 3;
              param_2[4] = 3;
              if (*(int *)(param_1 + 0x74) == 0) {
                param_2[3] = 3;
              }
              else {
                param_2[3] = 1;
                iVar16 = 1;
              }
              FUN_ram_00023e34(&DAT_ram_0005c220,local_70[0]);
            }
            uVar18 = iVar16 + 1;
            uVar14 = (uint)local_70[0];
            iVar16 = param_2[4];
            if (uVar15 != param_2[5]) {
              FUN_ram_00032b3c(puVar17,&DAT_ram_0005c220,uVar14,param_2[5] & 0xff,uVar15,param_2[2])
              ;
              uVar14 = param_2[5];
              if (uVar14 < uVar15) {
                local_70[0] = local_70[0] >> (uVar15 - uVar14 & 0x1f);
                uVar14 = (uint)local_70[0];
              }
              else {
                uVar11 = (uint)local_70[0] << (uVar14 - uVar15 & 0x1f);
                uVar14 = uVar11 & 0xffff;
                local_70[0] = (ushort)uVar11;
              }
              param_2[5] = uVar15;
              goto LAB_ram_0002426a;
            }
          }
          iVar16 = FUN_ram_00023d8c(puVar17,uVar14,uVar18,iVar16 + 1);
          if (iVar16 == 0) {
            iVar16 = param_2[4] + 1;
            if (((*(int *)(param_1 + 0x70) == 0) && (1 < iVar8)) && (iVar8 < 4)) {
              FUN_ram_00022f38(puVar17,local_70[0],iVar16,iVar8);
              iVar16 = param_2[4] + 1;
            }
            FUN_ram_00023130(puVar17,&puStack_44,local_70[0],uVar18,iVar16,
                             *(uint *)(param_3 + 4) & 1);
            *(undefined4 *)(param_1 + 0x28) = 1;
            if ((iVar21 < 2) && (1 < (int)uVar18)) {
              puVar9 = puVar6;
              if (uVar18 == 2) {
                puVar9 = puVar17;
              }
              FUN_ram_00023dc8(puVar9,local_70[0],2);
            }
            if ((iVar21 < 3) && (2 < (int)uVar18)) {
              puVar9 = puVar7;
              if (uVar18 == 3) {
                puVar9 = puVar17;
              }
              FUN_ram_00023dc8(puVar9,local_70[0],3);
            }
            if ((iVar21 < 4) && (3 < (int)uVar18)) {
              FUN_ram_00023dc8(puVar17,local_70[0],4);
            }
            iVar21 = *(int *)(param_1 + 0x20);
            uVar14 = *(uint *)(param_1 + 100) & 0xff;
            uVar15 = *(uint *)(param_1 + 0x3c) & 0xff;
            if (((char)param_2[2] == '\x01') && (uVar14 == 2)) {
              if (uVar15 == 1) {
                local_6c[0] = iVar21 + 0x400;
                local_6c[1] = iVar21 + 0xf00;
              }
              else {
                local_6c[0] = iVar21 + 0x200;
                local_6c[1] = iVar21 + 0x780;
              }
LAB_ram_000243c4:
              uVar15 = 1;
            }
            else {
              if (((char)param_2[2] == '\0') && (uVar14 != 0)) {
                if ((uVar14 == 2) && (uVar15 == 1)) {
                  local_6c[0] = iVar21 + 0x600;
                  local_6c[1] = iVar21 + 0x1300;
                }
                else if (uVar14 == 2) {
                  local_6c[0] = iVar21 + 0x300;
                  local_6c[1] = iVar21 + 0x980;
                }
                else {
                  local_6c[0] = iVar21 + 0x200;
                  local_6c[1] = iVar21 + 0x700;
                }
                goto LAB_ram_000243c4;
              }
              if (uVar14 == 2) {
                if (uVar15 == 1) {
                  local_6c[1] = iVar21 + 0x700;
                  local_6c[2] = iVar21 + 0x1500;
                  local_6c[3] = iVar21 + 0x2100;
                }
                else {
                  local_6c[1] = iVar21 + 0x380;
                  local_6c[2] = iVar21 + 0xa80;
                  local_6c[3] = iVar21 + 0x1080;
                }
              }
              else {
                local_6c[1] = iVar21 + 0x300;
                local_6c[2] = iVar21 + 0x900;
                local_6c[3] = iVar21 + 0xf00;
              }
              uVar15 = 3;
              local_6c[0] = iVar21;
            }
            uVar14 = uVar18 - 1;
            if ((int)uVar15 < (int)(uVar18 - 1)) {
              uVar14 = uVar15;
            }
            uVar14 = uVar14 & 0xff;
            if (*(int *)(param_1 + 0x24) != 0) {
              puVar9 = puVar5;
              if (uVar18 == 1) {
                puVar9 = puVar17;
              }
              FUN_ram_00023dc8(puVar9,local_70[0],1);
            }
            FUN_ram_0004070c(auStack_54,0x10);
            uVar15 = 0;
            do {
              uVar11 = FUN_ram_0002294c(local_6c[uVar15],(int)(uVar13 << 6) >> (param_2[5] & 0x1fU),
                                        uVar15 + 1);
              uVar19 = uVar15 + 1 & 0xff;
              auStack_54[uVar15] = uVar11;
              uVar15 = uVar19;
            } while (uVar19 <= uVar14);
            uVar11 = auStack_54[uVar14];
            uVar15 = 0;
            if (uVar11 != 0) {
              do {
                pcVar1 = puVar17 + uVar15;
                puVar9 = puVar17 + uVar15;
                uVar15 = uVar15 + 1;
                iVar21 = *pcVar1 + 1 >> 1;
                uVar2 = (undefined1)iVar21;
                if (0x7fffffff < iVar21) {
                  uVar2 = 0xff;
                }
                if (iVar21 < -0x80000000) {
                  uVar2 = 0;
                }
                *puVar9 = uVar2;
              } while (uVar15 < uVar11);
            }
            FUN_ram_0003ec60(&DAT_ram_dcfa0000,puVar17);
            uVar10 = COUNT0;
            *(undefined4 *)(param_1 + 0x78) = uVar10;
            FUN_ram_00023f14();
            iVar21 = COUNT0;
            *(int *)(param_1 + 0x78) = iVar21 - *(int *)(param_1 + 0x78);
            puVar17 = puVar5;
            if (uVar18 == 1) {
              puVar17 = &DAT_ram_dcfa0000;
            }
            iVar21 = FUN_ram_00023a60(local_6c[0],auStack_54[0],puVar17);
            if (iVar21 == 0) {
              *(undefined4 *)(param_1 + 0x28) = 0;
            }
            if (uVar14 != 0) {
              puVar17 = puVar6;
              if (uVar18 == 2) {
                puVar17 = &DAT_ram_dcfa0000;
              }
              iVar21 = FUN_ram_00023a60(local_6c[1],auStack_54[1],puVar17);
              if (iVar21 == 0) {
                *(undefined4 *)(param_1 + 0x28) = 0;
              }
              if (1 < uVar14) {
                puVar17 = puVar7;
                if (uVar18 == 3) {
                  puVar17 = &DAT_ram_dcfa0000;
                }
                iVar21 = FUN_ram_00023a60(local_6c[2],auStack_54[2],puVar17);
                if (iVar21 == 0) {
                  *(undefined4 *)(param_1 + 0x28) = 0;
                }
                if ((uVar14 != 2) &&
                   (iVar21 = FUN_ram_00023a60(local_6c[3],auStack_54[3],&DAT_ram_dcfa0000),
                   iVar21 == 0)) goto LAB_ram_00024554;
              }
            }
          }
          else {
LAB_ram_00024554:
            *(undefined4 *)(param_1 + 0x28) = 0;
          }
          uVar3 = (ulonglong)(uint)(iStack_78 << 8) * (ulonglong)(uVar18 & 0xffff);
          uVar4 = uVar3 + (ulonglong)(uint)(iStack_78 << 8) * (ulonglong)(uVar18 & 0xffff0000);
          if (uVar4 < uVar3) {
            uVar4 = 0xffffffffffffffff;
          }
          FUN_ram_00020aa0(*(undefined4 *)(param_1 + 0x10),
                           (uint)(puVar20 + ((int)uVar4 * uVar13 - *(int *)(param_1 + 0x10)) + 0x23)
                           & 0xffffffe0);
        }
        iVar21 = FUN_ram_0002850c(puVar7,0xc00);
        iVar8 = FUN_ram_0002850c(puVar6,0x800);
        iVar16 = FUN_ram_0002850c(puVar5,0x400);
        if (iVar16 != 0 || (iVar21 != 0 || iVar8 != 0)) {
          return 0;
        }
        FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000552c4,
                         s_os_dsp_scheduler_c_ram_00055270,0x65e);
        FUN_ram_0002086c(s_Error_freeing_xmem_ram_0005532c);
        goto LAB_ram_000241b4;
      }
      FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000552c4,
                       s_os_dsp_scheduler_c_ram_00055270,0x52d);
      uVar10 = FUN_ram_00028530();
      uVar12 = 0xc00;
    }
  }
  FUN_ram_0002086c(s_Not_enougth_xmem__size___u_avail_ram_000552e4,uVar12,uVar10);
LAB_ram_000241b4:
  uVar10 = FUN_ram_00020a44(s_5DSP_exception__assertion_ram_00055310);
  return uVar10;
}


