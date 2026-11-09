/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000407fc */

void FUN_ram_000407fc(void)

{
  int iVar1;
  
  for (iVar1 = *(int *)(PTR_DAT_ram_0005be50_ram_0004086c + 4); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 8)) {
    (**(code **)(iVar1 + 4))();
  }
  FUN_ram_00029848();
  return;
}


