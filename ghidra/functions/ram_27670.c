/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027670 */

undefined * FUN_ram_00027670(uint param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  
  if ((int)param_1 < 0x42) {
    if ((byte)(&DAT_ram_000b241c)[param_1] < 0x42) {
      piVar1 = (int *)FUN_ram_00026acc(0,(&DAT_ram_000b073c)
                                         [(uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x38]);
      piVar2 = (int *)FUN_ram_00026acc(0,(&DAT_ram_000b073e)
                                         [(uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x38]);
      *param_4 = 0;
      if ((((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) || (*piVar1 == 0)) || (*piVar2 == 0))
      {
        iVar5 = FUN_ram_00025e54((&DAT_ram_000b073c)
                                 [(uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x38],
                                 (&DAT_ram_000b073e)
                                 [(uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x38]);
        *param_4 = iVar5;
        if (iVar5 == 0) {
          iVar5 = FUN_ram_00025e54((&DAT_ram_000b073e)
                                   [(uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x38],
                                   (&DAT_ram_000b073c)
                                   [(uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x38]);
          *param_4 = iVar5;
        }
        *param_2 = 0;
        *param_3 = 0;
        if (*param_4 == 0) {
          return (undefined *)0x0;
        }
      }
      else {
        *param_2 = (int)piVar1;
        *param_3 = (int)piVar2;
      }
      return &DAT_ram_000b0740 + (uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x70;
    }
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000554ec,s_os_dsp_grcand_c_ram_0005550c,
                     0xe3);
    pcVar4 = s_Invalid_map_idx___u_ram_0005554c;
    param_1 = (uint)(byte)(&DAT_ram_000b241c)[param_1];
  }
  else {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_000554ec,s_os_dsp_grcand_c_ram_0005550c,
                     0xe2);
    pcVar4 = s_Invalid_idx___u_ram_0005551c;
  }
  FUN_ram_0002086c(pcVar4,param_1);
  puVar3 = (undefined *)FUN_ram_00020a44(s_5DSP_exception__assertion_ram_00055530);
  return puVar3;
}


