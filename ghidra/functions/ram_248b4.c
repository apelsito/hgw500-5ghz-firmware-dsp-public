/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000248b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000248b4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(_DAT_ram_e00000bc + 0x54);
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x28;
      uVar2 = uVar2 + 1 & 0xff;
      *(int *)(iVar3 + 0xff8 + iVar1 + -0x1b8) = *(int *)(iVar3 + 0xff8 + iVar1 + -0x1b8) + 1;
      *(undefined1 *)(iVar1 + iVar3 + 0xe1c) = 0;
    } while (uVar2 < 3);
  }
  uVar2 = (uint)*(byte *)(param_1 + 1);
  if ((uVar2 != 0) && (uVar2 < 4)) {
    FUN_ram_0003ea50(iVar3 + uVar2 * 0x28 + 0xdf4,param_1,0x28);
    return;
  }
  FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000552c4,s_os_dsp_scheduler_c_ram_00055270,
                   0x6f2);
  FUN_ram_0002086c(s_qmat_>grp_id_is_out_or_range___u_ram_00055340,*(undefined1 *)(param_1 + 1));
  FUN_ram_00020a44(s_5DSP_exception__assertion_ram_00055310);
  return;
}


