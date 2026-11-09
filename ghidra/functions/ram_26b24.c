/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00026b24 */

/* WARNING: Removing unreachable block (ram,0x00026ba8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00026b24(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 < 0xc) {
    if (param_2 < 0xc) {
      iVar5 = param_3 * 0x6858;
      if ((&DAT_ram_00068b70)[iVar5] == '\0') {
        iVar3 = ((uint)*(ushort *)(*(int *)(&DAT_ram_00062358 + iVar5) + 0x60) % 10) * 4;
        iVar4 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
        *(int *)(iVar3 + iVar4 + -8) = *(int *)(iVar4 + iVar3 + -8) + 1;
      }
      iVar3 = param_1 * 0x18;
      (&DAT_ram_000622e4)[param_2 + iVar3] = 0xc;
      FUN_ram_00025b14(*(undefined4 *)(&DAT_ram_00062358 + iVar5));
      cVar1 = (&DAT_ram_000622f0)[iVar3];
      (&DAT_ram_0006231c)[param_3 * 0x1a16] = 0;
      *(undefined4 *)(&DAT_ram_00062358 + iVar5) = 0;
      (&DAT_ram_0006235c)[iVar5] = 0;
      (&DAT_ram_0006435e)[iVar5] = 0;
      (&DAT_ram_000622f0)[iVar3] = cVar1 + -1;
      (&DAT_ram_00068b70)[iVar5] = 0;
      if (cVar1 == '\x01') {
        FUN_ram_000266a0(param_1,0);
      }
      return;
    }
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_0005547c,s_os_dsp_cache_c_ram_0005549c,
                     0xf8);
    pcVar2 = s_Invalid_idx___u_ram_000554ac;
    param_3 = param_2;
  }
  else {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_0005547c,s_os_dsp_cache_c_ram_0005549c,
                     0xf7);
    pcVar2 = s_Invalid_i___u_ram_000554dc;
  }
  FUN_ram_0002086c(pcVar2,param_3);
  FUN_ram_00020a44(s_5DSP_exception__assertion_ram_000554c0);
  return;
}


