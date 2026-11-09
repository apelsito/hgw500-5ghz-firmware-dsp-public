/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000406d8 */

void FUN_ram_000406d8(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = PTR_DAT_ram_0005be60_ram_00040708;
  uVar1 = STATUS32;
  if (*(int *)PTR_DAT_ram_000559e4_ram_00040704 != 0) {
    bVar3 = PTR_DAT_ram_0005be60_ram_00040708 == (undefined *)0x0;
    *(undefined4 *)PTR_DAT_ram_000559e4_ram_00040704 = 0;
    if (bVar3) {
      FUN_ram_000406c8();
    }
    FUN_ram_000407fc();
  }
  STATUS32 = uVar1;
  FUN_ram_00029848(puVar2);
  return;
}


