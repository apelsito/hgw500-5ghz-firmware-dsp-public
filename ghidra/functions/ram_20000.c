/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020000 */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dsp_carrier_entry(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  FUN_ram_00020200();
  _DAT_ram_e0000068 = 0;
  Auxregs0025 = 0x20000;
  STATUS32 = 0;
  AUX_IENABLE = 0;
  AUX_IRQ_LEV = 0;
  _DAT_ram_e0000060 = 0x400000;
  _DAT_ram_e0000054 = 0xffffffff;
  puVar2 = &DAT_ram_000b83a0;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0xa5;
    puVar2 = puVar1;
  } while (puVar1 < (undefined1 *)0xbaba0);
  _DAT_ram_000b83a0 = 0xabcdefab;
  FUN_ram_00025538(0);
  FUN_ram_00020200();
  FUN_ram_000201e4(0x201d4);
  return;
}


