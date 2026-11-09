/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003c248 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_0003c248(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = (longlong)(int)(param_1 & 0xffff) * 0x66666667;
  uVar2 = (longlong)(int)(param_1 & 0xffff0000) * 0x66666667;
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar7 = param_1 + ((int)((longlong)uVar3 >> 0x23) - ((int)param_1 >> 0x1f)) * -0x14;
  if ((int)param_1 < 0x80) {
    iVar6 = (int)(char)(&DAT_ram_000b80fc)[param_1];
    if (iVar6 != -1) {
      if ((int)(short)(&DAT_ram_000b8184)[iVar6 * 10] != param_1) {
        FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000558a4,
                         s_lib_dsp_snr_filter_c_ram_0005588c,0x4f);
        FUN_ram_0002086c(s_aid_does_not_match_ram_000558c4);
        iVar7 = FUN_ram_00020a44(s_5DSP_exception__assertion_ram_000558d8);
        return iVar7;
      }
      return iVar6;
    }
    iVar6 = 0;
    do {
      if ((short)(&DAT_ram_000b8184)[iVar7 * 10] == -1) {
LAB_ram_0003c348:
        bVar4 = true;
      }
      else {
        uVar8 = (&DAT_ram_000b8188)[iVar7 * 5] + 800000000;
        if ((int)((((&DAT_ram_000b818c)[iVar7 * 5] +
                   (uint)(0xd050f7ff < (uint)(&DAT_ram_000b8188)[iVar7 * 5])) - param_3) -
                 (uint)(uVar8 < param_2)) < 0) {
          (&DAT_ram_000b80fc)[(short)(&DAT_ram_000b8184)[iVar7 * 10]] = 0xff;
          FUN_ram_0004070c(&DAT_ram_000b817c + iVar7 * 10,0x14,uVar8 - param_2);
          (&DAT_ram_000b8184)[iVar7 * 10] = 0xffff;
          goto LAB_ram_0003c348;
        }
        bVar4 = false;
      }
      if (bVar4) {
        (&DAT_ram_000b8184)[iVar7 * 10] = (short)param_1;
        (&DAT_ram_000b80fc)[param_1] = (char)iVar7;
        return (int)(char)iVar7;
      }
      uVar8 = iVar7 + 1;
      uVar1 = (longlong)(int)(uVar8 & 0xffff) * 0x66666667;
      uVar2 = (longlong)(int)(uVar8 & 0xffff0000) * 0x66666667;
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar7 = uVar8 + ((int)((longlong)uVar3 >> 0x23) - ((int)uVar8 >> 0x1f)) * -0x14;
    } while (iVar6 < 0x14);
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) == 0) {
      return -1;
    }
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) == 0) {
      return -1;
    }
    pcVar5 = s__s___cache_are_full_occupied_ram_0005586c;
  }
  else {
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) == 0) {
      return -1;
    }
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) == 0) {
      return -1;
    }
    pcVar5 = s__s___maximum_aid_reached_ram_00055850;
  }
  FUN_ram_0002086c(pcVar5,s_lib_dsp_snr_filter_c_ram_0005588c);
  return -1;
}


