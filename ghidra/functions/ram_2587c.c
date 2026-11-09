/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002587c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0002587c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x2000) != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
         *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xffffdfff;
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s_DSP__act_frame_len__d__expected__ram_000553f0,
                       *(undefined4 *)(param_1 + 0x18),param_2);
    }
    iVar3 = 0;
    if (-1 < param_2 >> 5) {
      do {
        if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
           (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
          iVar1 = iVar3 * 0x20;
          FUN_ram_0002086c(s_Act_Frame___3d_0x_08x__0x_08x__0_ram_00055424,iVar3,
                           *(undefined4 *)(iVar2 + iVar1),*(undefined4 *)(iVar2 + iVar1 + 4),
                           *(undefined4 *)(iVar2 + iVar1 + 8),*(undefined4 *)(iVar2 + iVar1 + 0xc),
                           *(undefined4 *)(iVar2 + iVar1 + 0x10),
                           *(undefined4 *)(iVar2 + iVar1 + 0x14),
                           *(undefined4 *)(iVar2 + iVar1 + 0x18),
                           *(undefined4 *)(iVar1 + iVar2 + 0x1c));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_2 >> 5);
    }
  }
  return;
}


