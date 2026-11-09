/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027828 */

void FUN_ram_00027828(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x42) {
    if ((byte)(&DAT_ram_000b241c)[param_1] < 0x42) {
      *(undefined4 *)(&DAT_ram_000b079c + (uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x70) = param_2
      ;
      return;
    }
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000554ec,s_os_dsp_grcand_c_ram_0005550c,
                     0x10e);
    pcVar1 = s_Invalid_map_idx___u_ram_0005554c;
    param_1 = (uint)(byte)(&DAT_ram_000b241c)[param_1];
  }
  else {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000554ec,s_os_dsp_grcand_c_ram_0005550c,
                     0x10d);
    pcVar1 = s_Invalid_idx___u_ram_0005551c;
  }
  FUN_ram_0002086c(pcVar1,param_1);
  FUN_ram_00020a44(s_5DSP_exception__assertion_ram_00055530);
  return;
}


