/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033e48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00033e48(int param_1,short *param_2,int param_3)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_3 + 0xc);
  uVar5 = 0;
  do {
    bVar1 = *(byte *)(param_1 + uVar5);
    psVar2 = param_2 + uVar5;
    if (bVar1 < 0x80) {
      sVar4 = bVar1 + 0x58;
    }
    else {
      sVar4 = bVar1 - 0xa8;
    }
    uVar5 = uVar5 + 1 & 0xff;
    *psVar2 = sVar4;
  } while (uVar5 <= uVar3);
  if (((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x400) != 0) &&
     (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
    sVar4 = *(short *)(param_3 + 0x24);
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) == 0) goto LAB_ram_00033ef6;
    FUN_ram_0002086c(s_aid____d_avg_snr__before_filter__ram_00055724,sVar4,(int)*param_2 >> 2,
                     (int)param_2[1] >> 2,(int)param_2[2] >> 2,(int)param_2[3] >> 2);
    uVar3 = *(uint *)(param_3 + 0xc);
  }
  sVar4 = *(short *)(param_3 + 0x24);
LAB_ram_00033ef6:
  FUN_ram_0003c4d8((int)sVar4,param_2,uVar3);
  if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x400) != 0) {
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s_aid____d_avg_snr__after_filter___ram_00055758,
                       *(undefined2 *)(param_3 + 0x24),(int)*param_2 >> 2,(int)param_2[1] >> 2,
                       (int)param_2[2] >> 2,(int)param_2[3] >> 2);
    }
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
         *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xfffffbff;
  }
  return;
}


