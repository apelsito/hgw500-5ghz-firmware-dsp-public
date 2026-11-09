/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002297c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_0002297c(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_ram_00055954;
  do {
    uVar2 = STATUS32;
    if ((uVar2 & 6) != 0) {
      STATUS32 = uVar2 & 0xfffffff9;
    }
    uVar2 = uVar2 | 4;
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1080) = uVar2;
    do {
      DAT_ram_00055954 = DAT_ram_00055954 + 1;
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1044) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1044) + 1;
      if (0x10 < DAT_ram_00055954) {
        DAT_ram_00055954 = 0;
      }
      iVar3 = *(int *)(&DAT_ram_00062298)[DAT_ram_00055954];
      if (iVar3 != -1) {
        *(int *)(&DAT_ram_00062298)[DAT_ram_00055954] = -1;
        STATUS32 = uVar2;
        *param_3 = (uint)((&DAT_ram_00062298)[DAT_ram_00055954] != param_2);
        return iVar3;
      }
    } while (DAT_ram_00055954 != uVar1);
    *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x104c) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x104c) + 1;
    FUN_ram_00020120(uVar2);
    *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1050) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1050) + 1;
  } while( true );
}


