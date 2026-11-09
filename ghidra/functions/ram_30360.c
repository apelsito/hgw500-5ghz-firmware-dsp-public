/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00030360 */

void FUN_ram_00030360(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined2 *)&DAT_ram_dcf81800;
  puVar2 = &DAT_ram_0004c920;
  do {
    uVar3 = uVar3 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x1000);
  uVar3 = 0;
  puVar1 = (undefined2 *)&DAT_ram_dcfa1000;
  puVar2 = &DAT_ram_00040920;
  do {
    uVar3 = uVar3 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x1800);
  return;
}


