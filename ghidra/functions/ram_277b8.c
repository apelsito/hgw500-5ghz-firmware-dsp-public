/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000277b8 */

void FUN_ram_000277b8(uint param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x42) {
    if ((byte)(&DAT_ram_000b241c)[param_1] < 0x42) {
      return;
    }
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000554ec,s_os_dsp_grcand_c_ram_0005550c,
                     0x108);
    pcVar1 = s_Invalid_map_idx___u_ram_0005554c;
    param_1 = (uint)(byte)(&DAT_ram_000b241c)[param_1];
  }
  else {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000554ec,s_os_dsp_grcand_c_ram_0005550c,
                     0x107);
    pcVar1 = s_Invalid_idx___u_ram_0005551c;
  }
  FUN_ram_0002086c(pcVar1,param_1);
  FUN_ram_00020a44(s_5DSP_exception__assertion_ram_00055530);
  return;
}


