/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00038444 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00038444(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,short *param_4,
                     short *param_5,short *param_6)

{
  if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x4000) != 0) {
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) {
      if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) {
        FUN_ram_0002086c(&LAB_ram_0005581c);
      }
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(&PTR_DAT_ram_000a6425_ram_00055820,param_1);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d_ram_00055840,*param_2,param_2[1],param_2[2],param_2[3]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d_ram_00055840,*param_3,param_3[1],param_3[2],param_3[3]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)*param_4,(int)param_4[1],
                       (int)param_4[2],(int)param_4[3],(int)param_4[4],(int)param_4[5],
                       (int)param_4[6],(int)param_4[7]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_4[8],(int)param_4[9],
                       (int)param_4[10],(int)param_4[0xb],(int)param_4[0xc],(int)param_4[0xd],
                       (int)param_4[0xe],(int)param_4[0xf]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_4[0x10],(int)param_4[0x11],
                       (int)param_4[0x12],(int)param_4[0x13],(int)param_4[0x14],(int)param_4[0x15],
                       (int)param_4[0x16],(int)param_4[0x17]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_4[0x18],(int)param_4[0x19],
                       (int)param_4[0x1a],(int)param_4[0x1b],(int)param_4[0x1c],(int)param_4[0x1d],
                       (int)param_4[0x1e],(int)param_4[0x1f]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)*param_5,(int)param_5[1],
                       (int)param_5[2],(int)param_5[3],(int)param_5[4],(int)param_5[5],
                       (int)param_5[6],(int)param_5[7]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_5[8],(int)param_5[9],
                       (int)param_5[10],(int)param_5[0xb],(int)param_5[0xc],(int)param_5[0xd],
                       (int)param_5[0xe],(int)param_5[0xf]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_5[0x10],(int)param_5[0x11],
                       (int)param_5[0x12],(int)param_5[0x13],(int)param_5[0x14],(int)param_5[0x15],
                       (int)param_5[0x16],(int)param_5[0x17]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_5[0x18],(int)param_5[0x19],
                       (int)param_5[0x1a],(int)param_5[0x1b],(int)param_5[0x1c],(int)param_5[0x1d],
                       (int)param_5[0x1e],(int)param_5[0x1f]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)*param_6,(int)param_6[1],
                       (int)param_6[2],(int)param_6[3],(int)param_6[4],(int)param_6[5],
                       (int)param_6[6],(int)param_6[7]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_6[8],(int)param_6[9],
                       (int)param_6[10],(int)param_6[0xb],(int)param_6[0xc],(int)param_6[0xd],
                       (int)param_6[0xe],(int)param_6[0xf]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_6[0x10],(int)param_6[0x11],
                       (int)param_6[0x12],(int)param_6[0x13],(int)param_6[0x14],(int)param_6[0x15],
                       (int)param_6[0x16],(int)param_6[0x17]);
    }
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)param_6[0x18],(int)param_6[0x19],
                       (int)param_6[0x1a],(int)param_6[0x1b],(int)param_6[0x1c],(int)param_6[0x1d],
                       (int)param_6[0x1e],(int)param_6[0x1f]);
    }
  }
  return;
}


