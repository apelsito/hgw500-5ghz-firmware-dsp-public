/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025278(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_ram_0002738c();
  uVar3 = 0;
  uVar2 = 0;
  do {
    iVar4 = param_1 + uVar2;
    if (3 < *(byte *)(param_1 + uVar2 + 0x97)) {
      FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000552c4,
                       s_os_dsp_scheduler_c_ram_00055270,0x86d);
      FUN_ram_0002086c(s_mu_grp_id_is_out_of_range___u_ram_000553b0,*(undefined1 *)(iVar4 + 0x97));
      FUN_ram_00020a44(s_5DSP_exception__assertion_ram_00055310);
      return;
    }
    if ((*(char *)(iVar4 + 0x97) != '\0') && ((&DAT_ram_00062220)[uVar2 * 0x28] != '\0')) {
      uVar5 = *(byte *)(iVar4 + 0x97) - 1 & 0xff;
      uVar1 = 1 - uVar3;
      if (1 < uVar3) {
        uVar1 = 0;
      }
      FUN_ram_000248b4(&DAT_ram_00062220 + uVar5 * 0x28,uVar1 & 0xff);
      FUN_ram_00025f18(uVar5);
      uVar3 = uVar3 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 3);
  if (uVar3 != 0) {
    FUN_ram_00022b58(*(undefined4 *)(_DAT_ram_e00000bc + 0x54),0x18);
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1040) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1040) + uVar3;
  }
  return;
}


