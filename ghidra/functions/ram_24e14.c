/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00024e14 */

/* WARNING: Removing unreachable block (ram,0x00024e3c) */
/* WARNING: Removing unreachable block (ram,0x00024e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00024e14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_2 + 0x20) & 0x10) == 0) {
    iVar2 = ((uint)*(ushort *)(param_1 + 0x60) % 10) * 4;
    iVar1 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
    *(int *)(iVar2 + iVar1 + -0xd0) = *(int *)(iVar1 + iVar2 + -0xd0) + 1;
    FUN_ram_00024c00();
  }
  else {
    iVar1 = ((uint)*(ushort *)(param_1 + 0x60) % 10) * 4;
    iVar2 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
    *(int *)(iVar1 + iVar2 + -0xf8) = *(int *)(iVar2 + iVar1 + -0xf8) + 1;
    FUN_ram_000249f0();
  }
  return;
}


