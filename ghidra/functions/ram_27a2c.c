/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027a2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00027a2c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_ram_00055968 != 0) {
    do {
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        uVar1 = (uint)(byte)(&DAT_ram_000b241c)[uVar3];
        FUN_ram_0002086c(s_aid1____u__aid2____u__MAX_MU___M_ram_00055564,
                         (&DAT_ram_000b073c)[uVar1 * 0x38],(&DAT_ram_000b073e)[uVar1 * 0x38],
                         *(undefined4 *)(&DAT_ram_000b0790 + uVar1 * 0x70),
                         (&PTR_DAT_ram_00054a10_ram_0005ac38)
                         [*(int *)(&DAT_ram_000b0798 + uVar1 * 0x70)]);
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        iVar2 = (uint)(byte)(&DAT_ram_000b241c)[uVar3] * 0x70;
        FUN_ram_0002086c(s__MU_TP___SU_TP____SU_TP_____d__d_ram_000555b0,
                         *(undefined4 *)(&DAT_ram_000b0778 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b077c + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0780 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0784 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0788 + iVar2),*(undefined4 *)(iVar2 + 0xb078c)
                        );
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        iVar2 = (uint)(byte)(&DAT_ram_000b241c)[uVar3] * 0x70;
        FUN_ram_0002086c(s_MU_TP_____d__d__d__d__d__d___max_ram_000555e0,
                         *(undefined4 *)(&DAT_ram_000b0740 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0744 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0748 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b074c + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0750 + iVar2),
                         *(undefined4 *)(&DAT_ram_000b0754 + iVar2),*(undefined4 *)(iVar2 + 0xb0758)
                        );
      }
      if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) == 0) {
LAB_ram_00027bc0:
        iVar2 = (uint)(byte)(&DAT_ram_000b241c)[uVar3] * 0x70;
      }
      else {
        iVar2 = (uint)(byte)(&DAT_ram_000b241c)[uVar3] * 0x70;
        if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) {
          FUN_ram_0002086c(s_SU_TP_____d__d__d__d__d__d___max_ram_0005560c,
                           *(undefined4 *)(&DAT_ram_000b075c + iVar2),
                           *(undefined4 *)(&DAT_ram_000b0760 + iVar2),
                           *(undefined4 *)(iVar2 + 0xb0764),
                           *(undefined4 *)(&DAT_ram_000b0768 + iVar2),
                           *(undefined4 *)(&DAT_ram_000b076c + iVar2),
                           *(undefined4 *)(&DAT_ram_000b0770 + iVar2),
                           *(undefined4 *)(&DAT_ram_000b0774 + iVar2));
          goto LAB_ram_00027bc0;
        }
      }
      iVar2 = *(int *)(&DAT_ram_000b079c + iVar2);
      if (((iVar2 != 0) && (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(s_Qmat_is_installed__grp_id____u__u_ram_00055638,*(undefined1 *)(iVar2 + 1)
                         ,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < DAT_ram_00055968);
  }
  return;
}


