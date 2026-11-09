/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00036c20 */

void FUN_ram_00036c20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_000284e4(0x1008);
  if (iVar1 == 0) {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_0005578c,s_lib_dsp_mu_mimo_c_ram_000557ac,
                     0xa00);
    uVar2 = FUN_ram_00028530();
    FUN_ram_0002086c(s_Not_enougth_xmem__size___u_avail_ram_000557c0,0x1008,uVar2);
  }
  else {
    FUN_ram_00036b3c(*(undefined4 *)(param_1 + 0xc),iVar1,1,*(undefined4 *)(param_2 + 0xc),0x808);
    FUN_ram_00036b3c(*(undefined4 *)(param_1 + 0x10),iVar1,1,*(undefined4 *)(param_2 + 0x10),0xc08);
    FUN_ram_00036b3c(*(undefined4 *)(param_1 + 0x14),iVar1,1,*(undefined4 *)(param_2 + 0x14),0x1008)
    ;
    FUN_ram_00036b3c(*(undefined4 *)(param_1 + 0x18),iVar1,1,*(undefined4 *)(param_2 + 0x18),0xc08);
    FUN_ram_00036b3c(*(undefined4 *)(param_1 + 0x1c),iVar1,1,*(undefined4 *)(param_2 + 0x1c),0x1008)
    ;
    FUN_ram_00036b3c(*(undefined4 *)(param_1 + 0x20),iVar1,1,*(undefined4 *)(param_2 + 0x20),0x1008)
    ;
    iVar1 = FUN_ram_0002850c(iVar1,0x1008);
    if (iVar1 != 0) {
      return;
    }
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_0005578c,s_lib_dsp_mu_mimo_c_ram_000557ac,
                     0xa1b);
    FUN_ram_0002086c(s_Error_freeing_xmem_ram_00055808);
  }
  FUN_ram_00020a44(s_5DSP_exception__assertion_ram_000557ec);
  return;
}


